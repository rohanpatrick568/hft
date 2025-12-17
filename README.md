# HFT-Inspired Market Microstructure Trading System

## Overview
This project is a high-frequency trading (HFT) research system designed to simulate realistic market microstructure behavior. It combines a high-performance **C++ Core** for simulation with a **Python/DirectML** stack for machine learning and analysis.

The system is designed to be **offline-first**, using free public trade data (Binance) to simulate a realistic trading environment including **network latency**, **queue position**, and **execution probability**.

## Key Features
*   **Event-Driven Replay Engine**: Replays historical market data tick-by-tick with nanosecond precision.
*   **Realistic Execution Simulation**:
    *   **Latency Modeling**: Simulates network and exchange processing delays (randomized 100µs - 500µs).
    *   **Fill Logic**: Orders are only filled if the market price crosses the limit price *after* the order arrives at the exchange.
    *   **PnL Tracking**: Real-time tracking of Inventory, Cash, Unrealized PnL, and Total Equity.
*   **Market Making Strategy**:
    *   **Avellaneda-Stoikov Model**: Implements the classic inventory-based market making strategy.
    *   **Inventory Risk Management**: Adjusts quotes based on current inventory to target zero exposure.
    *   **Volatility Estimation**: Calculates rolling variance of mid-prices to widen/tighten spreads dynamically.
*   **Interpretability**:
    *   Dashboards to visualize PnL, Inventory, and Feature Contributions.
    *   Analysis of model calibration and regime-dependent behavior.

## Prerequisites
- **OS:** Windows 10/11 (or Linux/macOS with CMake)
- **C++ Compiler:** C++17 compatible (MSVC, GCC, Clang)
- **Build System:** CMake 3.10+
- **Python:** 3.8+
- **Python Libraries:** `pandas`, `numpy`, `matplotlib`, `seaborn`, `plotly`, `torch`, `torch-directml`

## Directory Structure
```
├── data/                   # Market data (CSV) and Simulation Logs
├── src/                    # C++ Core
│   ├── engine/             # Replay, Decision, Execution, Latency logic
│   ├── orderbook/          # Limit Order Book implementation
│   └── main.cpp            # Entry point
├── python/                 # Analysis & ML
│   ├── dashboard.py        # Quick PnL visualization
│   ├── train_model.ipynb   # Train ML model & export weights
│   └── interpretability.ipynb # Deep dive analysis
├── scripts/                # Utilities
│   └── download_data.py    # Data fetcher
└── build/                  # Compiled binaries
```

## Quick Start Guide

### 1. Get Market Data
Download a sample of public trade data (e.g., 50,000 trades from Jan 2024).
```bash
# Downloads monthly data and creates a 50k row sample
python scripts/download_data.py --mode monthly --year 2024 --month 01 --sample 50000
```

### 2. Build the Engine
Compile the C++ simulation core.
```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

### 3. Run Simulation
Run the engine on the sample data. The output is redirected to a CSV log file for analysis.
```bash
# Windows (PowerShell/CMD)
.\src\Release\hft_engine.exe ..\data\BTCUSDT-trades-2024-01_sample.csv > ..\data\simulation_log.csv

# Linux/Mac
./hft_engine ../data/BTCUSDT-trades-2024-01_sample.csv > ../data/simulation_log.csv
```
*Note: The simulation runs extremely fast because output is buffered to a file.*

### 4. Analyze Performance
Visualize your strategy's PnL, Inventory, and Model Confidence.
```bash
cd ..
python python/dashboard.py data/simulation_log.csv
```

### 5. The Research Loop (How to Improve the Strategy)
1.  **Analyze**: Open `python/dashboard.py` to see how your PnL evolves and where you take losses.
2.  **Tune**: Adjust strategy parameters in `src/engine/DecisionEngine.h` or `src/main.cpp`:
    *   `risk_aversion` ($\gamma$): Higher values make the agent dump inventory faster.
    *   `window_size`: Controls how reactive the volatility estimate is.
3.  **Rebuild & Test**: Recompile and run the simulation again to see if PnL improved.

## How It Works (Under the Hood)
1.  **Replay**: The engine reads a trade from the CSV.
2.  **Latency**: It checks if any of your pending orders have "arrived" at the exchange (simulated delay).
3.  **Market Update**: It updates the Order Book with the new trade.
4.  **Execution**: It checks if the new market price fills any of your resting orders.
5.  **Decision**:
    *   Updates rolling price history to calculate volatility ($\sigma^2$).
    *   Computes **Reservation Price** ($r$): $r = s - q \cdot \gamma \cdot \sigma^2$.
    *   Places **Bid** and **Ask** orders around $r$ to capture the spread while managing inventory risk.
