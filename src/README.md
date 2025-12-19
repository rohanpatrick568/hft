# C++ Core Simulation Engine

## Overview
The `src/` directory contains the high-performance C++ core of the trading system. It is responsible for:
1.  **Replaying** historical market data.
2.  **Simulating** the Limit Order Book (LOB).
3.  **Executing** the trading strategy (Decision Engine).
4.  **Simulating** market latency and execution logic.

## Directory Structure

*   **`main.cpp`**: The entry point of the application. It parses command-line arguments, initializes components, and starts the simulation loop.
*   **`engine/`**: Contains the core logic for the simulation, including the Replay Engine, Decision Engine, and Execution Simulator.
*   **`orderbook/`**: Contains the implementation of the Limit Order Book.

## Build Instructions
The project uses CMake for building.

```bash
mkdir build
cd build
cmake ..
cmake --build . --config Release
```

## Usage
The compiled executable (`hft_engine`) takes the following arguments:

```bash
./hft_engine <data_file_path> [--no-ml] [--snapshots <snapshot_file>] [--volume-bucket <btc>] [--trade-logs <log_file>]
```

*   `<data_file_path>`: Path to the CSV file containing trade data (e.g., `data/test_data.csv`).
*   `--no-ml`: (Optional) Disables the ML model and runs the strategy in "Random Baseline" mode.
*   `--snapshots`: (Optional) Path to a snapshot file (not fully implemented in current version).
*   `--volume-bucket`: (Optional) Sets the volume clock threshold in BTC (default: 1.0).
*   `--trade-logs`: (Optional) Path to save detailed trade execution logs (CSV).

## Key Components

### Main Loop (`main.cpp`)
The main loop initializes the `ReplayEngine` and injects dependencies (`OrderBook`, `DecisionEngine`, etc.). It then calls `engine.run()` to process the data file line by line.
