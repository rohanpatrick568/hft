#pragma once
#include <cstdint>
#include <random>
#include <queue>
#include <vector>

struct PendingOrder {
    bool is_buy;
    double price;
    double quantity;
    uint64_t arrival_time;
};

class LatencyQueueSimulator {
public:
    LatencyQueueSimulator(uint64_t minLatencyNs = 100000, uint64_t maxLatencyNs = 500000);

    uint64_t getLatency();
    
    void addOrder(bool is_buy, double price, double quantity, uint64_t current_time);
    std::vector<PendingOrder> getReadyOrders(uint64_t current_time);

private:
    std::mt19937 rng;
    std::uniform_int_distribution<uint64_t> dist;
    
    // Priority queue to store orders sorted by arrival time (min heap)
    struct OrderComparator {
        bool operator()(const PendingOrder& a, const PendingOrder& b) {
            return a.arrival_time > b.arrival_time;
        }
    };
    std::priority_queue<PendingOrder, std::vector<PendingOrder>, OrderComparator> pendingOrders;
};
