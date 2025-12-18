import pandas as pd
import sys

def get_final_pnl(filepath):
    try:
        # Read only the last few lines to get the final equity
        # But since it's a CSV, we might need to read it all or use a smarter way.
        # For 100k rows, reading all is fine.
        columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 'inventory', 'equity', 'reservation_price', 'volatility', 'alpha']
        df = pd.read_csv(filepath, names=columns, on_bad_lines='skip')
        df = df[df['type'] == 'TICK']
        if df.empty:
            return 0.0
        return df.iloc[-1]['equity']
    except Exception as e:
        print(f"Error reading {filepath}: {e}")
        return 0.0

baseline_pnl = get_final_pnl('data/simulation_log_baseline.csv')
ml_pnl = get_final_pnl('data/simulation_log_ml.csv')

print(f"--- A/B Test Results ---")
print(f"Baseline PnL (No ML): {baseline_pnl:.4f} USDT")
print(f"Treatment PnL (With ML): {ml_pnl:.4f} USDT")
print(f"Difference: {ml_pnl - baseline_pnl:.4f} USDT")

if ml_pnl > baseline_pnl:
    print("RESULT: ML Strategy Outperformed Baseline!")
else:
    print("RESULT: Baseline Outperformed ML Strategy.")
