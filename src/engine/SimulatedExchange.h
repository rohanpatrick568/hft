#pragma once
#include "ExecutionInterface.h"
#include "LatencyQueueSimulator.h"
#include "ExecutionSimulator.h"
#include "../orderbook/OrderBook.h"
#include <vector>
#include <list>

class SimulatedExchange : public ExecutionInterface {
private:
    LatencyQueueSimulator latencySimulator;
    ExecutionSimulator executionSimulator;
    OrderBook& book;
    
    struct RestingOrder {
        uint64_t orderId; // Added ID
        bool is_buy;
        double price;
        double quantity;
        double queue_position;
        uint64_t entry_time;
    };
    std::list<RestingOrder> resting_orders;
    std::vector<FillReport> new_fills;
    
    double queue_decay = 0.0;
    double impact_coeff = 0.0;
    uint64_t next_order_id = 1;

public:
    SimulatedExchange(OrderBook& book, uint64_t latency_us = 100000);
    
    void setQueueDecay(double decay) { queue_decay = decay; }
    void setImpactCoeff(double coeff) { impact_coeff = coeff; }

    void placeOrder(bool is_buy, double price, double quantity, uint64_t timestamp) override;
    void cancelOrder(uint64_t orderId) override;
    void processMarketEvent(const MarketEvent& event) override;
    std::vector<FillReport> getNewFills() override;
    double getInventory() const override;
    double getTotalPnL(double currentMidPrice) const override;
};
