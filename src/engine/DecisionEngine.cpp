#include "DecisionEngine.h"
extern "C" {
    #include "model_compiled.h" // Treelite compiled model
}
#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>
#include <string>

DecisionEngine::DecisionEngine(ExecutionInterface& execution, double risk_aversion, int window_size, bool use_ml) 
    : execution(execution), risk_aversion(risk_aversion), window_size(window_size), use_ml(use_ml) {}

double DecisionEngine::calculate_volatility() {
    if (price_history.size() < 2) return 0.0;
    
    double sum = std::accumulate(price_history.begin(), price_history.end(), 0.0);
    double mean = sum / price_history.size();
    
    double sq_sum = 0.0;
    for (double p : price_history) {
        sq_sum += (p - mean) * (p - mean);
    }
    
    return sq_sum / (price_history.size() - 1); // Sample variance
}

void DecisionEngine::on_event(const Features& features) {
    // Update Price History for Volatility
    if (features.midprice > 0) {
        price_history.push_back(features.midprice);
        if (price_history.size() > window_size) {
            price_history.pop_front();
        }
    }

    // Log for ML: timestamp,imbalance,spread,microprice,midprice,inventory,pnl
    double equity = execution.getTotalPnL(features.midprice); // Using PnL as proxy for equity tracking in logs
    
    // Calculate Volatility (Variance)
    double sigma_sq = calculate_volatility();
    
    // Avellaneda-Stoikov Logic
    // 1. Get Inventory (q)
    double q = execution.getInventory();
    
    // 2. Calculate Reservation Price (r)
    // r = s - q * gamma * sigma^2 + alpha (ML Signal)
    double s = features.midprice;
    
    double alpha_signal = 0.0;
    if (use_ml) {
        // ML Inference (Treelite)
        // Features: Imbalance, Spread, Arrival Rate, VPIN, Effective Spread, OFI
        // MUST MATCH python/train_model.py
        union Entry data[6];
        data[0].fvalue = (double)features.imbalance;
        data[1].fvalue = (double)features.spread;
        data[2].fvalue = (double)features.arrival_rate;
        data[3].fvalue = (double)features.vpin;
        data[4].fvalue = (double)features.effective_spread;
        data[5].fvalue = (double)features.ofi;
        
        // predict returns the raw score (or leaf value sum)
        // For regression, this is the prediction.
        alpha_signal = predict(data, 0);
    } else {
        // Baseline: Random Trading (20% chance to trade)
        // We use a simple pseudo-random check
        // rand() is not thread-safe or high-quality, but sufficient for baseline
        // We want to randomly perturb the reservation price to induce trades
        // or just randomly decide to place orders.
        // Let's add random noise to alpha instead.
        
        // 20% chance to have a non-zero alpha (random direction)
        if ((rand() % 100) < 20) {
             // Random alpha between -10 and 10
             alpha_signal = (double)((rand() % 2000) - 1000) / 100.0;
        }
    }
    
    last_alpha = alpha_signal;

    // Apply skew_factor to inventory term
    double r = s - q * risk_aversion * skew_factor * sigma_sq + alpha_signal;
    
    // 3. Calculate Quotes
    // Use fixed half_spread if set, otherwise dynamic
    double current_half_spread = (half_spread > 0) ? half_spread : (features.spread / 2.0);
    if (current_half_spread <= 0) current_half_spread = 0.5; // Fallback
    
    double bid_price = r - current_half_spread;
    double ask_price = r + current_half_spread;
    
    // Log State
    std::cout << "TICK," << features.timestamp << "," 
              << features.imbalance << "," 
              << features.spread << "," 
              << features.microprice << "," 
              << features.midprice << ","
              << q << ","
              << equity << ","
              << r << "," // Log Reservation Price
              << sigma_sq << "," // Log Volatility
              << alpha_signal << "," // Log Alpha Signal
              << features.arrival_rate << "," // Log Arrival Rate
              << features.vpin << "," // Log VPIN
              << features.effective_spread << "," // Log Effective Spread
              << features.ofi // Log OFI
              << std::endl; 

    // 4. Place Orders (Market Making)
    // Phase 6.1: Decision Dead-Zone & Signal Gating
    // Reduce noise trading by requiring sufficient model confidence before placing quotes.
    
    // Phase 7.4: Strategy Kill-Switch
    // Disable trading in High Volatility regimes where alpha is unstable.
    if (features.regime.find("HIGH_VOL") != std::string::npos) {
        // std::cout << "Kill-Switch Active: " << features.regime << std::endl;
        return;
    }

    constexpr double ALPHA_THRESHOLD = 0.5;
    double quantity = order_size; // Use configured size
    double MAX_INVENTORY = 100.0 * order_size; // Scale inventory limit with order size

    // Only trade if the signal is strong enough
    if (std::abs(alpha_signal) > ALPHA_THRESHOLD) {
        // If alpha is positive (price expected to rise), we want to buy.
        // We place a BID.
        if (alpha_signal > ALPHA_THRESHOLD) {
            if (q < MAX_INVENTORY) {
                execution.placeOrder(true, bid_price, quantity, features.timestamp);
            }
        }
        // If alpha is negative (price expected to fall), we want to sell.
        // We place an ASK.
        else if (alpha_signal < -ALPHA_THRESHOLD) {
            if (q > -MAX_INVENTORY) {
                execution.placeOrder(false, ask_price, quantity, features.timestamp);
            }
        }
    }
}
