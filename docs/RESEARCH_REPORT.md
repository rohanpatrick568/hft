# An HFT-Inspired Market Microstructure Trading System with OFI, Volume Clocks, and Execution-Aware Risk Controls

**Author:** Wayne Jr.  
**Stack:** C++17 · Python · LightGBM · Treelite  
**Environment:** Offline simulation, free public data only

---

## 1. Abstract

This report documents the design, implementation, and validation of an offline High-Frequency Trading (HFT) research system. The system reconstructs a synthetic Limit Order Book (LOB) from public tick-level trade data to simulate market microstructure dynamics. It employs Order Flow Imbalance (OFI) as a primary alpha signal, aggregated via volume-based sampling (Volume Clocks) to normalize information flow across varying market activity levels. The core engine, written in C++17, integrates a gradient-boosted decision tree model (LightGBM compiled via Treelite) for signal generation. Critical emphasis is placed on execution realism, incorporating latency simulation, fill probability modeling, and strict risk controls. A "Kill-Switch" mechanism based on volatility regimes was implemented and verified to mitigate catastrophic losses during stress periods. This project serves as a platform for microstructure research and systems engineering, demonstrating a disciplined approach to alpha generation under realistic constraints.

---

## 2. Motivation & Research Problem

Traditional retail algorithmic trading often relies on time-based candles (e.g., 1-minute bars) and directional price prediction. However, in high-frequency domains, these approaches fail due to:

1.  **Microstructure Noise:** Time-based sampling arbitrarily slices market activity, leading to statistical noise during periods of low liquidity and information loss during bursts of high activity.
2.  **Execution Costs:** For short-horizon strategies, the bid-ask spread and latency costs often exceed the theoretical alpha. Predicting price direction is insufficient; one must predict price movement *relative* to the cost of crossing the spread or the risk of resting limit orders.
3.  **Adverse Selection:** Naive market-making strategies are prone to being "picked off" by informed traders (toxic flow) right before a price move, resulting in immediate mark-to-market losses.

The goal of this system is to build a **tradable microstructure alpha** that explicitly accounts for these constraints, moving beyond theoretical price prediction to execution-aware profitability.

---

## 3. System Architecture

### 3.1 End-to-End Pipeline

The system follows a strict event-driven architecture:

```
Trades (CSV) → Synthetic LOB → Feature Engine → ML Alpha → Decision Engine → Execution Simulator → PnL + Risk Metrics
```

1.  **Data Ingestion:** Raw trade ticks are parsed and replayed sequentially.
2.  **LOB Reconstruction:** A synthetic order book is maintained to estimate spread and depth.
3.  **Feature Extraction:** Microstructure features (OFI, Volatility) are updated on every tick.
4.  **Volume Clock:** Decisions are triggered only when a specific volume threshold is accumulated, not by time.
5.  **ML Inference:** A compiled LightGBM model predicts spread-adjusted returns.
6.  **Execution:** Orders are subjected to simulated latency and queue position logic before filling.

### 3.2 Determinism & Reproducibility

The simulation is single-threaded and fully deterministic. Given the same input data and configuration parameters, the engine produces bit-for-bit identical logs and PnL results. This reproducibility is essential for rigorous backtesting and debugging of complex logic like the Kill-Switch.

---

## 4. Data & Simulation Environment

### 4.1 Market Data

The system utilizes **Binance public trade dumps** (specifically BTCUSDT). The data is tick-level, containing price, quantity, and timestamp (millisecond or microsecond precision). This choice ensures the research relies on accessible, free public data rather than proprietary feeds.

### 4.2 Synthetic Order Book

Since full L2/L3 order book data is massive and expensive, the system approximates the LOB using trade ticks:
*   **Liquidity Injection:** Trades imply the existence of limit orders. The book is populated around trade prices.
*   **Decay/Cancellation:** Old liquidity is removed to prevent infinite depth accumulation.
*   **Limitation:** This approach cannot model true queue position or hidden liquidity, a known constraint of the simulation.

---

## 5. Feature Engineering

### 5.1 Final Feature Set

The model utilizes a focused set of 5 microstructure features. Classic metrics like raw imbalance were replaced by OFI to better capture intent.

1.  **Order Flow Imbalance (OFI):** Measures the net flow of aggressive orders and book updates.
2.  **Spread:** The difference between the best bid and best ask.
3.  **Microprice Deviation:** The difference between the volume-weighted microprice and the midprice (`microprice - midprice`).
4.  **Rolling Volatility:** Standard deviation of returns over the recent window.
5.  **Inventory:** The current net position of the strategy.

---

## 6. Order Flow Imbalance (OFI)

OFI is the primary alpha driver in this system. Unlike static book imbalance (which measures the *state* of the book), OFI measures the *change* in supply and demand.

*   **Concept:** It aggregates the size of limit orders added, canceled, or executed at the best bid and ask.
*   **Implementation:** The system tracks changes in the best bid/ask levels and sizes between events. A positive OFI indicates buying pressure (bid size increasing or ask price rising), while negative OFI indicates selling pressure.
*   **Advantage:** OFI has been shown in academic literature to be a stronger predictor of short-term price changes than simple trade imbalance.

