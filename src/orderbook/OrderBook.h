#pragma once
#include <map>
#include <iostream>
#include <iomanip>
#include "../engine/MarketEvent.h"

class OrderBook {
public:
    void apply(const MarketEvent& event);

    double getBestBid() const;
    double getBestAsk() const;
    double getSpread() const;
    double getBidVolume(int level) const;
    double getAskVolume(int level) const;
    
    void printBook() const;

private:
    // Price -> Quantity
    std::map<double, double, std::greater<double>> bids;
    std::map<double, double, std::less<double>> asks;

    void handleTrade(const MarketEvent& event);
    void handleAdd(const MarketEvent& event);
    void handleCancel(const MarketEvent& event);
};
