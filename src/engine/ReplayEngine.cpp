#include "ReplayEngine.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <numeric>
#include <cmath>

ReplayEngine::ReplayEngine(OrderBook& book, FeatureExtractor& featureExtractor, DecisionEngine& decisionEngine, ExecutionSimulator& executionSimulator, LatencyQueueSimulator& latencySimulator)
    : book(book), featureExtractor(featureExtractor), decisionEngine(decisionEngine), executionSimulator(executionSimulator), latencySimulator(latencySimulator) {}

void ReplayEngine::updateRegimeMetrics(double mid_price, uint64_t timestamp) {
    if (last_bucket_mid_price == 0.0) {
        last_bucket_mid_price = mid_price;
        last_bucket_timestamp = timestamp;
        return;
    }

    double ret = (mid_price - last_bucket_mid_price) / last_bucket_mid_price;
    double duration = (timestamp - last_bucket_timestamp) / 1e9; // Seconds
    if (duration <= 0) duration = 0.001; // Avoid division by zero

    recent_returns.push_back(ret);
    recent_durations.push_back(duration);

    if (recent_returns.size() > 50) recent_returns.pop_front();
    if (recent_durations.size() > 50) recent_durations.pop_front();

    // Calculate Volatility (StdDev of returns)
    double mean_ret = 0.0;
    for (double r : recent_returns) mean_ret += r;
    mean_ret /= recent_returns.size();

    double sq_sum = 0.0;
    for (double r : recent_returns) sq_sum += (r - mean_ret) * (r - mean_ret);
    current_volatility = std::sqrt(sq_sum / recent_returns.size());

    // Calculate Intensity (Volume / Time)
    // Since volume is constant (1 bucket), intensity is proportional to 1 / avg_duration
    double mean_duration = 0.0;
    for (double d : recent_durations) mean_duration += d;
    mean_duration /= recent_durations.size();
    current_intensity = (mean_duration > 0) ? (1.0 / mean_duration) : 0.0;

    // Update Long-Term Averages (EMA)
    if (avg_volatility == 0.0) avg_volatility = current_volatility;
    else avg_volatility = 0.99 * avg_volatility + 0.01 * current_volatility;

    if (avg_intensity == 0.0) avg_intensity = current_intensity;
    else avg_intensity = 0.99 * avg_intensity + 0.01 * current_intensity;

    last_bucket_mid_price = mid_price;
    last_bucket_timestamp = timestamp;
}

std::string ReplayEngine::getCurrentRegime() const {
    bool high_vol = current_volatility > avg_volatility;
    bool high_liq = current_intensity > avg_intensity;

    if (!high_vol && !high_liq) return "LOW_VOL_LOW_LIQ";
    if (!high_vol && high_liq) return "LOW_VOL_HIGH_LIQ";
    if (high_vol && !high_liq) return "HIGH_VOL_LOW_LIQ";
    return "HIGH_VOL_HIGH_LIQ";
}

void ReplayEngine::loadData(const std::string& filePath) {
    parseCSV(filePath);
}

