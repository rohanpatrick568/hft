#include "OrderBook.h"

void OrderBook::apply(const MarketEvent& event) {
    switch (event.type) {
        case EventType::TRADE:
            handleTrade(event);
            break;
        case EventType::ADD:
            handleAdd(event);
            break;
        case EventType::CANCEL:
            handleCancel(event);
            break;
    }
}

void OrderBook::handleTrade(const MarketEvent& event) {
    // Fix: Trade consumes liquidity from the book
    if (event.is_buy) {
        // Buy trade consumes Ask liquidity
        auto it = asks.find(event.price);
        if (it != asks.end()) {
            it->second -= event.quantity;
            if (it->second <= 1e-9) asks.erase(it);
        }
    } else {
        // Sell trade consumes Bid liquidity
        auto it = bids.find(event.price);
        if (it != bids.end()) {
            it->second -= event.quantity;
            if (it->second <= 1e-9) bids.erase(it);
        }
    }
}

void OrderBook::handleAdd(const MarketEvent& event) {
    if (event.is_buy) {
        // Adding a Bid: Cancel any Asks that are <= this new Bid (Crossed Market Protection)
        auto it = asks.begin();
        while (it != asks.end() && it->first <= event.price) {
            it = asks.erase(it);
        }
        bids[event.price] += event.quantity;
    } else {
        // Adding an Ask: Cancel any Bids that are >= this new Ask (Crossed Market Protection)
        auto it = bids.begin();
        while (it != bids.end() && it->first >= event.price) {
            it = bids.erase(it);
        }
        asks[event.price] += event.quantity;
    }
}

void OrderBook::handleCancel(const MarketEvent& event) {
    if (event.is_buy) {
        auto it = bids.find(event.price);
        if (it != bids.end()) {
            it->second -= event.quantity;
            if (it->second <= 1e-9) bids.erase(it);
        }
    } else {
        auto it = asks.find(event.price);
        if (it != asks.end()) {
            it->second -= event.quantity;
            if (it->second <= 1e-9) asks.erase(it);
        }
    }
}

double OrderBook::getBestBid() const {
    if (bids.empty()) return 0.0;
    return bids.begin()->first;
}

double OrderBook::getBestAsk() const {
    if (asks.empty()) return 0.0;
    return asks.begin()->first;
}

double OrderBook::getSpread() const {
    double bb = getBestBid();
    double ba = getBestAsk();
    if (bb == 0.0 || ba == 0.0) return 0.0;
    return ba - bb;
}

double OrderBook::getBidVolume(int level) const {
    if (level < 0 || level >= bids.size()) return 0.0;
    auto it = bids.begin();
    std::advance(it, level);
    return it->second;
}

double OrderBook::getAskVolume(int level) const {
    if (level < 0 || level >= asks.size()) return 0.0;
    auto it = asks.begin();
    std::advance(it, level);
    return it->second;
}

double OrderBook::getVolumeAt(double price) const {
    if (bids.count(price)) return bids.at(price);
    if (asks.count(price)) return asks.at(price);
    return 0.0;
}

void OrderBook::printBook() const {
    std::cout << "--- Order Book ---" << std::endl;
    std::cout << "Spread: " << getSpread() << std::endl;
    // Print top 5
    int count = 0;
    for (auto const& entry : asks) {
        std::cout << "ASK " << std::fixed << std::setprecision(2) << entry.first << " : " << entry.second << std::endl;
        if (++count >= 5) break;
    }
    count = 0;
    for (auto const& entry : bids) {
        std::cout << "BID " << std::fixed << std::setprecision(2) << entry.first << " : " << entry.second << std::endl;
        if (++count >= 5) break;
    }
}
