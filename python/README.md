# Python Analysis & Machine Learning

## Overview
The `python/` directory contains the scripts and notebooks for data analysis, model training, hyperparameter tuning, and performance benchmarking.

## Scripts

### 1. `tune_model.py` (Recommended)
*   **Purpose**: Hyperparameter optimization and model compilation.
*   **Workflow**:
    1.  Loads `data/simulation_log_train.csv`.
    2.  Performs **Grid Search** with **Time Series Cross-Validation** to find the best LightGBM parameters.
    3.  Trains the final model on the full dataset.
    4.  Compiles the model to C code using **Treelite**.
    5.  Exports `model_compiled.c` and `model_compiled.h` to `src/engine/`.

### 2. `train_model.py`
*   **Purpose**: Basic model training.
*   **Workflow**: Similar to `tune_model.py` but uses fixed default hyperparameters. Useful for quick tests.

### 3. `compare_results.py`
*   **Purpose**: Benchmarking and A/B testing.
*   **Workflow**:
    1.  Reads simulation logs (e.g., `simulation_log_test_random.csv` and `simulation_log_test_optimized.csv`).
    2.  Calculates key metrics: **Total Return**, **Sharpe Ratio**, **Max Drawdown**.
    3.  Prints a comparison summary to the console.

### 4. `dashboard.py`
*   **Purpose**: Interactive visualization.
*   **Features**: Plots Equity curves, Inventory levels, and PnL over time.

## Notebooks

*   **`performance_analysis.ipynb`**: Detailed analysis of simulation results. Visualizes trade locations, inventory management, and alpha signal correlation.
*   **`interpretability.ipynb`**: Uses SHAP values or feature importance to understand what drives the model's predictions.
*   **`legacy_*.ipynb`**: Older experiments (e.g., Logistic Regression) kept for reference.

## Requirements
Install the required libraries:
```bash
pip install pandas numpy lightgbm treelite treelite_runtime matplotlib scikit-learn plotly
```
