import subprocess
import sys
import os
import time
import json
import pandas as pd
import matplotlib.pyplot as plt

def run_research():
    print("Starting Research Backtest...")
    
    # Clean previous state
    for f in ["data/sim_state.json", "data/sim_orders.json", "data/sim_fills.json", "data/sim_position.json", "data/sim_fills_history.json"]:
        if os.path.exists(f):
            os.remove(f)
            
    # Run Lifecycle Manager in Research Mode
    cmd = ["python", "scripts/lifecycle_manager.py", "--mode", "research"]
    
    # Pass through any command line arguments
    if len(sys.argv) > 1:
        cmd.append("--")
        cmd.extend(sys.argv[1:])
    
    try:
        # We run it and wait for it to finish (it won't finish automatically unless feed finishes)
        # research_feed_adapter.py finishes after reading CSV.
        # But LifecycleManager restarts engine/feed if they die?
        # In research mode, restart_on_failure is false for feed.
        # So when feed dies, LifecycleManager should probably exit or we kill it.
        
        proc = subprocess.Popen(cmd)
        
        # Wait for completion (or timeout)
        # Since we don't have a clear "done" signal from LifecycleManager yet, 
        # we can monitor the feed process or just wait.
        # Ideally LifecycleManager should exit when feed is done in research mode.
        # But currently it loops.
        
        # Hack: Wait for a bit, or monitor logs.
        # Better: research_feed_adapter.py is the driver. When it exits, the pipe closes.
        # Engine might exit or hang.
        # Let's just run for a fixed time or until we see "Done" in logs?
        # For now, let's just wait 10 seconds (our data is small/fast).
        
        print("Running simulation...")
        
        # Wait for completion with timeout
        try:
            proc.wait(timeout=60) # Adjust timeout as needed for data size
        except subprocess.TimeoutExpired:
            print("Simulation timed out. Terminating...")
            proc.terminate()
            try:
                proc.wait(timeout=5)
            except:
                proc.kill()
        
        print("Simulation finished.")
            
        analyze_results()
        
    except KeyboardInterrupt:
        proc.terminate()

def analyze_results():
    print("Analyzing Results...")
    
    fills_file = "data/sim_fills_history.json"
    if not os.path.exists(fills_file):
        fills_file = "data/sim_fills.json"

    if not os.path.exists(fills_file):
        print("No fills generated.")
        return

    try:
        with open(fills_file, 'r') as f:
            fills = json.load(f)
            
        if not fills:
            print("No fills found.")
            # return # Continue to check position
            
        df_fills = pd.DataFrame(fills)
        if not df_fills.empty:
            print(f"Total Trades: {len(df_fills)}")
            print(df_fills)
            df_fills.to_csv("results/research_trades.csv", index=False)
            
        # Load Position History? We don't track it history-wise in file, only current.
        # But we can reconstruct from fills.
        
    except Exception as e:
        print(f"Analysis error: {e}")

if __name__ == "__main__":
    if not os.path.exists("results"):
        os.makedirs("results")
    run_research()
