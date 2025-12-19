import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

def load_log(filepath):
    columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
               'inventory', 'equity', 'reservation_price', 'volatility', 
               'alpha', 'arrival_rate', 'vpin', 'effective_spread']
    
    try:
        # Read all lines and filter for TICK
        data = []
        with open(filepath, 'r') as f:
            for line in f:
                if line.startswith('TICK'):
                    data.append(line.strip().split(','))
        
        if not data:
            return None
            
        df = pd.DataFrame(data, columns=columns)
        
        # Convert numeric columns
        numeric_cols = ['imbalance', 'spread', 'microprice', 'midprice', 
                        'inventory', 'equity', 'reservation_price', 'volatility',
                        'alpha', 'arrival_rate', 'vpin', 'effective_spread']
        
        for col in numeric_cols:
            df[col] = pd.to_numeric(df[col], errors='coerce')
            
        return df
    except Exception as e:
        print(f"Error loading {filepath}: {e}")
        return None

def calculate_metrics(df, name):
    if df is None or df.empty:
        print(f"No data for {name}")
        return
    
    initial_equity = df['equity'].iloc[0]
    final_equity = df['equity'].iloc[-1]
    total_return = final_equity - initial_equity
    
    # Calculate returns for Sharpe
    df['pnl'] = df['equity'].diff().fillna(0)
    
    # Assuming high frequency, we can just take mean/std of pnl per tick
    # But better to resample if timestamps are available.
    # For simple comparison:
    avg_pnl = df['pnl'].mean()
    std_pnl = df['pnl'].std()
    sharpe = (avg_pnl / std_pnl) * np.sqrt(len(df)) if std_pnl != 0 else 0
    
    # Max Drawdown
    df['max_equity'] = df['equity'].cummax()
    df['drawdown'] = df['equity'] - df['max_equity']
    max_drawdown = df['drawdown'].min()
    
    print(f"--- {name} ---")
    print(f"Initial Equity: {initial_equity:.2f}")
    print(f"Final Equity:   {final_equity:.2f}")
    print(f"Total Return:   {total_return:.2f}")
    print(f"Sharpe Ratio:   {sharpe:.4f}")
    print(f"Max Drawdown:   {max_drawdown:.2f}")
    print("")
    
    return total_return

def main():
    random_file = "data/simulation_log_test_random.csv"
    optimized_file = "data/simulation_log_test_optimized.csv"
    
    df_random = load_log(random_file)
    df_optimized = load_log(optimized_file)
    
    ret_random = calculate_metrics(df_random, "Random Baseline (20%)")
    ret_optimized = calculate_metrics(df_optimized, "Optimized ML Strategy")
    
    if ret_random is not None and ret_optimized is not None:
        diff = ret_optimized - ret_random
        print(f"Improvement over Baseline: {diff:.2f} USDT")

if __name__ == "__main__":
    main()
