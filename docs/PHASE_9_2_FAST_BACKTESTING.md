# Phase 9.2: High-Speed Research Backtesting

## Overview
This phase introduces a **Research Backtesting Mode** that reuses the production **Lifecycle Manager** and **C++ Engine** but swaps live data/execution for high-speed simulation adapters.

This ensures that **what you backtest is exactly what you trade**, as the core binary and control plane are identical.

## Architecture

```mermaid
graph TD
    LM[Lifecycle Manager] -->|Spawns| RF[Research Feed (Python)]
    LM -->|Spawns| TE[Trading Engine (C++)]
    RF -->|stdout -> stdin| TE
    TE -->|std::system| SE[Simulated Execution (Python)]
    RF -.->|Shared State| SE
```

## Components

### 1. Research Feed Adapter (`python/research_feed_adapter.py`)
- Reads historical CSV data (`data/research_data.csv`).
- Streams normalized events to `stdout` (mimicking Alpaca).
- Updates `data/sim_state.json` with current market state.
- Acts as a **Matching Engine**: checks `data/sim_orders.json` against current price and generates fills in `data/sim_fills.json`.

### 2. Simulated Execution Adapter (`python/simulated_execution_adapter.py`)
- Invoked by C++ Engine.
- Writes orders to `data/sim_orders.json`.
- Reads fills from `data/sim_fills.json` and reports them to C++.

### 3. Lifecycle Manager (`scripts/lifecycle_manager.py`)
- Supports `--mode research`.
- Disables risk checks and restarts for the feed.
- Uses `config/lifecycle.yaml` to select the correct adapters.

## Usage

### 1. Generate Data
```bash
python python/generate_research_data.py
```

### 2. Run Research Backtest
```bash
python scripts/run_research.py
```

### 3. Analyze Results
Results are saved to `results/research_trades.csv`.

## Key Features
- **Venue Agnostic**: The C++ engine is unaware it is running in simulation.
- **Deterministic**: Replay is based on file data.
- **Fast**: Simulation runs as fast as the Python adapter can stream (configurable sleep).
