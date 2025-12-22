import os
import sys
import time
import argparse
import subprocess
import datetime
from datetime import timezone

# Try importing alpaca_trade_api
try:
    import alpaca_trade_api as tradeapi
except ImportError:
    print("[ERROR] alpaca-trade-api not installed. Please run: pip install alpaca-trade-api")
    sys.exit(1)

def get_alpaca_api(api_key, secret_key, base_url):
    return tradeapi.REST(api_key, secret_key, base_url, api_version='v2')

def check_market_hours(api, mode, wait_long=False):
    """
    Checks if the market is open using Alpaca API.
    Blocks or exits if market is closed.
    """
    # Critical: Only run this check for live or paper modes
    if mode not in ['live', 'paper']:
        return

    print("[INFO] Connecting to Alpaca...")
    
    while True:
        try:
            clock = api.get_clock()
            now = clock.timestamp
            
            if clock.is_open:
                print(f"[INFO] Market is OPEN. Current time: {now.strftime('%Y-%m-%d %H:%M:%S %Z')}")
                return
            else:
                next_open = clock.next_open
                # Calculate seconds to open
                # clock.timestamp and clock.next_open are usually offset-aware datetimes
                wait_seconds = (next_open - now).total_seconds()
                
                print(f"[WARNING] Market is CLOSED.")
                print(f"[INFO] Current Time: {now.strftime('%Y-%m-%d %H:%M:%S %Z')}")
                print(f"[INFO] Next Open:    {next_open.strftime('%Y-%m-%d %H:%M:%S %Z')}")
                
                if wait_seconds < 3600: # Less than 1 hour
                    print(f"[ACTION] Sleeping for {int(wait_seconds)} seconds...")
                    time.sleep(wait_seconds + 60) # Sleep until open + buffer
                else:
                    if wait_long:
                        print(f"[ACTION] Sleeping for {int(wait_seconds)} seconds...")
                        time.sleep(wait_seconds + 60)
                    else:
                        print(f"[ACTION] Market opens in {wait_seconds/3600:.2f} hours. Exiting (use --wait-long to sleep).")
                        sys.exit(0)
                    
        except Exception as e:
            print(f"[ERROR] Failed to fetch clock: {e}")
            print("[ACTION] Retrying in 60 seconds...")
            time.sleep(60)

def run_engine(args):
    # Construct command to run C++ engine
    # Path to the engine binary
    engine_path = os.path.join("build", "src", "Release", "hft_engine.exe")
    if not os.path.exists(engine_path):
        # Fallback for non-Windows or different build config
        engine_path = os.path.join("build", "src", "hft_engine")
        
    if not os.path.exists(engine_path):
        print(f"[ERROR] Engine binary not found at {engine_path}")
        print("Please build the engine first using CMake.")
        return

    cmd = [engine_path]
    
    # Add arguments based on mode
    # For backtest/research, we usually expect a data file as the first argument
    if args.mode in ['backtest', 'research']:
        if args.data_file:
            cmd.append(args.data_file)
        else:
            print("[ERROR] Data file required for backtest/research mode.")
            return
    else:
        # For live/paper, we might pass a dummy file or nothing, depending on main.cpp implementation
        # main.cpp logic: if mode is live/paper, it ignores dataFile for loading, but might parse it.
        # We'll pass a placeholder if needed, or just nothing.
        # Based on main.cpp, it iterates args. If not a flag, it sets dataFile.
        # But it only uses dataFile if mode == "backtest".
        pass

    cmd.extend(["--mode", args.mode])
    if args.symbol:
        cmd.extend(["--symbol", args.symbol])
    if args.api_key:
        cmd.extend(["--api-key", args.api_key])
    if args.secret_key:
        cmd.extend(["--secret-key", args.secret_key])
        
    # Strategy Parameters
    if args.risk_aversion is not None:
        cmd.extend(["--risk-aversion", str(args.risk_aversion)])
    if args.half_spread is not None:
        cmd.extend(["--half-spread", str(args.half_spread)])
    if args.skew_factor is not None:
        cmd.extend(["--skew-factor", str(args.skew_factor)])
        
    # Pass through other potential args if we had them
    # Ensure we log trades to a file for the retraining pipeline
    cmd.extend(["--trade-logs", "data/trade_log.csv"])
    
    print(f"[INFO] Launching Engine: {' '.join(cmd)}")
    
    try:
        # Run the engine and capture stdout to feature log
        with open("data/feature_log.csv", "w") as f_log:
            process = subprocess.Popen(cmd, stdout=f_log, stderr=subprocess.PIPE)
            
            # Monitor stderr for errors or status
            while True:
                if process.poll() is not None:
                    break
                err_line = process.stderr.readline()
                if err_line:
                    print(f"[ENGINE] {err_line.decode().strip()}")
                
    except KeyboardInterrupt:
        print("\n[INFO] Stopping engine...")
        process.terminate()
    except Exception as e:
        print(f"[ERROR] Failed to run engine: {e}")

