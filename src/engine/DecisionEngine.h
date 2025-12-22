#pragma once
#include "FeatureExtractor.h"
#include "ExecutionInterface.h"
#include <vector>
#include <deque>

class DecisionEngine {
public:
    DecisionEngine(ExecutionInterface& execution, double risk_aversion = 0.1, int window_size = 100, bool use_ml = true);
    void on_event(const Features& features);
    double getLastAlpha() const { return last_alpha; }
    void setOrderSize(double size) { order_size = size; }
    void setHalfSpread(double spread) { half_spread = spread; }
    void setSkewFactor(double skew) { skew_factor = skew; }
    void setMaxInventory(double limit) { max_inventory = limit; }

private:
    ExecutionInterface& execution;
    double last_alpha = 0.0;
    double order_size = 0.01;
    double max_inventory = 100.0;
    
    // Avellaneda-Stoikov Parameters
    double risk_aversion; // gamma
    int window_size;
    bool use_ml;
    
    double half_spread = 0.0;
    double skew_factor = 1.0;

    // Volatility Calculation
    std::deque<double> price_history;
    double calculate_volatility();
    
    uint64_t last_order_time = 0;
    uint64_t min_order_interval_ns = 100000000; // 100ms
};