void ReplayEngine::parseCSV(const std::string& filePath) {
    std::cerr << "Loading data from " << filePath << "..." << std::endl;
    std::ifstream file(filePath);
    std::string line;
    
    // Skip header if exists (Binance public data usually has no header or we check)
    // Assuming no header for raw dumps, or we skip first line.
    // Binance monthly trades zip -> csv usually has no header.
    
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string segment;
        std::vector<std::string> parts;
        
        while (std::getline(ss, segment, ',')) {
            parts.push_back(segment);
        }
        
        if (parts.size() < 6) continue;
        
        // Binance Trade Format: id, price, qty, quoteQty, time, isBuyerMaker, isBestMatch
        try {
            MarketEvent event;
            event.type = EventType::TRADE;
            event.price = std::stod(parts[1]);
            event.quantity = std::stod(parts[2]);
            
            // Handle different timestamp precisions
            // Binance standard is ms (13 digits), but some datasets are us (16 digits)
            std::string ts_str = parts[4];
            uint64_t raw_ts = std::stoull(ts_str);
            
            if (ts_str.length() <= 10) { // Seconds
                event.timestamp_ns = raw_ts * 1000000000ULL;
            } else if (ts_str.length() <= 13) { // Milliseconds
                event.timestamp_ns = raw_ts * 1000000ULL;
            } else if (ts_str.length() <= 16) { // Microseconds
                event.timestamp_ns = raw_ts * 1000ULL;
            } else { // Nanoseconds
                event.timestamp_ns = raw_ts;
            }

            event.is_buy = (parts[5] == "False" || parts[5] == "false" || parts[5] == "0"); // isBuyerMaker=True means seller is maker -> buyer is taker -> Buy Trade
            // Wait: isBuyerMaker = True means the BUYER was the MAKER. So the SELLER was the TAKER.
            // So it is a SELL trade (aggressor is seller).
            // isBuyerMaker = False means the BUYER was the TAKER. So it is a BUY trade.
            // So is_buy = !isBuyerMaker.
            
            bool isBuyerMaker = (parts[5] == "True" || parts[5] == "true" || parts[5] == "1");
            event.is_buy = !isBuyerMaker;

            events.push_back(event);
        } catch (...) {
            continue;
        }
    }
    
    // Sort by timestamp just in case
    std::sort(events.begin(), events.end(), [](const MarketEvent& a, const MarketEvent& b) {
        return a.timestamp_ns < b.timestamp_ns;
    });
    
    std::cout << "Loaded " << events.size() << " events." << std::endl;
}

void ReplayEngine::run() {
    std::cout << "Starting replay..." << std::endl;
    
    size_t decision_event_count = 0;
    std::vector<size_t> active_log_indices;

    for (const auto& event : events) {
        // 1. Process Pending Orders -> Resting Orders
        auto readyOrders = latencySimulator.getReadyOrders(event.timestamp_ns);
        for (const auto& order : readyOrders) {
            RestingOrder ro;
            ro.is_buy = order.is_buy;
            ro.price = order.price;
            ro.quantity = order.quantity;
            ro.entry_time = event.timestamp_ns;
            
            // Phase 7.2: Queue Position
            // If we join the book, we are behind existing volume.
            ro.queue_position = book.getVolumeAt(ro.price);
            if (queue_decay > 0) ro.queue_position *= (1.0 - queue_decay);
            
            resting_orders.push_back(ro);
        }

        // 2. Process Resting Orders against Market Event (Trade)
        if (event.type == EventType::TRADE) {
            auto it = resting_orders.begin();
            while (it != resting_orders.end()) {
                bool filled = false;
                
                // Check if trade consumes our order
                if (it->is_buy) {
                    // We are Bid. Aggressor is Sell (`!event.is_buy`).
                    if (!event.is_buy) {
                        if (event.price <= it->price) {
                            if (event.price < it->price) {
                                filled = true; // Crossed
                            } else {
                                it->queue_position -= event.quantity;
                                if (it->queue_position <= 0) filled = true;
                            }
                        }
                    }
                } else {
                    // We are Ask. Aggressor is Buy (`event.is_buy`).
                    if (event.is_buy) {
                        if (event.price >= it->price) {
                            if (event.price > it->price) {
                                filled = true; // Crossed
                            } else {
                                it->queue_position -= event.quantity;
                                if (it->queue_position <= 0) filled = true;
                            }
                        }
                    }
                }
                
                if (filled) {
                    double currentMid = featureExtractor.getFeatures().midprice;
                    
                    // Phase 7.3: Market Impact
                    double impact = impact_coeff * it->quantity;
                    double effective_price = it->price;
                    if (it->is_buy) effective_price += impact; // Buy higher (worse)
                    else effective_price -= impact; // Sell lower (worse)

                    executionSimulator.executeOrder(it->is_buy, effective_price, it->quantity, currentMid);

                    // Phase 6.2 & 7.2: Logging
                    TradeLog log;
                    log.timestamp = event.timestamp_ns;
                    log.is_buy = it->is_buy;
                    log.fill_price = effective_price;
                    log.fill_midprice = currentMid;
                    log.alpha_at_fill = decisionEngine.getLastAlpha();
                    log.ofi_at_fill = featureExtractor.getFeatures().ofi;
                    log.regime = getCurrentRegime();
                    log.event_index = decision_event_count;
                    log.filled_after_latency = true;
                    log.midprice_after_5 = 0; 
                    log.midprice_after_10 = 0;
                    log.impact_cost = impact;
                    
                    trade_logs.push_back(log);
                    active_log_indices.push_back(trade_logs.size() - 1);
                    
                    it = resting_orders.erase(it);
                } else {
                    ++it;
                }
            }
        }

        // 3. Process the Market Event (Update Book)
        // For simulation of LOB from trades only, we might need to inject liquidity
        // to avoid empty book.
        // Hack: Add liquidity at trade price before processing trade
        if (event.type == EventType::TRADE) {
            MarketEvent addEvent = event;
            addEvent.type = EventType::ADD;
            // Add to the opposite side to be matched?
            // Or just add to the book to represent the resting order that was hit.
            // If it's a BUY trade, it hit an ASK. So we add an ASK.
            addEvent.is_buy = !event.is_buy; 
            
            // FIX: Inject surplus liquidity so the book isn't empty after the trade
            // This simulates "Market Depth" beyond just the matched quantity
            addEvent.quantity = event.quantity * 5.0; 
            
            book.apply(addEvent);
        }
        
        book.apply(event);
        featureExtractor.update(book, event);

        // Volume Clock Logic
        if (event.type == EventType::TRADE) {
            accumulated_volume += event.quantity;
        }

        if (accumulated_volume >= volume_bucket) {
            // Phase 7.1: Update Regime Metrics
            updateRegimeMetrics(featureExtractor.getFeatures().midprice, event.timestamp_ns);

            // Phase 7.2: Cancel old orders before placing new ones
            resting_orders.clear();

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
                    it = active_log_indices.erase(it); // Done tracking this log
                } else {
                    ++it;
                }
            }

            accumulated_volume -= volume_bucket; 
            // accumulated_volume = 0.0; // Reset for simplicity and to avoid burst of decisions
            // Keeping the subtraction logic to be more accurate with volume buckets
        }
        
        // Update PnL Tracking
        // For this MVP, we assume we are just tracking the market state.
        // If DecisionEngine made a trade, it would call ExecutionSimulator.
        // But we need to update the simulator with the current price for Unrealized PnL calculation.
        // And if we had active orders, we would check for fills here.
        
        // Log PnL
        // std::cout << "PnL: " << executionSimulator.getTotalPnL(featureExtractor.getFeatures().midprice) << std::endl;
    }
    
    std::cerr << "Replay finished." << std::endl;
}

