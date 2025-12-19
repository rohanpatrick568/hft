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
        
        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string segment;
            std::vector<std::string> parts;
            
            while (std::getline(ss, segment, ',')) {
                parts.push_back(segment);
            }
            
            if (parts.size() < 6) continue;
            
            try {
                MarketEvent event;
                event.type = EventType::TRADE;
                event.price = std::stod(parts[1]);
                event.quantity = std::stod(parts[2]);
                
                std::string ts_str = parts[4];
                uint64_t raw_ts = std::stoull(ts_str);
                
                if (ts_str.length() <= 10) {
                    event.timestamp_ns = raw_ts * 1000000000ULL;
                } else if (ts_str.length() <= 13) {
                    event.timestamp_ns = raw_ts * 1000000ULL;
                } else if (ts_str.length() <= 16) {
                    event.timestamp_ns = raw_ts * 1000ULL;
                } else {
                    event.timestamp_ns = raw_ts;
                }

                bool isBuyerMaker = (parts[5] == "True" || parts[5] == "true" || parts[5] == "1");
                event.is_buy = !isBuyerMaker;

                events.push_back(event);
            } catch (...) {
                continue;
            }
        }
        
        std::sort(events.begin(), events.end(), [](const MarketEvent& a, const MarketEvent& b) {
            return a.timestamp_ns < b.timestamp_ns;
        });
        
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
