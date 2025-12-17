#pragma once
#include "FeatureExtractor.h"
#include "ExecutionSimulator.h"
#include "LatencyQueueSimulator.h"

class DecisionEngine {
public:
    DecisionEngine(ExecutionSimulator& simulator, LatencyQueueSimulator& latencySimulator);
    void on_event(const Features& features);

private:
    ExecutionSimulator& simulator;
    LatencyQueueSimulator& latencySimulator;
};