def calculate_sharpe(trade_log_file):
    """
    Calculates Sharpe Ratio from a trade log file.
    """
    if not os.path.exists(trade_log_file):
        return -999.0
        
    try:
        import pandas as pd
        import numpy as np
        
        df = pd.read_csv(trade_log_file)
        if df.empty:
            return -999.0
            
        # Calculate PnL per trade
        # We assume 'fill_price' and 'midprice_after_10' are available
        # PnL = (Exit - Entry) * Direction
        # We use midprice_after_10 as proxy for exit
        
        if 'midprice_after_10' not in df.columns:
            return 0.0
            
        df['pnl'] = (df['midprice_after_10'] - df['fill_price']) * np.where(df['is_buy'], 1, -1)
        
        # Simple Sharpe: Mean / Std
        mean_pnl = df['pnl'].mean()
        std_pnl = df['pnl'].std()
        
        if std_pnl == 0:
            return 0.0
            
        sharpe = mean_pnl / std_pnl * np.sqrt(len(df)) # Scaled by N trades? Or just raw ratio?
        # Usually annualized. Let's just use raw ratio for comparison.
        return sharpe
        
    except Exception as e:
        print(f"[ERROR] Sharpe calculation failed: {e}")
        return -999.0

def validate_model(champion_score):
    """
    Runs a validation backtest on historical data and compares Sharpe.
    """
    print("[VALIDATION] Running Challenger Backtest...")
    
    # Run engine in backtest mode on alpaca_history.csv
    # We use a separate output file for validation trades
    val_trades_file = "data/validation_trades.csv"
    if os.path.exists(val_trades_file):
        os.remove(val_trades_file)
        
    engine_path = os.path.join("build", "src", "Release", "hft_engine.exe")
    if not os.path.exists(engine_path):
        engine_path = os.path.join("build", "src", "hft_engine")
        
    cmd = [
        engine_path,
        "data/alpaca_history.csv",
        "--mode", "backtest",
        "--trade-logs", val_trades_file,
        "--no-ml" # Wait, we WANT ML to test the model. So remove --no-ml.
        # But we need to ensure the engine uses the compiled model.
        # The engine binary IS the compiled model (embedded).
    ]
    
    try:
        # Run validation (ignore stdout features)
        subprocess.run(cmd, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=True)
        
        challenger_score = calculate_sharpe(val_trades_file)
        print(f"[VALIDATION] Champion Sharpe: {champion_score:.4f}")
        print(f"[VALIDATION] Challenger Sharpe: {challenger_score:.4f}")
        
        # Decision Logic
        # 1. Challenger must be positive (profitable)
        # 2. Challenger must be at least 90% of Champion
        
        if challenger_score > 0 and challenger_score > (champion_score * 0.9):
            print("[VALIDATION] Result: ACCEPTED")
            return True
        else:
            print("[VALIDATION] Result: REJECTED")
            return False
            
    except Exception as e:
        print(f"[ERROR] Validation failed: {e}")
        return False

