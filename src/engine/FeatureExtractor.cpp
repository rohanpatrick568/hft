#include "FeatureExtractor.h"
#include <cmath>

void FeatureExtractor::update(const OrderBook& book, const MarketEvent& event) {
    currentFeatures.timestamp = event.timestamp_ns;
    double best_bid = book.getBestBid();
    double best_ask = book.getBestAsk();
    double bid_vol = book.getBidVolume(0);
    double ask_vol = book.getAskVolume(0);

    if (bid_vol + ask_vol > 0) {
        currentFeatures.imbalance = (bid_vol - ask_vol) / (bid_vol + ask_vol);
        currentFeatures.microprice = (best_ask * bid_vol + best_bid * ask_vol) / (bid_vol + ask_vol);
    } else {
        currentFeatures.imbalance = 0;
        currentFeatures.microprice = (best_bid + best_ask) / 2.0;
    }
    
    if (best_bid > 0 && best_ask > 0) {
        currentFeatures.midprice = (best_bid + best_ask) / 2.0;
        currentFeatures.spread = best_ask - best_bid;
    } else {
        currentFeatures.midprice = 0.0;
        currentFeatures.spread = 0.0;
    }
}

Features FeatureExtractor::getFeatures() const {
    return currentFeatures;
}
