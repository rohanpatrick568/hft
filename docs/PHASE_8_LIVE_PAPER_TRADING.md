# Phase 8: Live Paper Trading (Alpaca)

## Overview
This phase transitions the HFT engine from a pure simulation/backtest environment to a **Live Paper Trading** system using **Alpaca**.
We utilize a **Hybrid Python-C++ Architecture** where:
1.  **Python** handles market connectivity (WebSocket data, REST execution).
2.  **C++** handles core strategy, feature extraction, and decision making.

## Architecture

### 1. Market Data Bridge (`python/alpaca_market_bridge.py`)
- Connects to Alpaca's WebSocket stream (`wss://stream.data.alpaca.markets/v2/iex`).
- Subscribes to `trades` and `quotes` for the target symbol.
- Normalizes events into a CSV stream:
  ```csv
  timestamp_ns,symbol,event_type,price,size,bid,ask
  ```
- Streams this data to `stdout`.

### 2. C++ Engine (`hft_engine.exe`)
- **LiveFeedAdapter**: Reads the CSV stream from `stdin`.
- **OrderBook**: Updates internal state based on `TRADE` and `QUOTE` events.
- **Strategy**: Runs the ML model and generates signals.
- **PaperExchangeAdapter**: Instead of simulating fills, it delegates execution to the Python adapter.

### 3. Execution Adapter (`python/alpaca_execution_adapter.py`)
- Receives commands from C++ via `std::system` calls.
- Interacts with Alpaca's REST API (`https://paper-api.alpaca.markets/v2`).
- Supports: `place`, `cancel`, `position`, `fills`.
- Enforces safety checks (though primary risk checks are in C++).

## Running the System

### Prerequisites
- Alpaca Paper Trading Account (API Key & Secret Key).
- Python environment with `requests` and `websocket-client`.

### Live Mode
```bash
# Set your keys
export ALPACA_API_KEY="PK..."
export ALPACA_SECRET_KEY="sk..."

# Run the pipeline
python python/alpaca_market_bridge.py | ./hft_engine.exe --mode live --symbol AAPL --api-key $ALPACA_API_KEY --secret-key $ALPACA_SECRET_KEY
```

### Verification Mode (Fake Data)
Use this to verify the pipeline without connecting to the WebSocket.
```bash
python python/fake_alpaca_bridge.py | ./hft_engine.exe --mode live --symbol AAPL --api-key DUMMY --secret-key DUMMY
```

## Design Decisions
- **Venue Agnostic**: The C++ engine uses abstract interfaces (`MarketDataFeed`, `ExecutionInterface`). Switching to another broker (e.g., Interactive Brokers) only requires changing the Python adapters.
- **Safety**: The C++ engine maintains its own risk checks (DecisionEngine). The Python adapter acts as a final gatekeeper.
- **Latency**: While Python introduces some latency, it is acceptable for "Paper Trading" and research. For production HFT, the C++ engine would connect directly via TCP/UDP.

## Known Limitations
- **Latency**: The `std::system` call overhead is significant (~10-50ms).
- **Queue Position**: We cannot model queue position accurately in Paper Trading as we don't have L3 data or real matching engine feedback.
