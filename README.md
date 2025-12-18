# HFT-Inspired Market Microstructure Trading System

## Overview
This project is a high-frequency trading (HFT) research system designed to simulate realistic market microstructure behavior. It combines a high-performance **C++ Core** for simulation with a **Python/LightGBM** stack for machine learning.

The system is designed to be **offline-first**, using free public trade data (Binance) to simulate a realistic trading environment including **network latency**, **queue position**, and **execution probability**.

## Key Features
*   **Event-Driven Replay Engine**: Replays historical market data tick-by-tick with nanosecond precision.
*   **Hybrid ML Inference**:
    *   **Python Training**: Trains a LightGBM Gradient Boosting model on historical data.
    *   **C++ Inference**: Compiles the model to optimized C code using **Treelite**, allowing for zero-overhead inference inside the hot path.
*   **Market Making Strategy**:
    *   **Avellaneda-Stoikov Model**: Implements the classic inventory-based market making strategy.
    *   **ML Alpha Signal**: Uses the LightGBM model to predict short-term price movements and adjust the reservation price ($r$) accordingly.
    *   **Inventory Risk Management**: Adjusts quotes based on current inventory to target zero exposure.
*   **Realistic Execution Simulation**:
    *   **Latency Modeling**: Simulates network and exchange processing delays (randomized 100µs - 500µs).
    *   **Fill Logic**: Orders are only filled if the market price crosses the limit price *after* the order arrives at the exchange.

## Prerequisites
- **OS:** Windows 10/11 (or Linux/macOS with CMake)
- **C++ Compiler:** C++17 compatible (MSVC, GCC, Clang)
- **Build System:** CMake 3.10+
- **Python:** 3.8+
- **Python Libraries:** `pandas`, `numpy`, `lightgbm`, `treelite==3.9.0`, `treelite_runtime==3.9.0`, `matplotlib`, `plotly`

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

### 2. Train the Model
Train the LightGBM model and compile it to C code. This generates `src/engine/model_compiled.c`.
```bash
# Make sure you have run a simulation at least once to generate logs, 
# or use the dummy data generation in the script.
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
.\src\Release\hft_engine.exe ..\data\BTCUSDT-trades-2024-01_sample.csv > ..\data\simulation_log.csv

# Linux/Mac
./hft_engine ../data/BTCUSDT-trades-2024-01_sample.csv > ../data/simulation_log.csv
```

**Baseline Run (No ML):**
Use the `--no-ml` flag to run the strategy without the machine learning signal (pure Avellaneda-Stoikov).
```bash
.\src\Release\hft_engine.exe ..\data\BTCUSDT-trades-2024-01_sample.csv --no-ml > ..\data\simulation_log_baseline.csv
```

### 5. Analyze Performance
Visualize your strategy's PnL, Inventory, and Model Confidence.
```bash
cd ..
# Open the notebook in VS Code or Jupyter Lab
python/performance_analysis.ipynb
```

### 6. A/B Testing
Compare the performance of the ML strategy vs. the baseline.
1. Run the simulation with ML enabled (step 4).
2. Run the simulation with `--no-ml` (step 4).
3. Use the analysis notebook `python/performance_analysis.ipynb` to compare results.

## Performance (Latest Run)
*   **ML Strategy**:
    *   **PnL**: +2,527.88 USDT
    *   **Trades**: 12,202
    *   **Final Inventory**: 0.28 BTC
*   **Baseline Strategy**:
    *   **PnL**: +1.41 USDT
    *   **Trades**: 253
    *   **Final Inventory**: 0.00 BTC

## The Research Loop
1.  **Simulate**: Run the C++ engine to generate `simulation_log.csv`.
2.  **Train**: Run `python/train_model.py` to train a new model on the latest logs and regenerate `model_compiled.c`.
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