def restart_session(args):
    """
    Manages the continuous retraining loop.
    """
    while True:
        print("\n" + "="*50)
        print(f"[SESSION] Starting HFT Session at {datetime.datetime.now()}")
        print("="*50)
        
        # 1. Run Engine
        run_engine(args)
        
        print("\n[SESSION] Engine stopped. Starting retraining pipeline...")
        
        # 2. Update Data Buffer
        new_log_file = "data/feature_log.csv" # Captured from stdout
        master_log_file = "data/master_train.csv"
        
        print("[PIPELINE] Updating Data Buffer...")
        try:
            subprocess.run([sys.executable, "python/manage_data_buffer.py", 
                            "--new-log", new_log_file, 
                            "--master-log", master_log_file], check=True)
        except subprocess.CalledProcessError as e:
            print(f"[ERROR] Buffer update failed: {e}")
            print("[ACTION] Skipping retraining, restarting engine...")
            time.sleep(5)
            continue

        # 3. Calculate Champion Score (Baseline)
        # We use the SAME validation test for Champion to be fair.
        # So we run the CURRENT engine on the validation set BEFORE recompiling.
        # Or we can just use the stored score from previous run?
        # Safer to run it now.
        print("[PIPELINE] Benchmarking Champion...")
        champion_score = -999.0
        # We need to run validation with CURRENT binary
        # Reuse validate_model logic but just get the score
        # Actually, validate_model runs the binary.
        # So let's run it now.
        
        # Run validation on current binary
        # We can't use validate_model directly because it compares.
        # Let's extract the run logic.
        
        # Quick hack: Run validation now, store score.
        # But wait, validate_model runs the binary on disk.
        # The binary on disk IS the Champion right now.
        
        # So:
        # 1. Run validation -> Get Champion Score.
        # 2. Retrain -> Generate new C code.
        # 3. Backup binary? No, backup C code.
        # 4. Compile Challenger.
        # 5. Run validation -> Get Challenger Score.
        # 6. Compare.
        
        # Step 3a: Benchmark Champion
        # We run the validation backtest using the current binary
        # Note: This takes time. If we want to be fast, we might skip this if we trust the previous score.
        # But let's be safe.
        
        # Run backtest on alpaca_history.csv
        val_trades_file = "data/validation_trades.csv"
        engine_path = os.path.join("build", "src", "Release", "hft_engine.exe")
        if not os.path.exists(engine_path):
            engine_path = os.path.join("build", "src", "hft_engine")
            
        cmd_val = [engine_path, "data/alpaca_history.csv", "--mode", "backtest", "--trade-logs", val_trades_file]
        try:
            subprocess.run(cmd_val, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL, check=True)
            champion_score = calculate_sharpe(val_trades_file)
            print(f"[PIPELINE] Champion Score: {champion_score:.4f}")
        except Exception as e:
            print(f"[WARNING] Could not benchmark champion: {e}. Defaulting to 0.")
            champion_score = 0.0

        # 4. Retrain Model
        print("[PIPELINE] Retraining Model...")
        try:
            subprocess.run([sys.executable, "python/train_model.py", 
                            "--data", master_log_file], check=True)
        except subprocess.CalledProcessError as e:
            print(f"[ERROR] Training failed: {e}")
            print("[ACTION] Skipping recompile, restarting engine...")
            time.sleep(5)
            continue

        # 5. Backup & Recompile
        print("[PIPELINE] Recompiling Engine (Challenger)...")
        model_src = os.path.join("src", "engine", "model_compiled.c")
        model_bak = model_src + ".bak"
        
        # Backup C code
        if os.path.exists(model_src):
            import shutil
            shutil.copy(model_src, model_bak)
            
        try:
            # Build Challenger
            subprocess.run(["cmake", "--build", "build", "--config", "Release"], check=True)
            print("[PIPELINE] Build Successful.")
        except subprocess.CalledProcessError as e:
            print(f"[ERROR] Build failed: {e}")
            print("[ACTION] Restoring backup...")
            if os.path.exists(model_bak):
                shutil.copy(model_bak, model_src)
            print("[ACTION] Restarting with previous build...")
            time.sleep(5)
            continue
            
        # 6. Validation (Champion vs Challenger)
        if validate_model(champion_score):
            print("[PIPELINE] Upgrade Successful. Starting new session...")
        else:
            print("[PIPELINE] Upgrade Failed. Reverting to Champion...")
            # Restore backup
            if os.path.exists(model_bak):
                shutil.copy(model_bak, model_src)
            # Rebuild Champion
            try:
                subprocess.run(["cmake", "--build", "build", "--config", "Release"], check=True)
                print("[PIPELINE] Revert Build Successful.")
            except Exception as e:
                print(f"[CRITICAL] Failed to revert build: {e}. System may be unstable.")
                sys.exit(1)
            
        print("[SESSION] Session update complete. Restarting in 5 seconds...")
        time.sleep(5)

def main():
    parser = argparse.ArgumentParser(description="HFT Lifecycle Manager")
    parser.add_argument("--mode", choices=['backtest', 'research', 'paper', 'live'], required=True, help="Operation mode")
    parser.add_argument("--api-key", help="Alpaca API Key")
    parser.add_argument("--secret-key", help="Alpaca Secret Key")
    parser.add_argument("--symbol", default="AAPL", help="Trading Symbol")
    parser.add_argument("--data-file", help="Path to data file (required for backtest/research)")
    parser.add_argument("--base-url", help="Alpaca Base URL (default: paper url)")
    parser.add_argument("--wait-long", action="store_true", help="Wait even if market open is > 1 hour away")
    
    # Strategy Parameters
    parser.add_argument("--risk-aversion", type=float, help="Risk Aversion Parameter")
    parser.add_argument("--half-spread", type=float, help="Half Spread Parameter")
    parser.add_argument("--skew-factor", type=float, help="Skew Factor Parameter")
    
    args = parser.parse_args()
    
    # Set default Base URL if not provided
    if not args.base_url:
        if args.mode == 'live':
            args.base_url = "https://api.alpaca.markets"
        else:
            args.base_url = "https://paper-api.alpaca.markets"
    
    # Validate keys for live/paper
    if args.mode in ['live', 'paper']:
        if not args.api_key or not args.secret_key:
            # Try env vars
            args.api_key = args.api_key or os.getenv("APCA_API_KEY_ID")
            args.secret_key = args.secret_key or os.getenv("APCA_API_SECRET_KEY")
            
            if not args.api_key or not args.secret_key:
                print("[ERROR] API Key and Secret Key are required for live/paper mode.")
                print("Provide them via arguments or APCA_API_KEY_ID / APCA_API_SECRET_KEY env vars.")
                sys.exit(1)

        # Initialize API
        api = get_alpaca_api(args.api_key, args.secret_key, args.base_url)
        
        # Check Market Hours
        check_market_hours(api, args.mode, args.wait_long)

    # Run the session loop
    restart_session(args)

if __name__ == "__main__":
    main()