void ReplayEngine::loadSnapshots(const std::string& filePath) {
    parseSnapshotCSV(filePath);
}

void ReplayEngine::parseSnapshotCSV(const std::string& filePath) {
    std::cout << "Loading snapshots from " << filePath << "..." << std::endl;
    std::ifstream file(filePath);
    std::string line;
    
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string segment;
        std::vector<std::string> parts;
        
        while (std::getline(ss, segment, ',')) {
            parts.push_back(segment);
        }
        
        if (parts.size() < 5) continue;
        
        try {
            // Format: timestamp, bid_p, bid_q, ask_p, ask_q
            uint64_t ts = std::stoull(parts[0]);
            double bid_p = std::stod(parts[1]);
            double bid_q = std::stod(parts[2]);
            double ask_p = std::stod(parts[3]);
            double ask_q = std::stod(parts[4]);
            
            // Create ADD events for Bid and Ask
            MarketEvent bidEvent;
            bidEvent.type = EventType::ADD;
            bidEvent.timestamp_ns = ts;
            bidEvent.price = bid_p;
            bidEvent.quantity = bid_q;
            bidEvent.is_buy = true;
            
            MarketEvent askEvent;
            askEvent.type = EventType::ADD;
            askEvent.timestamp_ns = ts;
            askEvent.price = ask_p;
            askEvent.quantity = ask_q;
            askEvent.is_buy = false;
            
            events.push_back(bidEvent);
            events.push_back(askEvent);
            
        } catch (...) {
            continue;
        }
    }
    
    std::sort(events.begin(), events.end(), [](const MarketEvent& a, const MarketEvent& b) {
        return a.timestamp_ns < b.timestamp_ns;
    });
    
    std::cout << "Loaded " << events.size() << " events (including snapshots)." << std::endl;
}

void ReplayEngine::saveTradeLogs(const std::string& filename) {
    std::ofstream file(filename);
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
