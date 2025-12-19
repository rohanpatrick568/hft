import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import sys
import os

def analyze_adverse_selection(log_file):
    if not os.path.exists(log_file):
        print(f"File {log_file} not found.")
        return

    df = pd.read_csv(log_file)
    
    if df.empty:
        print("No trades found in log.")
        return

    # Calculate Returns (Basis Points)
    # For Buy: (Future - Fill) / Fill
    # For Sell: (Fill - Future) / Fill
    
    df['ret_5'] = (df['midprice_after_5'] - df['fill_midprice']) / df['fill_midprice'] * 10000
    df['ret_10'] = (df['midprice_after_10'] - df['fill_midprice']) / df['fill_midprice'] * 10000
    
    # Adjust for direction
    df['signed_ret_5'] = np.where(df['is_buy'], df['ret_5'], -df['ret_5'])
    df['signed_ret_10'] = np.where(df['is_buy'], df['ret_10'], -df['ret_10'])
    
    print(f"Total Trades: {len(df)}")
    print(f"Mean Post-Fill Return (5 events): {df['signed_ret_5'].mean():.4f} bps")
    print(f"Mean Post-Fill Return (10 events): {df['signed_ret_10'].mean():.4f} bps")
    
    # Binning
    df['alpha_bin'] = pd.cut(df['alpha_at_fill'], bins=5)
    df['ofi_bin'] = pd.qcut(df['ofi_at_fill'], q=5, duplicates='drop')
    
    # Heatmap: Alpha vs OFI -> Return 5
    pivot = df.pivot_table(index='alpha_bin', columns='ofi_bin', values='signed_ret_5', aggfunc='mean')
    
    plt.figure(figsize=(10, 8))
    sns.heatmap(pivot, annot=True, cmap='RdYlGn', center=0)
    plt.title('Mean Post-Fill Return (5 events) by Alpha & OFI')
    plt.xlabel('OFI Bin')
    plt.ylabel('Alpha Bin')
    plt.tight_layout()
    plt.savefig('adverse_selection_heatmap.png')
    print("Saved heatmap to adverse_selection_heatmap.png")

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python adverse_selection_analysis.py <trade_log.csv>")
    else:
        analyze_adverse_selection(sys.argv[1])
