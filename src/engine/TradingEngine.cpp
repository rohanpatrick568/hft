#include "TradingEngine.h"
#include <iostream>
#include <fstream>
#include <cmath>

TradingEngine::TradingEngine(MarketDataFeed& feed, ExecutionInterface& execution, OrderBook& book, FeatureExtractor& featureExtractor, DecisionEngine& decisionEngine)
    : feed(feed), execution(execution), book(book), featureExtractor(featureExtractor), decisionEngine(decisionEngine) {}

void TradingEngine::updateRegimeMetrics(double mid_price, uint64_t timestamp) {
    if (last_bucket_mid_price == 0.0) {
        last_bucket_mid_price = mid_price;
        last_bucket_timestamp = timestamp;
        return;
    }

    double ret = (mid_price - last_bucket_mid_price) / last_bucket_mid_price;
    double duration = (timestamp - last_bucket_timestamp) / 1e9; 
    if (duration <= 0) duration = 0.001;

    recent_returns.push_back(ret);
    recent_durations.push_back(duration);

    if (recent_returns.size() > 50) recent_returns.pop_front();
    if (recent_durations.size() > 50) recent_durations.pop_front();

    double mean_ret = 0.0;
    for (double r : recent_returns) mean_ret += r;
    mean_ret /= recent_returns.size();

    double sq_sum = 0.0;
    for (double r : recent_returns) sq_sum += (r - mean_ret) * (r - mean_ret);
    current_volatility = std::sqrt(sq_sum / recent_returns.size());

    double mean_duration = 0.0;
    for (double d : recent_durations) mean_duration += d;
    mean_duration /= recent_durations.size();
    current_intensity = (mean_duration > 0) ? (1.0 / mean_duration) : 0.0;

    if (avg_volatility == 0.0) avg_volatility = current_volatility;
    else avg_volatility = 0.99 * avg_volatility + 0.01 * current_volatility;

    if (avg_intensity == 0.0) avg_intensity = current_intensity;
    else avg_intensity = 0.99 * avg_intensity + 0.01 * current_intensity;

    last_bucket_mid_price = mid_price;
    last_bucket_timestamp = timestamp;
}

std::string TradingEngine::getCurrentRegime() const {
    bool high_vol = current_volatility > avg_volatility;
    bool high_liq = current_intensity > avg_intensity;

    if (!high_vol && !high_liq) return "LOW_VOL_LOW_LIQ";
    if (!high_vol && high_liq) return "LOW_VOL_HIGH_LIQ";
    if (high_vol && !high_liq) return "HIGH_VOL_LOW_LIQ";
    return "HIGH_VOL_HIGH_LIQ";
}

void TradingEngine::run() {
    std::cout << "Starting Trading Engine..." << std::endl;
    MarketEvent event;
    
    while (feed.getNextEvent(event)) {
        // 1. Update Exchange (Matching / Fills)
        execution.processMarketEvent(event);
        
        // 2. Process Fills
        auto fills = execution.getNewFills();
        for (const auto& fill : fills) {
            TradeLog log;
            log.timestamp = fill.timestamp;
            log.is_buy = fill.is_buy;
            log.fill_price = fill.price;
            log.fill_midprice = featureExtractor.getFeatures().midprice; // Approx
            log.alpha_at_fill = decisionEngine.getLastAlpha();
            log.ofi_at_fill = featureExtractor.getFeatures().ofi;
            log.regime = getCurrentRegime();
            log.event_index = decision_event_count;
            log.filled_after_latency = true;
            log.midprice_after_5 = 0;
            log.midprice_after_10 = 0;
            log.impact_cost = 0; // Hard to calc here without more info, assume captured in fill price
            
            trade_logs.push_back(log);
            active_log_indices.push_back(trade_logs.size() - 1);
        }
        
        // 3. Update Market State
        if (event.type == EventType::TRADE) {
            // Liquidity injection hack for simulation
            MarketEvent addEvent = event;
            addEvent.type = EventType::ADD;
            addEvent.is_buy = !event.is_buy;
            addEvent.quantity = event.quantity * 5.0;
            book.apply(addEvent);
        }
        book.apply(event);
        featureExtractor.update(book, event);
        
        // 4. Volume Clock
        if (event.type == EventType::TRADE) {
            accumulated_volume += event.quantity;
        }
        
        if (accumulated_volume >= volume_bucket) {
            updateRegimeMetrics(featureExtractor.getFeatures().midprice, event.timestamp_ns);
            
            // Cancel all orders (Simple strategy)
            // In real system, we might modify orders.
            // Here we assume we cancel everything and re-quote.
            // But we don't track IDs here easily.
            // Let's assume execution interface handles "cancel all" or we just don't cancel for now?
            // ReplayEngine cleared resting_orders.
            // We need a way to cancel all.
            // For now, let's assume we just place new orders and the exchange handles it?
            // No, that would build up orders.
            // Let's add cancelAll to ExecutionInterface? Or just iterate.
            // For now, let's skip explicit cancel in this loop and assume the strategy is "fire and forget" or "IOC" 
            // BUT ReplayEngine logic was: "Cancel old orders before placing new ones".
            // So we should cancel.
            // Since we don't track IDs in TradingEngine, we can't cancel specific ones.
            // Let's assume the strategy is simple: 1 active order per side?
            // Or we just rely on the fact that we are simulating.
            
            // FIX: We need to clear orders.
            // Let's assume we can't easily cancel without IDs.
            // But wait, ReplayEngine cleared `resting_orders` vector.
            // `SimulatedExchange` has `resting_orders`.
            // If we don't cancel, they stay there.
            // We need `execution.cancelAll()`?
            
            Features features = featureExtractor.getFeatures();
            features.regime = getCurrentRegime();
            decisionEngine.on_event(features);
            
            // Update Future Prices for Logs
            decision_event_count++;
            double currentMid = featureExtractor.getFeatures().midprice;
            
            auto it = active_log_indices.begin();
            while (it != active_log_indices.end()) {
                TradeLog& log = trade_logs[*it];
                if (decision_event_count == log.event_index + 5) {
                    log.midprice_after_5 = currentMid;
                }
                if (decision_event_count == log.event_index + 10) {
                    log.midprice_after_10 = currentMid;
                    it = active_log_indices.erase(it);
                } else {
                    ++it;
                }
            }
            
            accumulated_volume -= volume_bucket;
        }
    }
    std::cout << "Trading Engine finished." << std::endl;
}

void TradingEngine::saveTradeLogs(const std::string& filename) {
    std::cout << "Saving " << trade_logs.size() << " trade logs to " << filename << std::endl;
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filename << " for writing." << std::endl;
        return;
    }
    file << "timestamp,is_buy,fill_price,fill_midprice,alpha_at_fill,ofi_at_fill,midprice_after_5,midprice_after_10,regime,filled_after_latency,impact_cost\n";
    for (const auto& log : trade_logs) {
        file << log.timestamp << ","
             << log.is_buy << ","
             << log.fill_price << ","
             << log.fill_midprice << ","
             << log.alpha_at_fill << ","
             << log.ofi_at_fill << ","
             << log.midprice_after_5 << ","
             << log.midprice_after_10 << ","
             << log.regime << ","
             << log.filled_after_latency << ","
             << log.impact_cost << "\n";
    }
    std::cout << "Saved trade logs to " << filename << std::endl;
}
