import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import sys
import os

def analyze_regimes(log_file):
    print(f"Loading trade logs from {log_file}...")
    df = pd.read_csv(log_file)
    
    if 'regime' not in df.columns:
        print("Error: 'regime' column not found in logs. Please re-run the simulation with the updated engine.")
        return

    # Calculate Mark-to-Market PnL (using midprice_after_10)
    # For BUY: (Future - Fill) / Fill
    # For SELL: (Fill - Future) / Fill
    df['pnl_10'] = np.where(df['is_buy'], 
                            (df['midprice_after_10'] - df['fill_price']) / df['fill_price'],
                            (df['fill_price'] - df['midprice_after_10']) / df['fill_price'])
    
    # Convert to basis points
    df['pnl_10_bps'] = df['pnl_10'] * 10000

    # 1. Metrics per Regime
    print("\n--- Performance by Regime ---")
    regime_stats = df.groupby('regime')['pnl_10_bps'].agg(['count', 'mean', 'std'])
    regime_stats['sharpe'] = regime_stats['mean'] / regime_stats['std']
    print(regime_stats)

    # 2. Adverse Selection per Regime (Correlation of Alpha vs PnL)
    print("\n--- Adverse Selection (Alpha vs Future Return Correlation) ---")
    correlations = df.groupby('regime')[['alpha_at_fill', 'pnl_10_bps']].corr().iloc[0::2, -1]
    print(correlations)

    # 3. Heatmap: Regime x Alpha Decile -> Mean Return
    # Bin alpha into deciles
    df['alpha_decile'] = pd.qcut(df['alpha_at_fill'], 10, labels=False, duplicates='drop')
    
    heatmap_data = df.pivot_table(index='regime', columns='alpha_decile', values='pnl_10_bps', aggfunc='mean')
    
    plt.figure(figsize=(12, 6))
    sns.heatmap(heatmap_data, annot=True, cmap='RdYlGn', center=0, fmt=".1f")
    plt.title('Mean PnL (bps) by Regime and Alpha Decile')
    plt.xlabel('Alpha Decile (0=Low, 9=High)')
    plt.ylabel('Market Regime')
    plt.tight_layout()
    plt.savefig('regime_heatmap.png')
    print("\nSaved heatmap to regime_heatmap.png")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python regime_alpha_analysis.py <trade_log_file>")
        sys.exit(1)
    
    log_file = sys.argv[1]
    if not os.path.exists(log_file):
        print(f"File {log_file} not found.")
        sys.exit(1)
        
    analyze_regimes(log_file)
