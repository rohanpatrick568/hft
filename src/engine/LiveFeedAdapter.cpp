#include "LiveFeedAdapter.h"
#include <iostream>
#include <sstream>
#include <vector>

LiveFeedAdapter::LiveFeedAdapter(const std::string& symbol, bool use_testnet)
    : symbol(symbol), use_testnet(use_testnet), running(true) {}

LiveFeedAdapter::~LiveFeedAdapter() {
    running = false;
}

void LiveFeedAdapter::loadData(const std::string& source) {
    // In bridge mode, we assume data comes from stdin.
    std::cerr << "[LiveFeed] Listening on stdin for " << symbol << "..." << std::endl;
}

bool LiveFeedAdapter::getNextEvent(MarketEvent& event) {
    if (!std::cin.good()) return false;

    std::string line;
    while (std::getline(std::cin, line)) {
        if (line.empty()) continue;
        
        std::stringstream ss(line);
        std::string segment;
        std::vector<std::string> parts;
        
        while (std::getline(ss, segment, ',')) {
            parts.push_back(segment);
        }
        
        // Schema: timestamp_ns,symbol,event_type,price,size,bid,ask
        if (parts.size() >= 7) {
            try {
                event.timestamp_ns = std::stoull(parts[0]);
                // parts[1] is symbol, ignored for now as we filter by symbol in Python or assume single symbol
                std::string typeStr = parts[2];
                
                if (typeStr == "TRADE") {
                    event.type = EventType::TRADE;
                    event.price = std::stod(parts[3]);
                    event.quantity = std::stod(parts[4]);
                    event.is_buy = true; // Alpaca doesn't specify aggressor side easily in simple stream, assume buy or infer? 
                    // Actually, for simple trade stream, we might not know. 
                    // But for HFT, aggressor side is important. 
                    // If not provided, we can default to true or try to infer from price vs prev quote.
                    // For now, default to true or add logic if bid/ask is available.
                } else if (typeStr == "QUOTE") {
                    event.type = EventType::QUOTE;
                    event.bid_price = std::stod(parts[5]);
                    event.ask_price = std::stod(parts[6]);
                    event.bid_size = 100; // Dummy size if not provided
                    event.ask_size = 100; // Dummy size if not provided
                } else {
                    continue;
                }
                return true;
            } catch (...) {
                std::cerr << "[LiveFeed] Parse error: " << line << std::endl;
                continue;
            }
        }
        // Fallback for old TICK format if needed, or just remove it.
        // Removing old format to enforce new schema.
    }
    return false;
}

void LiveFeedAdapter::websocketLoop() {
    // Deprecated in bridge mode
}

void LiveFeedAdapter::parseMessage(const std::string& msg) {
    // Deprecated in bridge mode
}
