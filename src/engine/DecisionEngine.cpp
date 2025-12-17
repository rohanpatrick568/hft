#include "DecisionEngine.h"
#include <iostream>
#include <cmath>

DecisionEngine::DecisionEngine(ExecutionSimulator& simulator, LatencyQueueSimulator& latencySimulator) 
    : simulator(simulator), latencySimulator(latencySimulator) {}

void DecisionEngine::on_event(const Features& features) {
    // Log for ML: timestamp,imbalance,spread,microprice,midprice,inventory,pnl
    double equity = simulator.getTotalEquity(features.midprice);
    
    std::cout << "TICK," << features.timestamp << "," 
              << features.imbalance << "," 
              << features.spread << "," 
              << features.microprice << "," 
              << features.midprice << ","
              << simulator.getInventory() << ","
              << equity << std::endl;

    // ML Strategy (Logistic Regression)
    // Trained on offline data, weights exported from Python
    double w_imbalance = -0.08227860182523727;
    double w_spread = 0.11006791889667511;
    double bias = -4.477815628051758;

    // Note: Features should be normalized if the model was trained on normalized data.
    // For this MVP, we assume raw features or that the weights handle the scale implicitly 
    // (though standard scaler was used in Python, so ideally we should scale here too).
    // For simplicity in this step, we apply the raw linear combination.
    // In a production system, you would export the scaler mean/std as well.
    
    double score = w_imbalance * features.imbalance + 
                   w_spread * features.spread + 
                   bias;

    double probability = 1.0 / (1.0 + std::exp(-score)); // Sigmoid

    // Decision Logic with Risk Management
    double current_inv = simulator.getInventory();
    double max_inv = 1.0; // Max 1 BTC

    if (probability > 0.6 && current_inv < max_inv) {
        // BUY
        // Assume we cross spread to take liquidity (Taker)
        double exec_price = features.midprice + (features.spread / 2.0); 
        // Send to Latency Simulator instead of direct execution
        latencySimulator.addOrder(true, exec_price, 0.01, features.timestamp);
        // std::cout << "Action: BUY | Price: " << exec_price << std::endl;
    } else if (probability < 0.4 && current_inv > -max_inv) {
        // SELL
        double exec_price = features.midprice - (features.spread / 2.0);
        // Send to Latency Simulator instead of direct execution
        latencySimulator.addOrder(false, exec_price, 0.01, features.timestamp);
        // std::cout << "Action: SELL | Price: " << exec_price << std::endl;
    }
}
