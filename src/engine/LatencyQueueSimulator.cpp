#include "LatencyQueueSimulator.h"

LatencyQueueSimulator::LatencyQueueSimulator(uint64_t minLatencyNs, uint64_t maxLatencyNs) 
    : rng(std::random_device{}()), dist(minLatencyNs, maxLatencyNs) {}

uint64_t LatencyQueueSimulator::getLatency() {
    return dist(rng);
}

void LatencyQueueSimulator::addOrder(bool is_buy, double price, double quantity, uint64_t current_time) {
    uint64_t latency = getLatency();
    PendingOrder order;
    order.is_buy = is_buy;
    order.price = price;
    order.quantity = quantity;
    order.arrival_time = current_time + latency;
    pendingOrders.push(order);
}

std::vector<PendingOrder> LatencyQueueSimulator::getReadyOrders(uint64_t current_time) {
    std::vector<PendingOrder> ready;
    while (!pendingOrders.empty() && pendingOrders.top().arrival_time <= current_time) {
        ready.push_back(pendingOrders.top());
        pendingOrders.pop();
    }
    return ready;
}
