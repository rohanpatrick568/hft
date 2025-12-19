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
    double last_bucket_mid_price = 0.0;
    uint64_t last_bucket_timestamp = 0;

    // Regime Tracking
    std::deque<double> recent_returns;
    std::deque<double> recent_durations; // Time to fill bucket
    double current_volatility = 0.0;
    double current_intensity = 0.0;
    double avg_volatility = 0.0;
    double avg_intensity = 0.0;
    
    void updateRegimeMetrics(double mid_price, uint64_t timestamp);
    std::string getCurrentRegime() const;

    // Phase 7.2: Queue Position & Latency
    struct RestingOrder {
        bool is_buy;
        double price;
        double quantity;
        double queue_position; // Volume ahead of us
        uint64_t entry_time;
        size_t log_index; // To update the log when filled
    };
    std::vector<RestingOrder> resting_orders;
    double queue_decay = 0.0; // Probability of losing priority (0.0 - 1.0)
    double impact_coeff = 0.0; // Phase 7.3: Market Impact

    struct TradeLog {
        uint64_t timestamp;
        bool is_buy;
        double fill_price;
        double fill_midprice;
        double alpha_at_fill;
        double ofi_at_fill;
        double midprice_after_5;
        double midprice_after_10;
        std::string regime; // New field
        size_t event_index; 
        bool filled_after_latency; // Phase 7.2
        std::string missed_fill_reason; // Phase 7.2
        double impact_cost; // Phase 7.3
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
    void setQueueDecay(double decay) { queue_decay = decay; }
    void setImpactCoeff(double coeff) { impact_coeff = coeff; }
    void saveTradeLogs(const std::string& filename);
};
