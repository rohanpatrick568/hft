import optuna
import subprocess
import pandas as pd
import numpy as np
import os
import sys
import json

# Configuration
RESEARCH_SCRIPT = "scripts/run_research.py"
RESULTS_FILE = "results/research_trades.csv"
BEST_PARAMS_FILE = "best_params.json"
N_TRIALS = 50

def calculate_sharpe(trades_file):
    if not os.path.exists(trades_file):
        return -999.0
    
    try:
        df = pd.read_csv(trades_file)
        if len(df) < 10: # Not enough trades
            return -999.0
            
        # Calculate PnL per trade
        # We need to reconstruct PnL curve or just use trade returns?
        # Simple Sharpe: Mean(Trade PnL) / Std(Trade PnL)
        # Better: Time-weighted returns.
        # For HFT, we often look at PnL per dollar traded or just total PnL / Max Drawdown.
        # The prompt asks for Sharpe Ratio (Mean Return / Std Dev of Returns).
        # Let's assume "Return" is PnL per trade for simplicity, or PnL over fixed intervals.
        
        # Let's calculate realized PnL from fills.
        # We need to match buys and sells or just track inventory mark-to-market.
        # Since we don't have the full mark-to-market log here (only trades), 
        # we can approximate trade returns if we assume flat inventory at end?
        # Or we can just use the "price" column.
        
        # Let's assume the engine logs PnL? No, it logs trades.
        # We need to calculate PnL.
        # PnL = - (Cash Flow) + Inventory * CurrentPrice
        # But we don't know CurrentPrice at end easily from trades file alone unless we read the last price.
        
        # Alternative: The engine logs "equity" in the tick log?
        # But we are running research mode, which might not save tick logs by default unless configured.
        
        # Let's try to estimate PnL from trades assuming mean reversion or just raw cash flow if inventory is small.
        # Or better: Use the `sim_fills.json` or similar if available? No, that's transient.
        
        # Let's do a simple FIFO matching or Average Cost matching to get realized PnL per trade.
        # Simplified:
        # Total PnL = Sum(-Price * Quantity * (1 if Buy else -1)) + FinalInventory * FinalPrice
        
        # We need FinalPrice. We can use the last trade price as a proxy.
        last_price = df.iloc[-1]['price']
        
        df['signed_qty'] = df.apply(lambda x: x['quantity'] if x['is_buy'] else -x['quantity'], axis=1)
        df['cash_flow'] = -df['price'] * df['signed_qty']
        
        total_cash = df['cash_flow'].sum()
        inventory = df['signed_qty'].sum()
        
        final_equity = total_cash + inventory * last_price
        
        # To get Sharpe, we need a series of returns.
        # Let's compute equity curve after each trade.
        df['cum_cash'] = df['cash_flow'].cumsum()
        df['cum_inv'] = df['signed_qty'].cumsum()
        df['equity'] = df['cum_cash'] + df['cum_inv'] * df['price'] # Mark to market at trade price
        
        df['return'] = df['equity'].diff().fillna(0)
        
        mean_ret = df['return'].mean()
        std_ret = df['return'].std()
        
        if std_ret == 0:
            return 0.0
            
        sharpe = mean_ret / std_ret
        # Annualize? For HFT, maybe not needed for relative comparison.
        # But usually Sharpe is annualized. Let's just return raw Sharpe per trade.
        
        return sharpe * np.sqrt(len(df)) # Scale by sqrt(N) to approximate "per session" stability?
        # Or just return simple Sharpe.
        
        return sharpe

    except Exception as e:
        print(f"Error calculating Sharpe: {e}")
        return -999.0

def objective(trial):
    # 1. Suggest Parameters
    risk_aversion = trial.suggest_float("risk_aversion", 0.01, 1.0)
    half_spread = trial.suggest_float("half_spread", 0.01, 0.10)
    skew_factor = trial.suggest_float("skew_factor", 0.0, 2.0)
    
    print(f"\n[Trial {trial.number}] Testing: gamma={risk_aversion:.4f}, spread={half_spread:.4f}, skew={skew_factor:.4f}")
    
    # 2. Run Simulation
    # We pass parameters as command line arguments to run_research.py
    # which passes them to lifecycle_manager.py -> hft_engine.exe
    cmd = [
        "python", RESEARCH_SCRIPT,
        "--risk-aversion", str(risk_aversion),
        "--half-spread", str(half_spread),
        "--skew-factor", str(skew_factor),
        "--trade-logs", RESULTS_FILE,
        "--no-ml" # Optional: Disable ML to speed up or focus on params? 
                  # The prompt implies optimizing the strategy, which includes ML signal usage.
                  # But if we want to optimize the AS parameters, we should keep ML enabled if it's part of the strategy.
                  # However, for "sanity check" or pure AS tuning, maybe disable?
                  # The prompt says "optimize my strategy parameters".
                  # Let's keep ML enabled (default) but maybe the user wants to tune the baseline first?
                  # I'll leave ML enabled (remove --no-ml) as it's the "Profit Engine".
    ]
    
    # Ensure results file is deleted before run
    if os.path.exists(RESULTS_FILE):
        os.remove(RESULTS_FILE)
        
    try:
        # Run with timeout
        result = subprocess.run(cmd, capture_output=True, text=True, timeout=120) # 2 min max
        if result.returncode != 0:
            print(f"Simulation failed: {result.stderr}")
            return -999.0
    except subprocess.TimeoutExpired:
        print("Simulation timed out.")
        return -999.0
        
    # 3. Calculate Score
    sharpe = calculate_sharpe(RESULTS_FILE)
    print(f"Result: Sharpe = {sharpe:.4f}")
    
    return sharpe

def main():
    print("Starting Optimization Study...")
    
    # Create Study
    study = optuna.create_study(direction="maximize")
    
    try:
        study.optimize(objective, n_trials=N_TRIALS)
    except KeyboardInterrupt:
        print("Optimization interrupted by user.")
        
    # Results
    print("\nOptimization Finished!")
    print("Best trial:")
    trial = study.best_trial
    print(f"  Value: {trial.value}")
    print("  Params: ")
    for key, value in trial.params.items():
        print(f"    {key}: {value}")
        
    # Save Best Params
    with open(BEST_PARAMS_FILE, "w") as f:
        json.dump(trial.params, f, indent=4)
    print(f"Saved best parameters to {BEST_PARAMS_FILE}")

if __name__ == "__main__":
    main()
