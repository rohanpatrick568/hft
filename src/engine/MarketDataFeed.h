#pragma once
#include "MarketEvent.h"
#include <string>

class MarketDataFeed {
public:
    virtual ~MarketDataFeed() = default;
    virtual bool getNextEvent(MarketEvent& event) = 0;
    virtual void loadData(const std::string& source) = 0;
};
