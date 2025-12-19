import subprocess
import pandas as pd
import matplotlib.pyplot as plt
import sys
import os

def run_sweep(data_file, latencies):
    results = []
    
    for lat in latencies:
        print(f"Running simulation with latency={lat}us...")
        log_file = f"../data/trade_log_lat_{lat}.csv"
        
        # Run Engine
        cmd = [
            "./src/Release/hft_engine.exe",
            data_file,
            "--volume-bucket", "1.0",
            "--latency", str(lat),
            "--trade-logs", log_file
        ]
        
        try:
            subprocess.run(cmd, check=True, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        except subprocess.CalledProcessError:
            print(f"Error running simulation for latency {lat}")
            continue
            
        # Analyze Logs
        if os.path.exists(log_file):
            df = pd.read_csv(log_file)
            if df.empty:
                print(f"Warning: No trades for latency {lat}")
                results.append({'latency': lat, 'fills': 0, 'pnl_bps': 0, 'sharpe': 0})
                continue
                
            # Calculate PnL (Mark-to-Market 10 ticks)
            df['pnl'] = np.where(df['is_buy'], 
                                (df['midprice_after_10'] - df['fill_price']) / df['fill_price'],
                                (df['fill_price'] - df['midprice_after_10']) / df['fill_price'])
            
            pnl_bps = df['pnl'].mean() * 10000
            sharpe = df['pnl'].mean() / df['pnl'].std() if len(df) > 1 else 0
            fills = len(df)
            
            results.append({
                'latency': lat,
                'fills': fills,
                'pnl_bps': pnl_bps,
                'sharpe': sharpe
            })
        else:
            print(f"Log file not found for latency {lat}")

    return pd.DataFrame(results)

import numpy as np

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python latency_sweep.py <data_file>")
        sys.exit(1)
        
    data_file = sys.argv[1]
    latencies = [0, 50, 100, 250, 500, 1000, 5000]
    
    df_res = run_sweep(data_file, latencies)
    print("\n--- Latency Sweep Results ---")
    print(df_res)
    
    # Plotting
    fig, ax1 = plt.subplots(figsize=(10, 6))
    
    color = 'tab:blue'
    ax1.set_xlabel('Latency (us)')
    ax1.set_ylabel('Mean PnL (bps)', color=color)
    ax1.plot(df_res['latency'], df_res['pnl_bps'], color=color, marker='o')
    ax1.tick_params(axis='y', labelcolor=color)
    
    ax2 = ax1.twinx()
    color = 'tab:red'
    ax2.set_ylabel('Fill Count', color=color)
    ax2.plot(df_res['latency'], df_res['fills'], color=color, marker='x', linestyle='--')
    ax2.tick_params(axis='y', labelcolor=color)
    
    plt.title('Impact of Latency on Alpha Performance')
    plt.grid(True)
    plt.savefig('latency_sweep.png')
    print("Saved plot to latency_sweep.png")
