#include "ExecutionSimulator.h"
#include <cmath>
#include <iostream>

ExecutionSimulator::ExecutionSimulator(double makerFee, double takerFee)
    : makerFeeRate(makerFee), takerFeeRate(takerFee) {}

void ExecutionSimulator::placeOrder(uint64_t timestamp, uint64_t orderId, OrderAction action, double price, double quantity) {
    // Log placement
    // std::cout << "Order Placed: " << orderId << std::endl;
}

void ExecutionSimulator::cancelOrder(uint64_t orderId) {
    // Log cancellation
}

void ExecutionSimulator::onFill(uint64_t timestamp, uint64_t orderId, double price, double quantity, bool isMaker) {
    double value = price * quantity;
    double fee = value * (isMaker ? makerFeeRate : takerFeeRate);
    
    // Update Cash and Inventory
    // We don't track "direction" in onFill arguments here, assuming we know it from orderId
    // But for simplicity, let's assume positive quantity = BUY, negative = SELL in this call?
    // Or we need to track order state. 
    // Let's assume the caller handles the sign of quantity for now: + for Buy, - for Sell.
    
    if (quantity > 0) { // BUY
        inventory += quantity;
        cash -= (value + fee);
        
        // Update Avg Entry Price
        if (inventory > 0) {
            // Weighted average
            // New Avg = (OldQty * OldAvg + NewQty * NewPrice) / TotalQty
            // Simplified: We just track cash flow for PnL
        }
    } else { // SELL
        inventory += quantity; // quantity is negative
        cash += (std::abs(value) - fee);
    }
    
    // Realized PnL is implicitly tracked in Cash + Inventory Value
    // But typically Realized PnL is updated only on closing trades.
    // For HFT, Total PnL = Cash + Inventory * MidPrice is the standard metric.
}

double ExecutionSimulator::getInventory() const {
    return inventory;
}

double ExecutionSimulator::getRealizedPnL() const {
    // In this simplified cash-based model, realized PnL isn't tracked separately 
    // without FIFO/LIFO logic. We rely on Total PnL.
    return 0.0; 
}

double ExecutionSimulator::getUnrealizedPnL(double currentMidPrice) const {
    return inventory * currentMidPrice;
}

double ExecutionSimulator::getTotalPnL(double currentMidPrice) const {
    return cash + (inventory * currentMidPrice);
}

double ExecutionSimulator::getTotalEquity(double currentMidPrice) const {
    return getTotalPnL(currentMidPrice);
}

void ExecutionSimulator::executeOrder(bool isBuy, double price, double quantity, double currentMid) {
    // Simulate immediate execution (Taker)
    // Quantity sign: + for Buy, - for Sell
    double signedQty = isBuy ? quantity : -quantity;
    
    // We use 0 as dummy timestamp/orderId for now
    onFill(0, 0, price, signedQty, false); 
}
