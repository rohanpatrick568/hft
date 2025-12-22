# Live Paper Trading Instructions

## Overview
The HFT engine now runs in a hybrid mode:
1. **Data Feed**: Python script (`scripts/market_bridge.py` or `scripts/fake_market_bridge.py`) fetches data and prints it to stdout.
2. **Engine**: C++ executable (`hft_engine.exe`) reads data from stdin, runs the ML model, and makes decisions.
3. **Execution**: C++ engine calls Python script (`scripts/order_manager.py`) to place orders on Binance Testnet.

## Prerequisites
1. **Binance Testnet Account**: You need an API Key and Secret Key from [testnet.binancefuture.com](https://testnet.binancefuture.com/).
2. **Python Environment**: Ensure `requests`, `websocket-client`, and `pandas` are installed.
   ```bash
   pip install requests websocket-client pandas
   ```

## Running the Engine

### Option 1: Simulation with Fake Data (Verify Pipeline)
Use this to check if the system is working without connecting to the real market data feed.
```bash
python scripts/fake_market_bridge.py | ./hft_engine.exe --mode paper --api-key <YOUR_KEY> --secret-key <YOUR_SECRET>
```

### Option 2: Live Market Data (Real Trading)
Use this to trade based on real-time Binance Futures data.
```bash
python scripts/market_bridge.py | ./hft_engine.exe --mode paper --api-key <YOUR_KEY> --secret-key <YOUR_SECRET>
```

## Troubleshooting
- **API-key format invalid**: This means the system successfully reached Binance, but your keys are wrong or dummy values.
- **getaddrinfo failed**: Check your internet connection or proxy settings. The Python script cannot reach Binance.
