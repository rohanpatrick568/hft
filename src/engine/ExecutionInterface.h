#pragma once
#include <cstdint>
#include <vector>
#include "MarketEvent.h"

struct FillReport {
    uint64_t timestamp;
    uint64_t orderId;
    double price;
    double quantity;
    bool is_buy;
    bool is_maker;
    uint64_t entry_time; // Added for Latency Verification
};

class ExecutionInterface {
public:
    virtual ~ExecutionInterface() = default;
    
    // Core Trading Actions
    virtual void placeOrder(bool is_buy, double price, double quantity, uint64_t timestamp) = 0;
    virtual void cancelOrder(uint64_t orderId) = 0;
    
    // State Updates
    virtual void processMarketEvent(const MarketEvent& event) = 0; // For simulation matching
    virtual std::vector<FillReport> getNewFills() = 0; // Retrieve recent fills
    
    // Account Info
    virtual double getInventory() const = 0;
    virtual double getTotalPnL(double currentMidPrice) const = 0;
};
