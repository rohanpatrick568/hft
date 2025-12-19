# Limit Order Book (LOB)

## Overview
The `src/orderbook/` directory contains the implementation of the Limit Order Book.

## Components

### OrderBook (`OrderBook.cpp/h`)
*   **Role**: Maintains the state of the market (Bids and Asks).
*   **Data Structure**: Uses `std::map` (or similar ordered container) to store price levels and quantities.
*   **Functionality**:
    *   `apply(MarketEvent)`: Updates the book based on new trades or updates.
    *   `getBestBid()` / `getBestAsk()`: Returns the current top-of-book prices.
    *   `getMidPrice()`: Calculates the mid-price.
    *   `getImbalance()`: Calculates the volume imbalance between bids and asks.

## Design Notes
*   The current implementation is optimized for simulation accuracy rather than extreme low-latency (which would use flat arrays or pre-allocated memory pools).
*   It supports adding liquidity (simulating market depth) to ensure the book is not empty during trade-only replays.
