import optuna
import subprocess
import os
import pandas as pd
import sys
import json

# Configuration
ENGINE_PATH = "build/src/Release/hft_engine.exe"
DATA_FILES = [
    "data/historical/AAPL_2025-12-19.csv",
    "data/historical/AAPL_2025-12-20.csv",
    "data/historical/AAPL_SimSession_1.csv",
    "data/historical/AAPL_SimSession_2.csv",
    "data/historical/AAPL_SimSession_3.csv"
]

def run_engine(data_file, params):
    cmd = [
        ENGINE_PATH,
        data_file,
        "--risk-aversion", str(params['risk_aversion']),
        "--half-spread", str(params['half_spread']),
        "--skew-factor", str(params['skew_factor']),
        "--max-inventory", str(params['max_inventory']),
        "--order-size", "0.01" # Fixed order size
    ]
    
    # Run engine and capture stdout
    try:
        result = subprocess.run(cmd, capture_output=True, text=True)
    except Exception as e:
        print(f"Error running engine: {e}")
        return -1000.0, 1000.0

    if result.returncode != 0:
        print(f"Engine failed on {data_file}")
        return -1000.0, 1000.0 # Penalty
        
    # Parse output
    # We expect CSV lines. We can parse the last line for equity.
    # Or we can parse all lines to find Max Drawdown.
    
    lines = result.stdout.strip().split('\n')
    csv_lines = [l for l in lines if l.startswith("TICK,")]
    
    if not csv_lines:
        return 0.0, 0.0
        
    # Parse CSV
    # Columns: type, timestamp, imbalance, spread, microprice, midprice, inventory, equity, ...
    # Index 7 is equity.
    
    equities = []
    for line in csv_lines:
        parts = line.split(',')
        if len(parts) > 7:
            try:
                equities.append(float(parts[7]))
            except:
                pass
                
    if not equities:
        return 0.0, 0.0
        
    final_pnl = equities[-1]
    max_dd = 0.0
    peak = -1e9
    
    for eq in equities:
        if eq > peak:
            peak = eq
        dd = peak - eq
        if dd > max_dd:
            max_dd = dd
            
    return final_pnl, max_dd

def objective(trial):
    params = {
        'risk_aversion': trial.suggest_float('risk_aversion', 0.01, 0.5),
        'half_spread': trial.suggest_float('half_spread', 0.01, 0.10),
        'skew_factor': trial.suggest_float('skew_factor', 0.1, 2.0),
        'max_inventory': trial.suggest_int('max_inventory', 10, 100)
    }
    
    total_pnl = 0.0
    max_dd_penalty = False
    
    total_dd = 0.0
    for data_file in DATA_FILES:
        pnl, dd = run_engine(data_file, params)
        total_pnl += pnl
        total_dd += dd
        
        if dd > 10.0:
            max_dd_penalty = True
            
    # Objective: Maximize PnL, Minimize Drawdown
    # If we violate the constraint, we penalize heavily but proportional to violation?
    # Or just return PnL - Drawdown?
    # The user wants "Survivor".
    
    score = total_pnl
    if max_dd_penalty:
        # Penalize by the amount of drawdown exceeding the limit
        # score -= (total_dd * 10.0) 
        # Let's just return -Drawdown to force it to minimize risk if it can't make money
        score = -total_dd
    
    return score
        
    return total_pnl

if __name__ == "__main__":
    optuna.logging.set_verbosity(optuna.logging.WARNING)
    study = optuna.create_study(direction="maximize")
    
    # Callback to print best params
    def print_best(study, trial):
        if trial.number % 10 == 0:
            print(f"Trial {trial.number}: Best Value: {study.best_value:.2f}, Best Params: {study.best_params}")
            
    print("Starting optimization with 150 trials...")
    study.optimize(objective, n_trials=150, callbacks=[print_best])
    
    print("Optimization Finished!")
    print("Best Params:", study.best_params)
    print("Best PnL:", study.best_value)
    
    with open("best_global_config.json", "w") as f:
        json.dump(study.best_params, f, indent=4)
