import os
import sys
import pandas as pd
import numpy as np
import subprocess
import glob
import time
from datetime import datetime

# Configuration
DATA_DIR = "data"
HISTORICAL_DIR = os.path.join(DATA_DIR, "historical")
ENGINE_PATH = os.path.join("build", "src", "Release", "hft_engine.exe")
if not os.path.exists(ENGINE_PATH):
    ENGINE_PATH = os.path.join("build", "src", "hft_engine")

LATENCY_NS = 10_000_000 # 10ms in nanoseconds
LATENCY_US = 10_000 # 10ms in microseconds

def setup_historical_data():
    if not os.path.exists(HISTORICAL_DIR):
        os.makedirs(HISTORICAL_DIR)
    
    files = glob.glob(os.path.join(HISTORICAL_DIR, "*.csv"))
    if not files:
        print("[SETUP] No historical files found. Splitting alpaca_history.csv...")
        source_file = os.path.join(DATA_DIR, "alpaca_history.csv")
        if not os.path.exists(source_file):
            print(f"[ERROR] Source file {source_file} not found.")
            return False
            
        df = pd.read_csv(source_file)
        df['datetime'] = pd.to_datetime(df['timestamp'], unit='ns')
        df['date'] = df['datetime'].dt.date
        
        for date, group in df.groupby('date'):
            filename = f"AAPL_{date}.csv"
            filepath = os.path.join(HISTORICAL_DIR, filename)
            # Drop helper columns
            group.drop(columns=['datetime', 'date'], inplace=True)
            group.to_csv(filepath, index=False)
            print(f"Created {filepath} ({len(group)} rows)")
            
    return True

def calculate_features_python(df_snippet):
    """
    Replicates FeatureExtractor.cpp logic in Python.
    """
    features = []
    
    # State for OrderBook (Best Bid/Ask)
    current_best_bid = 0.0
    current_best_ask = 0.0
    
    # State for OFI
    prev_bid_price = 0.0
    prev_bid_qty = 0.0
    prev_ask_price = 0.0
    prev_ask_qty = 0.0
    
    ofi_window = 50
    ofi_buffer = [0.0] * ofi_window
    ofi_idx = 0
    ofi_rolling_sum = 0.0
    
    # We need to process row by row to match the stateful nature
    # This is slow but accurate for verification
    for index, row in df_snippet.iterrows():
        # Update OrderBook State
        row_bid = row.get('bid', 0.0)
        row_ask = row.get('ask', 0.0)
        
        # Assuming QUOTE updates replace the BBO?
        # Or is it a stream of updates?
        # Alpaca CSV usually has the current BBO in every quote row?
        # If 'ask' is 0, it means no ask? Or unchanged?
        # In the sample: 271.32, 0.0.
        # If it's a snapshot, then Ask is empty.
        # But C++ engine seems to have a valid midprice.
        # This implies C++ engine treats 0 as "unchanged" or "empty"?
        # OrderBook.h: setBid(price, qty).
        # If price is 0, does it clear?
        # Let's assume standard feed behavior: 0 means invalid/empty.
        # But if C++ has a price, it must have received it.
        # Maybe I should only update if > 0?
        if row_bid > 0: current_best_bid = row_bid
        if row_ask > 0: current_best_ask = row_ask
        
        bid_price = current_best_bid
        ask_price = current_best_ask
        
        # Mock sizes if missing, or check if they exist
        bid_size = row.get('bid_size', 100.0) # Default if missing?
        ask_size = row.get('ask_size', 100.0)
        
        # Feature Calculation
        midprice = (bid_price + ask_price) / 2.0 if (bid_price > 0 and ask_price > 0) else 0.0
        spread = ask_price - bid_price if (bid_price > 0 and ask_price > 0) else 0.0
        
        imbalance = 0.0
        if (bid_size + ask_size) > 0:
            imbalance = (bid_size - ask_size) / (bid_size + ask_size)
            
        # OFI Logic
        bid_contrib = 0.0
        if bid_price > prev_bid_price:
            bid_contrib = bid_size
        elif bid_price == prev_bid_price:
            bid_contrib = bid_size - prev_bid_qty
        else:
            bid_contrib = -prev_bid_qty
            
        ask_contrib = 0.0
        if ask_price < prev_ask_price:
            ask_contrib = ask_size
        elif ask_price == prev_ask_price:
            ask_contrib = ask_size - prev_ask_qty
        else:
            ask_contrib = -prev_ask_qty
            
        if prev_bid_price == 0: bid_contrib = 0
        if prev_ask_price == 0: ask_contrib = 0
        
        delta_ofi = bid_contrib - ask_contrib
        
        # Update Rolling
        ofi_rolling_sum -= ofi_buffer[ofi_idx]
        ofi_buffer[ofi_idx] = delta_ofi
        ofi_rolling_sum += delta_ofi
        ofi_idx = (ofi_idx + 1) % ofi_window
        
        # Update State
        prev_bid_price = bid_price
        prev_bid_qty = bid_size
        prev_ask_price = ask_price
        prev_ask_qty = ask_size
        
        features.append({
            'timestamp': row['timestamp'],
            'midprice': midprice,
            'spread': spread,
            'imbalance': imbalance,
            'ofi': ofi_rolling_sum
        })
        
    return pd.DataFrame(features)

