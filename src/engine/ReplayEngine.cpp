#include "ReplayEngine.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

ReplayEngine::ReplayEngine(OrderBook& book, FeatureExtractor& featureExtractor, DecisionEngine& decisionEngine, ExecutionSimulator& executionSimulator, LatencyQueueSimulator& latencySimulator)
    : book(book), featureExtractor(featureExtractor), decisionEngine(decisionEngine), executionSimulator(executionSimulator), latencySimulator(latencySimulator) {}

void ReplayEngine::loadData(const std::string& filePath) {
    parseCSV(filePath);
}

void ReplayEngine::parseCSV(const std::string& filePath) {
    std::cout << "Loading data from " << filePath << "..." << std::endl;
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
    
    for (const auto& event : events) {
        // 1. Process Pending Orders that have "arrived" at the exchange
        // We check if any orders in the latency queue have an arrival time <= current event time.
        // These orders are executed against the CURRENT book state (before this new event is applied).
        
        auto readyOrders = latencySimulator.getReadyOrders(event.timestamp_ns);
        for (const auto& order : readyOrders) {
            // Execute against current midprice (from previous state)
            // Note: In a real matching engine, we would match against the book.
            // Here we simulate execution.
            double currentMid = featureExtractor.getFeatures().midprice;
            if (currentMid > 0) { // Ensure we have a valid price
                // FIX: Only execute if the market price crossed our limit price
                bool executable = false;
                if (order.is_buy) {
                    // Buy order executes if market price drops to or below limit price
                    if (currentMid <= order.price) {
                        executable = true;
                    }
                } else {
                    // Sell order executes if market price rises to or above limit price
                    if (currentMid >= order.price) {
                        executable = true;
                    }
                }

                if (executable) {
                    executionSimulator.executeOrder(order.is_buy, order.price, order.quantity, currentMid);
                }
            }
        }

        // 2. Process the Market Event
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
        decisionEngine.on_event(featureExtractor.getFeatures());
        
        // Update PnL Tracking
        // For this MVP, we assume we are just tracking the market state.
        // If DecisionEngine made a trade, it would call ExecutionSimulator.
        // But we need to update the simulator with the current price for Unrealized PnL calculation.
        // And if we had active orders, we would check for fills here.
        
        // Log PnL
        // std::cout << "PnL: " << executionSimulator.getTotalPnL(featureExtractor.getFeatures().midprice) << std::endl;
    }
    
    std::cout << "Replay finished." << std::endl;
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
