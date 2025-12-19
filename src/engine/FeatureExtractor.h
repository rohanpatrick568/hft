#pragma once
#include "../orderbook/OrderBook.h"
#include "MarketEvent.h"

struct Features {
    uint64_t timestamp;
    double imbalance;
    double microprice;
    double spread;
    double midprice;
    // New Features
    double arrival_rate;      // Trades per second
    double vpin;              // Volume-Synchronized Probability of Informed Trading
    double effective_spread;  // Rolling average effective spread
    double ofi;               // Order Flow Imbalance
};

class FeatureExtractor {
public:
    FeatureExtractor(); // Constructor for pre-allocation
    void update(const OrderBook& book, const MarketEvent& event);
    Features getFeatures() const;

private:
    Features currentFeatures;

    // OFI State
    double prev_best_bid_price = 0.0;
    double prev_best_bid_qty = 0.0;
    double prev_best_ask_price = 0.0;
    double prev_best_ask_qty = 0.0;
    
    static constexpr int OFI_WINDOW = 50;
    double ofi_buffer[OFI_WINDOW] = {0};
    int ofi_idx = 0;
    int ofi_count = 0;
    double ofi_rolling_sum = 0.0;

    // Trade Arrival Rate
    static const int MAX_TRADES_BUFFER = 10000; // Pre-allocate for high throughput
    uint64_t trade_timestamps[MAX_TRADES_BUFFER];
    int trade_idx = 0;
    int trade_count = 0;

    // VPIN
    double volume_bucket_size = 10.0; // 10 BTC
    double current_bucket_buy_vol = 0.0;
    double current_bucket_sell_vol = 0.0;
    double last_vpin = 0.0;

    // Effective Spread
    double rolling_eff_spread = 0.0;
    double eff_spread_alpha = 0.05; // Decay factor for EMA
};