def run_fidelity_audit(data_file):
    print(f"\n[AUDIT] Running Fidelity Audit on {data_file}...")
    
    trades_file = os.path.join(DATA_DIR, "trades_backtest.csv")
    feature_log = os.path.join(DATA_DIR, "feature_log_verify.csv")
    
    # 1. Run Engine
    cmd = [
        ENGINE_PATH,
        data_file,
        "--mode", "backtest",
        "--trade-logs", trades_file,
        "--latency", str(LATENCY_US),
        "--risk-aversion", "0.01" # Encourage trading
    ]
    
    print(f"[EXEC] {' '.join(cmd)}")
    with open(feature_log, "w") as f_out:
        subprocess.run(cmd, stdout=f_out, stderr=subprocess.PIPE, check=True)
        
    # 2. Latency Check
    print("[CHECK] Verifying Latency Constraints...")
    if not os.path.exists(trades_file):
        print("[ERROR] No trade log generated.")
        return
        
    df_trades = pd.read_csv(trades_file)
    if df_trades.empty:
        print("[WARNING] No trades executed. Cannot verify latency.")
    else:
        # Check: timestamp (Fill) > order_entry_time + LATENCY_NS
        # Note: timestamp is uint64 ns
        
        # Calculate actual latency
        df_trades['actual_latency'] = df_trades['timestamp'] - df_trades['order_entry_time']
        
        # Check violations
        violations = df_trades[df_trades['actual_latency'] < LATENCY_NS]
        
        if not violations.empty:
            print(f"[FAIL] Found {len(violations)} Causality Violations!")
            print(violations[['timestamp', 'order_entry_time', 'actual_latency']].head())
            print(f"Expected Latency: {LATENCY_NS} ns")
        else:
            print(f"[PASS] Zero Causality Violations found across {len(df_trades)} trades.")
            print(f"      Avg Latency: {df_trades['actual_latency'].mean() / 1e6:.2f} ms")
            print(f"      Min Latency: {df_trades['actual_latency'].min() / 1e6:.2f} ms")

    # 3. Feature Consistency Check
    print("\n[CHECK] Verifying Feature Consistency (First 5 mins)...")
    # Load C++ Features (from stdout log)
    # Format: TICK,timestamp,imbalance,spread,microprice,midprice,inventory,equity,r,vol,alpha,arr,vpin,eff,ofi
    try:
        df_cpp = pd.read_csv(feature_log, names=['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
                                                 'inventory', 'equity', 'r', 'vol', 'alpha', 'arr', 'vpin', 'eff', 'ofi'],
                             on_bad_lines='skip')
        df_cpp = df_cpp[df_cpp['type'] == 'TICK'].copy()
        df_cpp['timestamp'] = pd.to_numeric(df_cpp['timestamp'])
        
        # Load Python Source Data
        df_source = pd.read_csv(data_file)
        # Sort by timestamp to match C++ CSVFeed behavior
        df_source.sort_values('timestamp', inplace=True)
        
        # Limit to first 1000 ticks for speed
        df_source_snippet = df_source.head(1000)
        
        # Calculate Python Features
        df_py = calculate_features_python(df_source_snippet)
        
        # Deduplicate by timestamp (take last state per timestamp)
        df_cpp_last = df_cpp.groupby('timestamp').last().reset_index()
        df_py_last = df_py.groupby('timestamp').last().reset_index()
        
        merged = pd.merge(df_cpp_last, df_py_last, on='timestamp', suffixes=('_cpp', '_py'), how='inner')
        
        if merged.empty:
            print("[WARNING] Could not align timestamps between C++ and Python.")
        else:
            # Debug: Check alignment
            print("\n[DEBUG] Merged Data Sample (Last per TS):")
            print(merged[['timestamp', 'midprice_cpp', 'midprice_py', 'spread_cpp', 'spread_py']].head())
            
            # Compare Midprice (Sanity Check)
            mid_diff = (merged['midprice_cpp'] - merged['midprice_py']).abs().max()
            print(f"      Midprice Max Drift: {mid_diff:.6f}")
            
            # Compare Spread
            spread_diff = (merged['spread_cpp'] - merged['spread_py']).abs().max()
            print(f"      Spread Max Drift:   {spread_diff:.6f}")
            
            # Compare OFI
            # OFI might differ if we don't have sizes in CSV.
            ofi_diff = (merged['ofi_cpp'] - merged['ofi_py']).abs().max()
            print(f"      OFI Max Drift:      {ofi_diff:.6f}")
            
            if mid_diff < 0.0001 and spread_diff < 0.0001:
                print("[PASS] Feature Consistency Verified.")
            else:
                print("[FAIL] Feature Drift Detected.")
                
    except Exception as e:
        print(f"[ERROR] Feature check failed: {e}")

def main():
    if not setup_historical_data():
        return

    files = sorted(glob.glob(os.path.join(HISTORICAL_DIR, "*.csv")))
    print("\nAvailable Historical Data:")
    for i, f in enumerate(files):
        print(f"{i+1}. {os.path.basename(f)}")
        
    try:
        choice = int(input("\nSelect a date to verify (number): ")) - 1
        if 0 <= choice < len(files):
            run_fidelity_audit(files[choice])
        else:
            print("Invalid selection.")
    except ValueError:
        print("Invalid input.")

if __name__ == "__main__":
    main()
