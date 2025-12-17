#pragma once
#include <cstdint>
#include <string>
#include <iostream>
#include <vector>

enum class OrderAction { BUY, SELL };

struct ExecutionReport {
    uint64_t timestamp;
    uint64_t orderId;
    double price;
    double quantity;
    double fee;
    double pnl;
};

class ExecutionSimulator {
public:
    ExecutionSimulator(double makerFee = 0.0002, double takerFee = 0.0004);

    // Called when the strategy wants to place an order
    void placeOrder(uint64_t timestamp, uint64_t orderId, OrderAction action, double price, double quantity);
    
    // Called when the strategy wants to cancel
    void cancelOrder(uint64_t orderId);

    // Called by ReplayEngine when a fill occurs for one of OUR orders
    void onFill(uint64_t timestamp, uint64_t orderId, double price, double quantity, bool isMaker);

    // Helper for immediate execution simulation
    void executeOrder(bool isBuy, double price, double quantity, double currentMid);

    double getInventory() const;
    double getRealizedPnL() const;
    double getUnrealizedPnL(double currentMidPrice) const;
    double getTotalPnL(double currentMidPrice) const;
    double getTotalEquity(double currentMidPrice) const;

private:
    double makerFeeRate;
    double takerFeeRate;
    
    double inventory = 0.0;
    double cash = 0.0; // Tracks cash balance
    double realizedPnL = 0.0;
    
    // Average Entry Price for Unrealized PnL calculation
    double avgEntryPrice = 0.0;
};
