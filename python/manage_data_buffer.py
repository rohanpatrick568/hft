import pandas as pd
import os
import sys
import argparse

MASTER_FILE = "data/master_train.csv"
MAX_ROWS = 100000

def manage_buffer(new_log_file, master_file=MASTER_FILE, max_rows=MAX_ROWS):
    print(f"[BUFFER] Managing data buffer...")
    
    if not os.path.exists(new_log_file):
        print(f"[WARNING] New log file {new_log_file} not found. Skipping buffer update.")
        return

    # Read new logs
    try:
        # Assuming the log file has the same format as training_features.csv
        # Columns: type, timestamp, imbalance, spread, microprice, midprice, inventory, equity, reservation_price, volatility, alpha, arrival_rate, vpin, effective_spread, ofi
        # We might need to handle headers or lack thereof.
        # The engine output usually has TICK,... lines.
        
        # Let's assume the engine output is raw CSV lines starting with TICK
        # We'll read it with header=None and filter
        
        # Check if file is empty
        if os.stat(new_log_file).st_size == 0:
             print(f"[WARNING] New log file {new_log_file} is empty. Skipping.")
             return

        new_df = pd.read_csv(new_log_file, header=None, on_bad_lines='skip')
        
        # Filter for TICK rows (column 0)
        if not new_df.empty:
            new_df = new_df[new_df[0] == 'TICK']
        
        if new_df.empty:
            print(f"[WARNING] No TICK events found in {new_log_file}. Skipping.")
            return
            
        print(f"[BUFFER] Loaded {len(new_df)} new events.")
        
    except Exception as e:
        print(f"[ERROR] Failed to read new log file: {e}")
        return

    # Read master file
    master_df = pd.DataFrame()
    if os.path.exists(master_file):
        try:
            master_df = pd.read_csv(master_file, header=None, on_bad_lines='skip')
            print(f"[BUFFER] Loaded {len(master_df)} existing events from master.")
        except Exception as e:
            print(f"[ERROR] Failed to read master file: {e}")
            # Don't abort, just start fresh? Or abort to be safe?
            # If master is corrupt, maybe backup and start fresh.
            print("[ACTION] Starting fresh master buffer.")
            master_df = pd.DataFrame()

    # Concatenate
    combined_df = pd.concat([master_df, new_df], ignore_index=True)
    
    # Sort by timestamp (Column 1)
    # Ensure column 1 is numeric
    try:
        combined_df[1] = pd.to_numeric(combined_df[1], errors='coerce')
        combined_df = combined_df.dropna(subset=[1])
        combined_df = combined_df.sort_values(by=1)
    except Exception as e:
        print(f"[WARNING] Failed to sort by timestamp: {e}")

    # Truncate
    if len(combined_df) > max_rows:
        print(f"[BUFFER] Truncating buffer from {len(combined_df)} to {max_rows} rows.")
        combined_df = combined_df.tail(max_rows)
    
    # Save
    try:
        combined_df.to_csv(master_file, index=False, header=False)
        print(f"[BUFFER] Saved {len(combined_df)} events to {master_file}.")
    except Exception as e:
        print(f"[ERROR] Failed to save master file: {e}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Manage Data Buffer")
    parser.add_argument("--new-log", required=True, help="Path to new simulation log")
    parser.add_argument("--master-log", default=MASTER_FILE, help="Path to master training file")
    parser.add_argument("--max-rows", type=int, default=MAX_ROWS, help="Max rows to keep")
    
    args = parser.parse_args()
    
    manage_buffer(args.new_log, args.master_log, args.max_rows)
