#pragma once
#include <cstdint>

enum class EventType {
    TRADE,
    ADD,
    CANCEL,
    QUOTE
};

struct MarketEvent {
    uint64_t timestamp_ns;
    EventType type;
    double price;
    double quantity;
    bool is_buy; // For trades: aggressor side. For orders: side of book.
    
    // For QUOTE events
    double bid_price;
    double ask_price;
    double bid_size;
    double ask_size;
};
