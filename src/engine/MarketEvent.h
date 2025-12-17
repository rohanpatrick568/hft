#pragma once
#include <cstdint>

enum class EventType {
    TRADE,
    ADD,
    CANCEL
};

struct MarketEvent {
    uint64_t timestamp_ns;
    EventType type;
    double price;
    double quantity;
    bool is_buy; // For trades: aggressor side. For orders: side of book.
};
