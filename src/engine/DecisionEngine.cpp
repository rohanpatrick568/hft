#include "DecisionEngine.h"
#include <iostream>
#include <cmath>
#include <numeric>
#include <algorithm>

DecisionEngine::DecisionEngine(ExecutionSimulator& simulator, LatencyQueueSimulator& latencySimulator, double risk_aversion, int window_size) 
    : simulator(simulator), latencySimulator(latencySimulator), risk_aversion(risk_aversion), window_size(window_size) {}

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
    double equity = simulator.getTotalEquity(features.midprice);
    
    // Calculate Volatility (Variance)
    double sigma_sq = calculate_volatility();
    
    // Avellaneda-Stoikov Logic
    // 1. Get Inventory (q)
    double q = simulator.getInventory();
    
    // 2. Calculate Reservation Price (r)
    // r = s - q * gamma * sigma^2
    double s = features.midprice;
    double r = s - q * risk_aversion * sigma_sq;
    
    // 3. Calculate Quotes
    // For this implementation, we place quotes at half spread around reservation price
    // Or we can use the model's optimal spread formula: delta = gamma * sigma^2 * T + (2/gamma) * ln(1 + gamma/k)
    // Simplified: Use current market spread or a fixed minimum spread
    double half_spread = features.spread / 2.0;
    if (half_spread <= 0) half_spread = 0.5; // Fallback if spread is 0
    
    double bid_price = r - half_spread;
    double ask_price = r + half_spread;
    
    // Log State
    std::cout << "TICK," << features.timestamp << "," 
              << features.imbalance << "," 
              << features.spread << "," 
              << features.microprice << "," 
              << features.midprice << ","
              << q << ","
              << equity << ","
              << r << "," // Log Reservation Price
              << sigma_sq << std::endl; // Log Volatility

    // 4. Place Orders (Market Making)
    // We place BOTH a Bid and an Ask to capture the spread
    // Note: In a real system, we would cancel previous orders first.
    // Here, LatencyQueueSimulator handles "new" orders. 
    // Ideally, we should have order management to update quotes.
    // For this simulation step, we just send new quotes.
    
    double quantity = 0.01; // Fixed size
    
    // Place Bid
    latencySimulator.addOrder(true, bid_price, quantity, features.timestamp);
    
    // Place Ask
    latencySimulator.addOrder(false, ask_price, quantity, features.timestamp);
}
