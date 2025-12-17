#pragma once
#include "../orderbook/OrderBook.h"
#include "MarketEvent.h"

struct Features {
    uint64_t timestamp;
    double imbalance;
    double microprice;
    double spread;
    double midprice;
};

class FeatureExtractor {
public:
    void update(const OrderBook& book, const MarketEvent& event);
    Features getFeatures() const;

private:
    Features currentFeatures;
};
