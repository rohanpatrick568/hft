import subprocess
import pandas as pd
import numpy as np
import os
import glob
import sys

# Configuration
DATA_DIR = "data"
HISTORICAL_DIR = os.path.join(DATA_DIR, "historical")
RESULTS_DIR = "results"
ENGINE_PATH = os.path.join("build", "src", "Release", "hft_engine.exe")
if not os.path.exists(ENGINE_PATH):
    ENGINE_PATH = os.path.join("build", "src", "hft_engine")

# Best Parameters from Optimization
BEST_PARAMS = {
    'risk_aversion': 0.006287481521609927,
    'half_spread': 0.14999639123919425,
    'skew_factor': 2.124392134683465,
    'window_size': 147
}

def get_validation_files():
    files = sorted(glob.glob(os.path.join(HISTORICAL_DIR, "*.csv")))
    if not files:
        print("No historical files found.")
        sys.exit(1)
        
    n_train = max(1, int(len(files) * 0.7))
    val_files = files[n_train:]
    
    if not val_files:
        print("Not enough files for validation. Using all files.")
        return files
        
    return val_files

def analyze_log(log_file):
    if not os.path.exists(log_file): return 0.0, 0.0
    
    try:
        df = pd.read_csv(log_file)
        if df.empty: return 0.0, 0.0
        
        ORDER_SIZE = 0.01
        if 'quantity' in df.columns:
             df['signed_qty'] = df.apply(lambda x: x['quantity'] if x['is_buy'] else -x['quantity'], axis=1)
        else:
             df['signed_qty'] = df['is_buy'].apply(lambda x: ORDER_SIZE if x else -ORDER_SIZE)
            
        df['cash_flow'] = -df['fill_price'] * df['signed_qty']
        df['cum_cash'] = df['cash_flow'].cumsum()
        df['inventory'] = df['signed_qty'].cumsum()
        
        price_col = 'fill_midprice' if 'fill_midprice' in df.columns else 'fill_price'
        df['equity'] = df['cum_cash'] + df['inventory'] * df[price_col]
        
        total_pnl = df['equity'].iloc[-1]
        
        df['peak'] = df['equity'].cummax()
        df['drawdown'] = df['peak'] - df['equity']
        max_dd = df['drawdown'].max()
        
        return total_pnl, max_dd
    except:
        return 0.0, 0.0

def main():
    print("=== Validating Best Model ===")
    print(f"Params: {BEST_PARAMS}")
    
    val_files = get_validation_files()
    print(f"Validation Files ({len(val_files)}):")
    for f in val_files: print(f" - {os.path.basename(f)}")
    
    total_pnl = 0.0
    
    for f in val_files:
        log_file = f"results/val_log_{os.path.basename(f)}"
        cmd = [
            ENGINE_PATH,
            f,
            "--mode", "backtest",
            "--trade-logs", log_file,
            "--risk-aversion", str(BEST_PARAMS['risk_aversion']),
            "--half-spread", str(BEST_PARAMS['half_spread']),
            "--skew-factor", str(BEST_PARAMS['skew_factor']),
            "--window-size", str(BEST_PARAMS['window_size']),
            "--latency", "10000000",
            "--order-size", "0.01"
        ]
        
        print(f"\nRunning {os.path.basename(f)}...")
        subprocess.run(cmd, check=True)
        
        pnl, dd = analyze_log(log_file)
        print(f"  PnL: ${pnl:.2f} | MaxDD: ${dd:.2f}")
        total_pnl += pnl
        
    print(f"\n=== Validation Complete ===")
    print(f"Total Validation PnL: ${total_pnl:.2f}")

if __name__ == "__main__":
    main()
