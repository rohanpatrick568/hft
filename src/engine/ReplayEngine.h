#pragma once
#include <string>
#include <vector>
#include "../orderbook/OrderBook.h"
#include "FeatureExtractor.h"
#include "DecisionEngine.h"
#include "ExecutionSimulator.h"
#include "LatencyQueueSimulator.h"

class ReplayEngine {
public:
    ReplayEngine(OrderBook& book, FeatureExtractor& featureExtractor, DecisionEngine& decisionEngine, ExecutionSimulator& executionSimulator, LatencyQueueSimulator& latencySimulator);
    void loadData(const std::string& filePath);
    void loadSnapshots(const std::string& filePath);
    void run();

private:
    OrderBook& book;
    FeatureExtractor& featureExtractor;
    DecisionEngine& decisionEngine;
    ExecutionSimulator& executionSimulator;
    LatencyQueueSimulator& latencySimulator;
    std::vector<MarketEvent> events;
    
    void parseCSV(const std::string& filePath);
    void parseSnapshotCSV(const std::string& filePath);
};
