# HFT-Inspired Market Microstructure Trading System

## Overview
This project is a high-frequency trading (HFT) research system designed to simulate realistic market microstructure behavior. It combines a high-performance **C++ Core** for simulation with a **Python/LightGBM** stack for machine learning.

The system is designed to be **offline-first**, using free public trade data (Binance) to simulate a realistic trading environment including **network latency**, **queue position**, and **execution probability**.

## Key Features
*   **Event-Driven Replay Engine**: Replays historical market data tick-by-tick with nanosecond precision.
*   **Volume Clock**: Triggers decision events based on traded volume (e.g., every 1.0 BTC) rather than wall-clock time, adapting to market activity.
*   **Hybrid ML Inference**:
    *   **Python Training**: Trains a LightGBM Gradient Boosting model on historical data using **Spread-Adjusted Returns**.
    *   **C++ Inference**: Compiles the model to optimized C code using **Treelite**, allowing for zero-overhead inference inside the hot path.
*   **Market Making Strategy**:
    *   **Avellaneda-Stoikov Model**: Implements the classic inventory-based market making strategy.
    *   **ML Alpha Signal**: Uses the LightGBM model (Features: OFI, Spread, Microprice, Volatility, Inventory) to predict short-term price movements.
    *   **Signal Gating**: Implements a "Dead-Zone" where quotes are only placed if the model confidence exceeds a threshold (`|alpha| > 0.5`).
    *   **Inventory Risk Management**: Adjusts quotes based on current inventory to target zero exposure.
*   **Order Flow Imbalance (OFI)**: Tracks the net flow of limit orders to quantify buying/selling pressure.
*   **Adverse Selection Analysis**: Tools to measure post-fill price drift and validate signal quality.
*   **Random Baseline Mode**:
    *   Includes a baseline mode (`--no-ml`) that trades randomly (20% probability per tick) to provide a benchmark for evaluating the ML strategy's performance.
*   **Realistic Execution Simulation**:
    *   **Latency Modeling**: Simulates network and exchange processing delays (randomized 100µs - 500µs).
    *   **Fill Logic**: Orders are only filled if the market price crosses the limit price *after* the order arrives at the exchange.

## Prerequisites
- **OS:** Windows 10/11 (or Linux/macOS with CMake)
- **C++ Compiler:** C++17 compatible (MSVC, GCC, Clang)
- **Build System:** CMake 3.10+
- **Python:** 3.8+
- **Python Libraries:** `pandas`, `numpy`, `lightgbm`, `treelite==3.9.0`, `treelite_runtime==3.9.0`, `matplotlib`, `plotly`, `seaborn`

## Directory Structure
```
├── data/                   # Market data (CSV) and Simulation Logs
├── src/                    # C++ Core
│   ├── engine/             # Replay, Decision, Execution, Latency logic
│   │   └── model_compiled.c # Generated C code from Treelite
│   ├── orderbook/          # Limit Order Book implementation
│   └── main.cpp            # Entry point
├── python/                 # Analysis & ML
│   ├── train_model.py      # Main training script (LightGBM -> C)
│   ├── tune_model.py       # Hyperparameter tuning script
│   ├── run_sweep.py        # Volume clock sensitivity sweep
│   ├── adverse_selection_analysis.py # Post-trade analysis
│   ├── compare_results.py  # Benchmarking script (ML vs Baseline)
│   ├── dashboard.py        # PnL visualization
│   ├── interpretability.ipynb # Deep dive analysis
│   └── legacy_train_logistic.ipynb # Old logistic regression notebook
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

### 2. Train & Tune the Model
You can either train a default model or tune hyperparameters for better performance.

**Option A: Tune Hyperparameters (Recommended)**
This script runs a Grid Search, finds the best parameters, and compiles the model to C.
```bash
python python/tune_model.py
```

**Option B: Train Default Model**
```bash
python python/train_model.py
```

### 3. Build the Engine
Compile the C++ simulation core (including the generated model).
```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

### 4. Run Simulation
Run the engine on the sample data. The output is redirected to a CSV log file.

**Standard Run (ML Enabled):**
```bash
# Windows (PowerShell/CMD)
.\src\Release\hft_engine.exe ..\data\BTCUSDT-trades-2024-01_sample.csv --volume-bucket 1.0 --trade-logs ..\data\trade_logs.csv > ..\data\simulation_log.csv

# Linux/Mac
./hft_engine ../data/BTCUSDT-trades-2024-01_sample.csv --volume-bucket 1.0 --trade-logs ../data/trade_logs.csv > ../data/simulation_log.csv
```

**Parameter Sweep:**
Run a sensitivity analysis on volume bucket sizes.
```bash
python python/run_sweep.py data/BTCUSDT-trades-2024-01_sample.csv
```

**Adverse Selection Analysis:**
Analyze the quality of executed trades.
```bash
python python/adverse_selection_analysis.py data/trade_logs.csv
```

**Baseline Run (No ML):**
Use the `--no-ml` flag to run the strategy without the machine learning signal (pure Avellaneda-Stoikov with random noise).
```bash
.\src\Release\hft_engine.exe ..\data\BTCUSDT-trades-2024-01_sample.csv --no-ml > ..\data\simulation_log_test_random.csv
```

### 5. Compare Results
Run the comparison script to see the performance difference (PnL, Sharpe Ratio, Drawdown).
```bash
cd ..
python python/compare_results.py
```

### 6. Analyze Performance
Visualize your strategy's PnL, Inventory, and Model Confidence.
```bash
# Open the notebook in VS Code or Jupyter Lab
python/performance_analysis.ipynb
```

## The Research Loop
1.  **Simulate**: Run the C++ engine to generate `simulation_log.csv`.
2.  **Tune**: Run `python/tune_model.py` to optimize the model on the latest logs and regenerate `model_compiled.c`.
3.  **Build**: Recompile the C++ engine to link the new model.
4.  **Repeat**: Run the simulation again to test the new model's performance.

## How It Works (Under the Hood)
1.  **Decision Engine**:
    *   Calculates **Rolling Volatility** ($\sigma^2$).
    *   Calculates **Inventory Risk** ($q \cdot \gamma \cdot \sigma^2$).
    *   **Inference**: Calls the compiled LightGBM model to get an **Alpha Signal** ($\alpha$).
    *   Computes **Reservation Price** ($r$): 
        $$ r = s - q \gamma \sigma^2 + \alpha $$
    *   Places **Bid** and **Ask** orders around $r$ to capture the spread.
