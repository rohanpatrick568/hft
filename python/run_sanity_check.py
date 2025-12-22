import subprocess
import os
import sys

# Define paths
ROOT_DIR = os.path.abspath(os.path.join(os.path.dirname(__file__), '..'))
ENGINE_PATH = os.path.join(ROOT_DIR, "build", "src", "Release", "hft_engine.exe")
DATA_DIR = os.path.join(ROOT_DIR, "data", "historical")
RESULTS_DIR = os.path.join(ROOT_DIR, "results")

# Ensure results directory exists
os.makedirs(RESULTS_DIR, exist_ok=True)

def run_sanity_check():
    # Get list of validation files (last 30%)
    files = sorted([f for f in os.listdir(DATA_DIR) if f.endswith(".csv")])
    if not files:
        print("No data files found.")
        return

    # Use one file for sanity check
    test_file = files[-1]
    file_path = os.path.join(DATA_DIR, test_file)
    
    print(f"Running sanity check on {test_file}...")

    # Reasonable Parameters (Market Making at the touch)
    params = {
        "risk_aversion": 0.1,
        "half_spread": 0.0, # Dynamic (spread / 2)
        "skew_factor": 1.0,
        "window_size": 100,
        "order_size": 0.01,
        "latency": 10000 # 10ms
    }

    cmd = [
        ENGINE_PATH,
        file_path,
        "--latency", str(params["latency"]),
        "--risk-aversion", str(params["risk_aversion"]),
        "--half-spread", str(params["half_spread"]),
        "--skew-factor", str(params["skew_factor"]),
        "--window-size", str(params["window_size"]),
        "--order-size", str(params["order_size"]),
        "--no-ml", # Disable ML to test engine mechanics only
        "--trade-logs", os.path.join(RESULTS_DIR, "sanity_log.csv")
    ]

    print(f"Command: {' '.join(cmd)}")
    
    with open(os.path.join(RESULTS_DIR, "sanity_stdout.log"), "w") as outfile:
        try:
            result = subprocess.run(cmd, stdout=outfile, stderr=subprocess.STDOUT, text=True, check=True)
            print("Engine finished. Output saved to results/sanity_stdout.log")
            
        except subprocess.CalledProcessError as e:
            print(f"Error running engine: {e}")

    # Calculate PnL
    try:
        import pandas as pd
        df = pd.read_csv(os.path.join(RESULTS_DIR, "sanity_log.csv"))
        if not df.empty:
            # Map is_buy to sign: 1 for Buy, -1 for Sell
            df['signed_qty'] = df['is_buy'].apply(lambda x: 1 if x else -1)
            # Cash flow: Outflow for buy (-), Inflow for sell (+)
            df['cash_flow'] = -df['fill_price'] * df['signed_qty']
            
            total_cash = df['cash_flow'].sum()
            net_inventory = df['signed_qty'].sum()
            final_mid = df['fill_midprice'].iloc[-1]
            inventory_value = net_inventory * final_mid
            total_pnl = total_cash + inventory_value
            
            # Adjust for order size (0.01)
            adjusted_pnl = total_pnl * params["order_size"]
            
            print("\n--- Sanity Check Results ---")
            print(f"Total Trades: {len(df)}")
            print(f"Net Inventory (Units): {net_inventory * params['order_size']:.4f}")
            print(f"Total PnL: ${adjusted_pnl:.2f}")
            
            if adjusted_pnl > -10.0:
                print("Sanity Check PASSED: Engine is behaving reasonably.")
            else:
                print("Sanity Check FAILED: Significant loss detected.")
        else:
            print("Sanity Check FAILED: No trades executed.")
            
    except Exception as e:
        print(f"Error calculating PnL: {e}")

if __name__ == "__main__":
    run_sanity_check()
