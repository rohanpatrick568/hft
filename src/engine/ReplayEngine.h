#pragma once
#include <string>
#include <vector>
#include "../orderbook/OrderBook.h"
#include "FeatureExtractor.h"
#include "DecisionEngine.h"
#include "ExecutionSimulator.h"
#include "LatencyQueueSimulator.h"

class ReplayEngine {
private:
    OrderBook& book;
    FeatureExtractor& featureExtractor;
    DecisionEngine& decisionEngine;
    ExecutionSimulator& executionSimulator;
    LatencyQueueSimulator& latencySimulator;
    std::vector<MarketEvent> events;
    
    // Volume Clock State
    double accumulated_volume = 0.0;
    double volume_bucket = 1.0; // Default 1.0 BTC

    struct TradeLog {
        uint64_t timestamp;
        bool is_buy;
        double fill_price;
        double fill_midprice;
        double alpha_at_fill;
        double ofi_at_fill;
        double midprice_after_5;
        double midprice_after_10;
        size_t event_index; // To track when to fill future prices
    };
    std::vector<TradeLog> trade_logs;

    void parseCSV(const std::string& filePath);
    void parseSnapshotCSV(const std::string& filePath);

public:
    ReplayEngine(OrderBook& book, FeatureExtractor& featureExtractor, DecisionEngine& decisionEngine, ExecutionSimulator& executionSimulator, LatencyQueueSimulator& latencySimulator);
    void loadData(const std::string& filePath);
    void loadSnapshots(const std::string& filePath);
    void run();
    void setVolumeBucket(double bucket) { volume_bucket = bucket; }
    void saveTradeLogs(const std::string& filename);
};
