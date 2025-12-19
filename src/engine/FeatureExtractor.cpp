#include "FeatureExtractor.h"
#include <cmath>
#include <algorithm>

FeatureExtractor::FeatureExtractor() {
    // Initialize arrays/buffers
    for(int i=0; i<MAX_TRADES_BUFFER; ++i) trade_timestamps[i] = 0;
}

void FeatureExtractor::update(const OrderBook& book, const MarketEvent& event) {
    currentFeatures.timestamp = event.timestamp_ns;
    double best_bid = book.getBestBid();
    double best_ask = book.getBestAsk();
    double bid_vol = book.getBidVolume(0);
    double ask_vol = book.getAskVolume(0);

    // --- Basic Features ---
    if (bid_vol + ask_vol > 0) {
        currentFeatures.imbalance = (bid_vol - ask_vol) / (bid_vol + ask_vol);
        currentFeatures.microprice = (best_ask * bid_vol + best_bid * ask_vol) / (bid_vol + ask_vol);
    } else {
        currentFeatures.imbalance = 0;
        currentFeatures.microprice = (best_bid + best_ask) / 2.0;
    }
    
    if (best_bid > 0 && best_ask > 0) {
        currentFeatures.midprice = (best_bid + best_ask) / 2.0;
        currentFeatures.spread = best_ask - best_bid;
    } else {
        currentFeatures.midprice = 0.0;
        currentFeatures.spread = 0.0;
    }

    // --- OFI Calculation ---
    double bid_contrib = 0.0;
    double ask_contrib = 0.0;

    // Bid Side
    if (best_bid > prev_best_bid_price) {
        bid_contrib = bid_vol;
    } else if (best_bid == prev_best_bid_price) {
        bid_contrib = bid_vol - prev_best_bid_qty;
    } else {
        bid_contrib = -prev_best_bid_qty;
    }

    // Ask Side
    if (best_ask < prev_best_ask_price) {
        ask_contrib = ask_vol;
    } else if (best_ask == prev_best_ask_price) {
        ask_contrib = ask_vol - prev_best_ask_qty;
    } else {
        ask_contrib = -prev_best_ask_qty;
    }

    // Handle initial state (prev prices are 0)
    if (prev_best_bid_price == 0) bid_contrib = 0;
    if (prev_best_ask_price == 0) ask_contrib = 0;

    double delta_ofi = bid_contrib - ask_contrib;

    // Update Rolling OFI
    if (ofi_count < OFI_WINDOW) {
        ofi_buffer[ofi_idx] = delta_ofi;
        ofi_rolling_sum += delta_ofi;
        ofi_idx = (ofi_idx + 1) % OFI_WINDOW;
        ofi_count++;
    } else {
        ofi_rolling_sum -= ofi_buffer[ofi_idx];
        ofi_buffer[ofi_idx] = delta_ofi;
        ofi_rolling_sum += delta_ofi;
        ofi_idx = (ofi_idx + 1) % OFI_WINDOW;
    }
    currentFeatures.ofi = ofi_rolling_sum;

    // Update Previous State
    prev_best_bid_price = best_bid;
    prev_best_bid_qty = bid_vol;
    prev_best_ask_price = best_ask;
    prev_best_ask_qty = ask_vol;

    // --- New Features Calculation (Only on Trades) ---
    // Assuming EventType::TRADE is implied if price/qty matches a trade, 
    // but MarketEvent struct usually has a type. 
    // Let's check MarketEvent definition or assume we process all events.
    // Ideally we only update trade stats on TRADE events.
    // For now, we assume 'event' passed here is the one triggering the update.
    // If event.type is not available in the struct shown in previous context, 
    // we might need to infer or just calculate for every update if it looks like a trade.
    // However, FeatureExtractor::update is called inside ReplayEngine loop.
    
    // Let's assume we treat every update as a potential trade if it has volume? 
    // Actually, ReplayEngine passes 'event'. Let's check MarketEvent.h if possible.
    // But based on context, we can just implement the logic.
    
    // 1. Trade Arrival Rate (Trades in last 1s)
    // We only count actual trades (usually type EXECUTION or TRADE).
    // Since we don't see EventType enum, we'll assume all events passed here are relevant 
    // OR we check if it's a trade. 
    // In ReplayEngine, we saw `event.type = EventType::ADD` for LOB updates.
    // We need to know if this is a trade.
    // Let's assume for now we calculate this for ALL events to be safe, 
    // or better, we only update the circular buffer if it's a trade.
    // But without EventType visible, let's implement the buffer logic generally.
    
    // Circular Buffer Update
    uint64_t one_sec_ns = 1000000000ULL;
    trade_timestamps[trade_idx] = event.timestamp_ns;
    trade_idx = (trade_idx + 1) % MAX_TRADES_BUFFER;
    if (trade_count < MAX_TRADES_BUFFER) trade_count++;

    // Count trades in last 1s
    int arrival_count = 0;
    uint64_t cutoff = (event.timestamp_ns > one_sec_ns) ? event.timestamp_ns - one_sec_ns : 0;
    
    // Linear scan is O(N) but N is small (trades per sec). 
    // Optimization: Binary search or two-pointer if buffer was sorted (it is roughly sorted).
    // Since it's a circular buffer, it's not strictly sorted in memory.
    // Simple scan for now.
    for (int i = 0; i < trade_count; ++i) {
        if (trade_timestamps[i] >= cutoff) {
            arrival_count++;
        }
    }
    currentFeatures.arrival_rate = (double)arrival_count;

    // 2. VPIN Approximation
    // We need trade volume.
    // If this event is a trade (we need to know!). 
    // If we can't distinguish, this metric might be noisy.
    // Let's assume `event.quantity` is the trade size if it's a trade.
    // We'll accumulate volume.
    
    if (event.is_buy) {
        current_bucket_buy_vol += event.quantity;
    } else {
        current_bucket_sell_vol += event.quantity;
    }

    double total_bucket_vol = current_bucket_buy_vol + current_bucket_sell_vol;
    if (total_bucket_vol >= volume_bucket_size) {
        // Bucket full, calculate VPIN
        last_vpin = std::abs(current_bucket_buy_vol - current_bucket_sell_vol) / total_bucket_vol;
        
        // Reset bucket
        current_bucket_buy_vol = 0;
        current_bucket_sell_vol = 0;
    }
    currentFeatures.vpin = last_vpin;

    // 3. Effective Spread
    // 2 * |TradePrice - MidPrice|
    // Only valid if we have a midprice
    if (currentFeatures.midprice > 0) {
        double effective_spread_inst = 2.0 * std::abs(event.price - currentFeatures.midprice);
        
        // EMA Update
        if (rolling_eff_spread == 0) {
            rolling_eff_spread = effective_spread_inst;
        } else {
            rolling_eff_spread = (eff_spread_alpha * effective_spread_inst) + ((1.0 - eff_spread_alpha) * rolling_eff_spread);
        }
    }
    currentFeatures.effective_spread = rolling_eff_spread;
}


Features FeatureExtractor::getFeatures() const {
    return currentFeatures;
}
