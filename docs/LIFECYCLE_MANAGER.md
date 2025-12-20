# Phase 9.1: Lifecycle Manager

## Overview
The **Lifecycle Manager** (`scripts/lifecycle_manager.py`) is the production control plane for the HFT system. It orchestrates the Python Market Bridge and the C++ Trading Engine, ensuring they run in sync and monitoring their health.

It acts as a **Supervisor Process** that:
1.  **Launches** the data feed and trading engine.
2.  **Pipes** data from the feed to the engine.
3.  **Monitors** process health and data heartbeats.
4.  **Enforces** global risk limits (Max Loss, Max Position) via the Alpaca API.
5.  **Restarts** components automatically upon failure.

## Architecture
```mermaid
graph TD
    LM[Lifecycle Manager] -->|Spawns| MB[Market Bridge (Python)]
    LM -->|Spawns| TE[Trading Engine (C++)]
    MB -->|stdout -> stdin| TE
    LM -->|Monitors| MB
    LM -->|Monitors| TE
    LM -->|Polls Risk| Alpaca[Alpaca API]
```

## Configuration
Configuration is managed in `config/lifecycle.yaml`.

```yaml
system:
  mode: live
  symbol: AAPL
  log_dir: logs

risk:
  max_daily_loss: 500.0
  max_position_size: 100
  emergency_flat_on_violation: true
```

## Usage

### 1. Setup Environment
```bash
export ALPACA_API_KEY="PK..."
export ALPACA_SECRET_KEY="sk..."
```

### 2. Run Lifecycle Manager
```bash
python scripts/lifecycle_manager.py
```

## Safety Features
*   **Heartbeat Monitor**: If no data is received for 15 seconds, the market feed is restarted.
*   **Process Supervision**: If the engine or feed crashes, they are automatically restarted.
*   **Kill Switch**: If PnL drops below `max_daily_loss` or position exceeds `max_position_size`, the system:
    1.  Terminates the engine.
    2.  Cancels all open orders.
    3.  Closes all positions (if `emergency_flat_on_violation` is true).

## Logs
Logs are written to `logs/`:
*   `lifecycle.log`: Supervisor events (restarts, risk checks).
*   `engine_out.log`: Standard output from the C++ engine.
*   `engine_err.log`: Errors from the C++ engine.
*   `feed_err.log`: Errors from the market bridge.
