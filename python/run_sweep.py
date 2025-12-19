import subprocess
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import os
import sys

def run_simulation(bucket, data_file):
    print(f"Running simulation for volume bucket: {bucket} BTC")
    
    output_log = f"data/simulation_log_{bucket}.csv"
    trade_log = f"data/trade_log_{bucket}.csv"
    
    cmd = [
        "./build/src/Release/hft_engine.exe",
        data_file,
        "--volume-bucket", str(bucket),
        "--trade-logs", trade_log
    ]
    
    with open(output_log, "w") as outfile:
        process = subprocess.run(cmd, stdout=outfile, stderr=subprocess.PIPE, text=True)
        
    if process.returncode != 0:
        print(f"Error running simulation: {process.stderr}")
        return None, None
        
    return output_log, trade_log

def parse_simulation_log(filepath):
    columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
               'inventory', 'equity', 'reservation_price', 'volatility', 
               'alpha', 'arrival_rate', 'vpin', 'effective_spread', 'ofi']
    
    data = []
    try:
        with open(filepath, 'r') as f:
            for line in f:
                if line.startswith('TICK'):
                    parts = line.strip().split(',')
                    # Ensure we have enough parts
                    if len(parts) >= len(columns):
                        data.append(parts[:len(columns)])
        
        if not data:
            return None
            
        df = pd.DataFrame(data, columns=columns)
        for col in columns[1:]: # Skip type
            df[col] = pd.to_numeric(df[col], errors='coerce')
            
        return df
    except Exception as e:
        print(f"Error parsing {filepath}: {e}")
        return None

def calculate_metrics(df):
    if df is None or df.empty:
        return {}
    
    initial_equity = df['equity'].iloc[0]
    final_equity = df['equity'].iloc[-1]
    total_pnl = final_equity - initial_equity
    
    # Sharpe Ratio
    # Resample to 1-second intervals to get meaningful std dev
    df['datetime'] = pd.to_datetime(df['timestamp'], unit='ns')
    df = df.set_index('datetime')
    resampled = df['equity'].resample('1S').last().ffill()
    returns = resampled.diff().fillna(0)
    
    if returns.std() == 0:
        sharpe = 0
    else:
        sharpe = returns.mean() / returns.std() * np.sqrt(3600 * 24 * 365) # Annualized? Or just per second?
        # Let's just use raw mean/std ratio for comparison
        sharpe = returns.mean() / returns.std()
        
    avg_inventory = df['inventory'].abs().mean()
    
    return {
        'Total PnL': total_pnl,
        'Sharpe': sharpe,
        'Avg Inventory': avg_inventory
    }

def main():
    data_file = "data/test_data.csv"
    if len(sys.argv) > 1:
        data_file = sys.argv[1]
        
    buckets = [0.25, 0.5, 1.0, 2.0]
    results = []
    
    for bucket in buckets:
        sim_log, trade_log = run_simulation(bucket, data_file)
        if sim_log:
            df = parse_simulation_log(sim_log)
            metrics = calculate_metrics(df)
            
            # Get trade count from trade log
            trade_count = 0
            if os.path.exists(trade_log):
                try:
                    trades_df = pd.read_csv(trade_log)
                    trade_count = len(trades_df)
                except:
                    pass
            
            metrics['Volume Bucket'] = bucket
            metrics['Trade Count'] = trade_count
            results.append(metrics)
            
    results_df = pd.DataFrame(results)
    print("\nResults:")
    print(results_df)
    
    # Plot Sharpe vs Volume Bucket
    plt.figure(figsize=(10, 6))
    plt.plot(results_df['Volume Bucket'], results_df['Sharpe'], marker='o')
    plt.title('Sharpe Ratio vs Volume Bucket Size')
    plt.xlabel('Volume Bucket (BTC)')
    plt.ylabel('Sharpe Ratio')
    plt.grid(True)
    plt.savefig('sharpe_vs_volume.png')
    print("Saved plot to sharpe_vs_volume.png")

if __name__ == "__main__":
    main()
