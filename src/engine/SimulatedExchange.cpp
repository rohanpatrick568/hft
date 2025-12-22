#include "SimulatedExchange.h"
#include <iostream>

SimulatedExchange::SimulatedExchange(OrderBook& book, uint64_t latency_us)
    : book(book), latencySimulator(latency_us, latency_us) {}

void SimulatedExchange::placeOrder(bool is_buy, double price, double quantity, uint64_t timestamp) {
    // In simulation, we just add to latency queue. 
    // We don't have a real order ID yet, but we can assign one. 
    // We don't have a real order ID yet, but we can assign one.
    // LatencyQueueSimulator stores PendingOrder which doesn't have ID.
    // We might need to modify LatencyQueueSimulator or just assume FIFO for now.
    // For simplicity, let's modify LatencyQueueSimulator to carry an ID or just ignore ID for now in PendingOrder
    // and assign it when it becomes "Resting".
    // Actually, ExecutionInterface requires ID for cancel.
    // Let's assume LatencyQueueSimulator handles the delay, and we track the ID.
    
    latencySimulator.addOrder(is_buy, price, quantity, timestamp);
}

void SimulatedExchange::cancelOrder(uint64_t orderId) {
    // In this simple simulation, we clear all resting orders often.
    // Implementing specific cancel requires tracking IDs in resting_orders.
    auto it = resting_orders.begin();
    while (it != resting_orders.end()) {
        if (it->orderId == orderId) {
            resting_orders.erase(it);
            return;
        }
        ++it;
    }
}

void SimulatedExchange::processMarketEvent(const MarketEvent& event) {
    // 1. Process Pending Orders -> Resting Orders
    auto readyOrders = latencySimulator.getReadyOrders(event.timestamp_ns);
    for (const auto& order : readyOrders) {
        RestingOrder ro;
        ro.orderId = next_order_id++; // Assign ID upon arrival at exchange
        ro.is_buy = order.is_buy;
        ro.price = order.price;
        ro.quantity = order.quantity;
        ro.entry_time = order.submission_time; // Use submission time for verification
        
        // Queue Position Logic
        ro.queue_position = book.getVolumeAt(ro.price);
        if (queue_decay > 0) ro.queue_position *= (1.0 - queue_decay);
        
        resting_orders.push_back(ro);
    }

    // 2. Process Resting Orders against Market Event (Trade)
    if (event.type == EventType::TRADE) {
        auto it = resting_orders.begin();
        while (it != resting_orders.end()) {
            bool filled = false;
            
            // Check if trade consumes our order
            if (it->is_buy) {
                // We are Bid. Aggressor is Sell (`!event.is_buy`).
                if (!event.is_buy) {
                    if (event.price <= it->price) {
                        if (event.price < it->price) {
                            filled = true; // Crossed
                        } else {
                            it->queue_position -= event.quantity;
                            if (it->queue_position <= 0) filled = true;
                        }
                    }
                }
            } else {
                // We are Ask. Aggressor is Buy (`event.is_buy`).
                if (event.is_buy) {
                    if (event.price >= it->price) {
                        if (event.price > it->price) {
                            filled = true; // Crossed
                        } else {
                            it->queue_position -= event.quantity;
                            if (it->queue_position <= 0) filled = true;
                        }
                    }
                }
            }
            
            if (filled) {
                // Market Impact
                double impact = impact_coeff * it->quantity;
                double effective_price = it->price;
                if (it->is_buy) effective_price += impact;
                else effective_price -= impact;

                executionSimulator.executeOrder(it->is_buy, effective_price, it->quantity, event.price); // Using event price as mid approximation or we need mid passed in?
                // ExecutionSimulator::executeOrder takes currentMid for PnL tracking, but here we just need to record the fill.
                // Actually executeOrder updates inventory and cash.
                
                FillReport report;
                report.timestamp = event.timestamp_ns;
                report.orderId = it->orderId;
                report.price = effective_price;
                report.quantity = it->quantity;
                report.is_buy = it->is_buy;
                report.is_maker = true; // Limit orders are maker
                report.entry_time = it->entry_time; // Added for Latency Verification
                
                new_fills.push_back(report);
                
                it = resting_orders.erase(it);
            } else {
                ++it;
            }
        }
    }
}

std::vector<FillReport> SimulatedExchange::getNewFills() {
    std::vector<FillReport> fills = new_fills;
    new_fills.clear();
    return fills;
}

double SimulatedExchange::getInventory() const {
    return executionSimulator.getInventory();
}

double SimulatedExchange::getTotalPnL(double currentMidPrice) const {
    return executionSimulator.getTotalPnL(currentMidPrice);
}
