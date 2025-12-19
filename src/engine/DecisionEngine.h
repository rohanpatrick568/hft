#pragma once
#include "FeatureExtractor.h"
#include "ExecutionSimulator.h"
#include "LatencyQueueSimulator.h"
#include <vector>
#include <deque>

class DecisionEngine {
public:
    DecisionEngine(ExecutionSimulator& simulator, LatencyQueueSimulator& latencySimulator, double risk_aversion = 0.1, int window_size = 100, bool use_ml = true);
    void on_event(const Features& features);
    double getLastAlpha() const { return last_alpha; }
    void setOrderSize(double size) { order_size = size; }

private:
    ExecutionSimulator& simulator;
    LatencyQueueSimulator& latencySimulator;
    double last_alpha = 0.0;
    double order_size = 0.01;
    
    // Avellaneda-Stoikov Parameters
    double risk_aversion; // gamma
    int window_size;
    bool use_ml;
    
    // Volatility Calculation
    std::deque<double> price_history;
    double calculate_volatility();
};
