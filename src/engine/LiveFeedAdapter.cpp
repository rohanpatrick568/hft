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
        
        if (parts.size() >= 5 && parts[0] == "TICK") {
            try {
                event.timestamp_ns = std::stoull(parts[1]);
                event.price = std::stod(parts[2]);
                event.quantity = std::stod(parts[3]);
                event.is_buy = (std::stoi(parts[4]) == 1);
                event.type = EventType::TRADE;
                // event.symbol = symbol; // MarketEvent doesn't have symbol
                return true;
            } catch (...) {
                std::cerr << "[LiveFeed] Parse error: " << line << std::endl;
                continue;
            }
        }
    }
    return false;
}

void LiveFeedAdapter::websocketLoop() {
    // Deprecated in bridge mode
}

void LiveFeedAdapter::parseMessage(const std::string& msg) {
    // Deprecated in bridge mode
}