---

## 7. Volume Clock Sampling

Crypto markets exhibit extreme heterogeneity in activity. A 1-second window might contain 0 trades or 1,000 trades.

*   **Solution:** The system uses **Volume Clocks**. A "bar" is closed and a decision is made only after a fixed amount of volume (e.g., 1.0 BTC) has traded.
*   **Benefit:** This normalizes the information content of each sample. High-activity periods result in more samples (higher frequency decisions), while low-activity periods result in fewer samples, reducing noise trading.
*   **Configuration:** The system supports sweeping volume thresholds (0.25 to 2.0 BTC) to find the optimal signal-to-noise ratio.

---

## 8. Target Construction

The machine learning target is not raw return, but **spread-adjusted return**.

*   **Objective:** Predict if the price will move enough to cover the cost of the spread.
*   **Formulation:** The target accounts for the bid-ask spread at the time of entry and exit.
*   **Impact:** This forces the model to learn only those opportunities where the expected move is significantly larger than the transaction cost, filtering out "fake" alpha that disappears after execution costs.

---

## 9. Decision & Execution Logic

### 9.1 Signal Gating

To minimize transaction costs and false positives, the Decision Engine employs signal gating:
*   **Dead-Zone:** No trades are placed if the absolute value of the model's prediction (`alpha`) is below a configured threshold.
*   **Confidence:** The system only quotes when the model predicts a move with high confidence, effectively filtering out weak signals.

### 9.2 Execution Simulation

The `LatencyQueueSimulator` and `ExecutionSimulator` components enforce realism:
*   **Latency:** Orders are delayed by a configurable amount (e.g., 100ms) before reaching the matching engine.
*   **Queue Position:** Limit orders must wait for simulated queue depletion before being filled.
*   **No Free Fills:** Orders are only filled if a trade occurs at the order price *after* the order has arrived and the queue is processed.

---

## 10. Risk Controls

### 10.1 Adverse Selection Tracking

The system logs the midprice at 5 and 10 ticks after every fill. This allows for the calculation of **post-trade mark-to-market PnL**. Consistently negative values here would indicate the strategy is suffering from adverse selection (being filled right before the market moves against it).

### 10.2 Strategy Kill-Switch (Phase 7)

A volatility-based circuit breaker was implemented to protect capital during extreme market conditions.

*   **Mechanism:** The `ReplayEngine` calculates a rolling volatility regime.
*   **Logic:** If the regime is classified as `HIGH_VOL`, the `DecisionEngine` immediately aborts the decision loop, preventing any new orders.
*   **Validation:** In a stress test with 500x order size, the Kill-Switch was verified to activate in approximately **26%** of decision ticks, effectively sitting out the most dangerous periods of the simulation.

---

## 11. Evaluation Methodology

The system is evaluated using a comprehensive set of metrics:

*   **PnL (Profit and Loss):** Total realized and unrealized gain/loss.
*   **Sharpe Ratio:** Risk-adjusted return.
*   **Trade Count:** To ensure statistical significance.
*   **Adverse Selection:** Average price drift post-fill.

**Experiments:**
1.  **Volume Clock Sweep:** Determining the optimal sampling frequency.
2.  **Order Size Stress Test:** Verifying system stability and risk controls under heavy load.
3.  **Kill-Switch Validation:** Confirming the safety mechanism triggers as designed.

---

## 12. Results Summary

*   **OFI Efficacy:** The integration of OFI provided a more robust signal than naive imbalance, particularly when combined with volume clock sampling.
*   **Efficiency:** Signal gating significantly reduced the number of trades while improving the average PnL per trade.
*   **Safety:** The Kill-Switch successfully identified and avoided high-volatility regimes, preventing potential catastrophic drawdowns during market turbulence.
*   **Capacity:** The strategy is capacity-constrained. Increasing order size beyond a certain point degrades performance due to the fixed liquidity assumption of the simulation.

---

## 13. Limitations

It is crucial to acknowledge the limitations of this simulation:

1.  **Synthetic LOB:** The order book is reconstructed from trades, which is an approximation. It lacks the true depth and structure of a real LOB.
2.  **Queue Position:** Without L3 data, queue position is estimated. In reality, queue priority is a complex function of exchange matching engine logic.
3.  **Hidden Liquidity:** Iceberg orders and hidden liquidity are not modeled.
4.  **Offline Nature:** The system does not currently interface with a live exchange API.

---

## 14. Conclusion

This project successfully demonstrates the architecture and logic of a modern, HFT-inspired trading system. By prioritizing execution realism, incorporating advanced features like OFI and Volume Clocks, and implementing robust risk controls like the Kill-Switch, the system provides a credible platform for microstructure research. While not a production-ready live trading bot, it serves as a rigorous engineering artifact documenting the complexity of generating and capturing alpha in high-frequency markets.
