import subprocess
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import os

# Configuration
ORDER_SIZES = [1.0, 10.0, 50.0, 100.0, 500.0, 1000.0]
IMPACT_COEFFS = [0.0, 1e-6, 5e-6, 1e-5]  # 0, 1bps/10k, 5bps/10k, 1bps/1k approx
ENGINE_PATH = "c:/Users/patri/Desktop/hft/build/src/Release/hft_engine.exe"
DATA_FILE = "c:/Users/patri/Desktop/hft/data/test_data.csv"
OUTPUT_LOG = "trade_log.csv"

results = []

print(f"Starting Capacity Sweep...")
print(f"Order Sizes: {ORDER_SIZES}")
print(f"Impact Coeffs: {IMPACT_COEFFS}")

for impact in IMPACT_COEFFS:
    for size in ORDER_SIZES:
        print(f"Running: Size={size}, Impact={impact}")
        
        cmd = [
            ENGINE_PATH,
            DATA_FILE,
            "--trade-logs", OUTPUT_LOG,
            "--latency", "100", # Base latency
            "--order-size", str(size),
            "--impact-coeff", str(impact)
        ]
        
        try:
            subprocess.run(cmd, check=True, stdout=subprocess.DEVNULL)
            
            # Analyze results
            df = pd.read_csv(OUTPUT_LOG)
            
            if df.empty:
                print("  No trades executed.")
                results.append({
                    "order_size": size,
                    "impact_coeff": impact,
                    "total_pnl": 0,
                    "sharpe": 0,
                    "trade_count": 0
                })
                continue

            # Calculate PnL (bps)
            # PnL = (Sell Price - Buy Price) / MidPrice * 10000
            # Adjusted for direction: (FillPrice - MidPrice) * Direction is instantaneous alpha
            # But we want realized PnL. 
            # Let's use the simple mark-to-market at horizon (midprice_after_10)
            # PnL = (MidPrice_10 - FillPrice) * Direction * 10000 / FillPrice
            # Minus impact cost which is already baked into FillPrice in the engine?
            # Wait, the engine logs 'impact_cost'. 
            # Let's calculate PnL as:
            # Raw PnL = (MidPrice_10 - OriginalPrice) * Direction
            # Cost = ImpactCost
            # Net PnL = Raw PnL - Cost
            
            # Actually, let's stick to the standard definition used in previous scripts:
            # (MidPrice_Future - FillPrice) * Direction
            # The FillPrice in the log ALREADY includes impact (effective price).
            # So (MidPrice_10 - FillPrice) * Direction correctly captures the cost.
            
            df['pnl_bps'] = (df['midprice_after_10'] - df['fill_price']) * (df['is_buy'].map({1: 1, 0: -1}))
            df['pnl_bps'] = df['pnl_bps'] / df['fill_price'] * 10000
            
            total_pnl = df['pnl_bps'].sum() * size # Scale by size for total $ proxy
            avg_pnl = df['pnl_bps'].mean()
            std_pnl = df['pnl_bps'].std()
            sharpe = (avg_pnl / std_pnl) * np.sqrt(len(df)) if std_pnl > 0 else 0
            
            print(f"  PnL: {total_pnl:.2f}, Sharpe: {sharpe:.2f}")
            
            results.append({
                "order_size": size,
                "impact_coeff": impact,
                "total_pnl": total_pnl,
                "sharpe": sharpe,
                "trade_count": len(df)
            })
            
        except Exception as e:
            print(f"  Error: {e}")

# Convert to DataFrame
res_df = pd.DataFrame(results)
print("\nResults Summary:")
print(res_df)

# Plotting
plt.figure(figsize=(12, 6))

for impact in IMPACT_COEFFS:
    subset = res_df[res_df['impact_coeff'] == impact]
    plt.plot(subset['order_size'], subset['total_pnl'], marker='o', label=f'Impact={impact}')

plt.title('Strategy Capacity Curve: PnL vs Order Size')
plt.xlabel('Order Size')
plt.ylabel('Total PnL (bps * size)')
plt.axhline(0, color='black', linestyle='--', alpha=0.5)
plt.legend()
plt.grid(True)
plt.savefig('capacity_curve.png')
print("Saved capacity_curve.png")

# Plot Sharpe
plt.figure(figsize=(12, 6))
for impact in IMPACT_COEFFS:
    subset = res_df[res_df['impact_coeff'] == impact]
    plt.plot(subset['order_size'], subset['sharpe'], marker='o', label=f'Impact={impact}')

plt.title('Strategy Stability: Sharpe vs Order Size')
plt.xlabel('Order Size')
plt.ylabel('Sharpe Ratio')
plt.axhline(0, color='black', linestyle='--', alpha=0.5)
plt.legend()
plt.grid(True)
plt.savefig('capacity_sharpe.png')
print("Saved capacity_sharpe.png")
