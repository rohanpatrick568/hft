import pandas as pd
import matplotlib.pyplot as plt
import sys
import io

def parse_log(log_file):
    data = []
    with open(log_file, 'r') as f:
        for line in f:
            if line.startswith("TICK,"):
                parts = line.strip().split(',')
                # TICK,timestamp,imbalance,spread,microprice,midprice,inventory,equity
                if len(parts) >= 8:
                    data.append({
                        'timestamp': int(parts[1]),
                        'imbalance': float(parts[2]),
                        'spread': float(parts[3]),
                        'microprice': float(parts[4]),
                        'midprice': float(parts[5]),
                        'inventory': float(parts[6]),
                        'equity': float(parts[7])
                    })
    return pd.DataFrame(data)

def plot_dashboard(df):
    if df.empty:
        print("No data to plot.")
        return

    # Convert timestamp to datetime (assuming ns or ms)
    # Binance timestamps are ms.
    df['time'] = pd.to_datetime(df['timestamp'], unit='ns')
    
    fig, axes = plt.subplots(3, 1, figsize=(12, 10), sharex=True)
    
    # Price & Microprice
    axes[0].plot(df['time'], df['midprice'], label='Mid Price', color='black', alpha=0.7)
    axes[0].plot(df['time'], df['microprice'], label='Micro Price', color='blue', alpha=0.5)
    axes[0].set_title('Price Dynamics')
    axes[0].legend()
    axes[0].grid(True)
    
    # Inventory
    axes[1].plot(df['time'], df['inventory'], label='Inventory', color='orange')
    axes[1].set_title('Inventory Position')
    axes[1].set_ylabel('BTC')
    axes[1].grid(True)
    
    # PnL (Equity)
    axes[2].plot(df['time'], df['equity'], label='Total Equity (PnL)', color='green')
    axes[2].set_title('Strategy Performance (PnL)')
    axes[2].set_ylabel('USDT')
    axes[2].grid(True)
    
    plt.tight_layout()
    plt.show()

if __name__ == "__main__":
    if len(sys.argv) > 1:
        log_file = sys.argv[1]
        df = parse_log(log_file)
        plot_dashboard(df)
    else:
        print("Usage: python dashboard.py <log_file>")
