#pragma once
#include "MarketDataFeed.h"
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iostream>

class CSVFeed : public MarketDataFeed {
private:
    std::vector<MarketEvent> events;
    size_t current_index = 0;

public:
    void loadData(const std::string& filePath) override {
        std::cerr << "Loading data from " << filePath << "..." << std::endl;
        std::ifstream file(filePath);
        std::string line;
        
        // Skip header
        if (std::getline(file, line)) {
            // Check if it's actually a header
            if (line.find("timestamp") == std::string::npos) {
                // Not a header, reset
                file.clear();
                file.seekg(0);
            }
        }

        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string segment;
            std::vector<std::string> parts;
            
            while (std::getline(ss, segment, ',')) {
                parts.push_back(segment);
            }
            
            // Expected format: timestamp,symbol,type,price,size,bid,ask
            if (parts.size() < 7) continue;
            
            try {
                MarketEvent event;
                
                // Timestamp (index 0)
                std::string ts_str = parts[0];
                uint64_t raw_ts = std::stoull(ts_str);
                
                // Normalize to nanoseconds
                if (ts_str.length() <= 10) {
                    event.timestamp_ns = raw_ts * 1000000000ULL;
                } else if (ts_str.length() <= 13) {
                    event.timestamp_ns = raw_ts * 1000000ULL;
                } else if (ts_str.length() <= 16) {
                    event.timestamp_ns = raw_ts * 1000ULL;
                } else {
                    event.timestamp_ns = raw_ts;
                }

                std::string typeStr = parts[2];
                if (typeStr == "QUOTE") {
                    event.type = EventType::QUOTE;
                    event.bid_price = std::stod(parts[5]);
                    event.ask_price = std::stod(parts[6]);
                    // Assume size 100 for quotes as it's missing
                    event.bid_size = 100; 
                    event.ask_size = 100;
                    event.quantity = 0;
                } else if (typeStr == "TRADE") {
                    event.type = EventType::TRADE;
                    event.price = std::stod(parts[3]);
                    event.quantity = std::stod(parts[4]);
                    // is_buy will be determined after sorting
                } else {
                    continue; 
                }

                events.push_back(event);
            } catch (...) {
                continue;
            }
        }
        
        std::sort(events.begin(), events.end(), [](const MarketEvent& a, const MarketEvent& b) {
            return a.timestamp_ns < b.timestamp_ns;
        });

        // Infer trade direction
        double current_bid = 0.0;
        double current_ask = 0.0;
        
        for (auto& event : events) {
            if (event.type == EventType::QUOTE) {
                if (event.bid_price > 0) current_bid = event.bid_price;
                if (event.ask_price > 0) current_ask = event.ask_price;
            } else if (event.type == EventType::TRADE) {
                double mid = (current_bid + current_ask) / 2.0;
                if (mid > 0) {
                    if (event.price > mid) event.is_buy = true;
                    else if (event.price < mid) event.is_buy = false;
                    else event.is_buy = true; // Default to buy if equal
                } else {
                    event.is_buy = true; // Default
                }
            }
        }
        
        std::cout << "Loaded " << events.size() << " events." << std::endl;
        current_index = 0;
    }

    bool getNextEvent(MarketEvent& event) override {
        if (current_index < events.size()) {
            event = events[current_index++];
            return true;
        }
        return false;
    }
};
