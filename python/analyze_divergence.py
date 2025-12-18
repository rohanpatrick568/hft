import pandas as pd
import numpy as np

def load_log(filepath):
    columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 'inventory', 'equity', 'reservation_price', 'volatility']
    df = pd.read_csv(filepath, names=columns, on_bad_lines='skip')
    return df[df['type'] == 'TICK'].reset_index(drop=True)

df_base = load_log('data/simulation_log_baseline.csv')
df_ml = load_log('data/simulation_log_ml.csv')

# Ensure same length
min_len = min(len(df_base), len(df_ml))
df_base = df_base.iloc[:min_len]
df_ml = df_ml.iloc[:min_len]

# Compare Equity
diff = np.abs(df_base['equity'] - df_ml['equity'])
is_diff = diff > 1e-6

print(f"Total ticks: {min_len}")
print(f"Number of divergent ticks: {is_diff.sum()}")

if is_diff.any():
    first_diff = is_diff.idxmax()
    print(f"First divergence at index: {first_diff}")
    print(f"Baseline: {df_base.iloc[first_diff]['equity']}")
    print(f"ML: {df_ml.iloc[first_diff]['equity']}")
    
    # Find where they converge back
    # Check from first_diff onwards
    converged = (~is_diff).iloc[first_diff:]
    if converged.any():
        first_converge = converged.idxmax()
        print(f"Converged back at index: {first_converge}")
        print(f"Baseline: {df_base.iloc[first_converge]['equity']}")
        print(f"ML: {df_ml.iloc[first_converge]['equity']}")
    else:
        print("Never converged back.")
else:
    print("Logs are identical.")
