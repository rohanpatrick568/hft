#pragma once
#include "FeatureExtractor.h"
#include "ExecutionSimulator.h"
#include "LatencyQueueSimulator.h"
#include <vector>
#include <deque>

class DecisionEngine {
public:
    DecisionEngine(ExecutionSimulator& simulator, LatencyQueueSimulator& latencySimulator, double risk_aversion = 0.1, int window_size = 100);
    void on_event(const Features& features);

private:
    ExecutionSimulator& simulator;
    LatencyQueueSimulator& latencySimulator;
    
    // Avellaneda-Stoikov Parameters
    double risk_aversion; // gamma
    int window_size;
    
    // Volatility Calculation
    std::deque<double> price_history;
    double calculate_volatility();
};
