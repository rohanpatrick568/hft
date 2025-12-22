#pragma once
#include "MarketDataFeed.h"
#include "ExecutionInterface.h"
#include "../orderbook/OrderBook.h"
#include "FeatureExtractor.h"
#include "DecisionEngine.h"
#include <vector>
#include <deque>
#include <string>

class TradingEngine {
private:
    MarketDataFeed& feed;
    ExecutionInterface& execution;
    OrderBook& book;
    FeatureExtractor& featureExtractor;
    DecisionEngine& decisionEngine;
    
    // Volume Clock
    double accumulated_volume = 0.0;
    double volume_bucket = 1.0;
    double last_bucket_mid_price = 0.0;
    uint64_t last_bucket_timestamp = 0;
    
    // Regime
    std::deque<double> recent_returns;
    std::deque<double> recent_durations;
    double current_volatility = 0.0;
    double current_intensity = 0.0;
    double avg_volatility = 0.0;
    double avg_intensity = 0.0;
    
    void updateRegimeMetrics(double mid_price, uint64_t timestamp);
    std::string getCurrentRegime() const;
    
    // Logging
    struct TradeLog {
        uint64_t timestamp;
        bool is_buy;
        double fill_price;
        double fill_midprice;
        double alpha_at_fill;
        double ofi_at_fill;
        double midprice_after_5;
        double midprice_after_10;
        std::string regime;
        size_t event_index;
        bool filled_after_latency;
        double impact_cost;
        uint64_t order_entry_time; // Added
    };
    std::vector<TradeLog> trade_logs;
    std::vector<size_t> active_log_indices;
    size_t decision_event_count = 0;

public:
    TradingEngine(MarketDataFeed& feed, ExecutionInterface& execution, OrderBook& book, FeatureExtractor& featureExtractor, DecisionEngine& decisionEngine);
    
    void run();
    void setVolumeBucket(double bucket) { volume_bucket = bucket; }
    void saveTradeLogs(const std::string& filename);
};
