import pandas as pd
import numpy as np
import lightgbm as lgb
import treelite
import os
import shutil
import argparse

# Configuration
DEFAULT_LOG_FILE = "data/training_features.csv"
OUTPUT_DIR = "src/engine"
MODEL_FILE = "model_compiled.c"
HEADER_FILE = "model_compiled.h"

def train_and_compile(data_file=None):
    log_file = data_file if data_file else DEFAULT_LOG_FILE
    print(f"Loading data from {log_file}...")
    try:
        if not os.path.exists(log_file):
            print(f"Error: {log_file} not found. Please run the engine on real data to generate features first.")
            return

        # Columns matching DecisionEngine.cpp output
        columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
                   'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
                   'arrival_rate', 'vpin', 'effective_spread', 'ofi']
        
        # Read CSV, skipping bad lines (like "Loaded X events")
        df = pd.read_csv(log_file, names=columns, on_bad_lines='skip')
        
        # Filter only TICK rows
        df = df[df['type'] == 'TICK'].copy()
        
        numeric_cols = ['imbalance', 'spread', 'microprice', 'midprice', 'arrival_rate', 'vpin', 'effective_spread', 'ofi']
        for col in numeric_cols:
            df[col] = pd.to_numeric(df[col], errors='coerce')
        df.dropna(inplace=True)
        
        # Create Target: Future Return (Next Tick)
        # We want to predict the price move.
        df['future_return'] = df['midprice'].shift(-1) - df['midprice']
        df.dropna(inplace=True)
        
        print("Target Stats:")
        print(df['future_return'].describe())

        # Features: Imbalance, Spread, Arrival Rate, VPIN, Effective Spread, OFI
        X = df[['imbalance', 'spread', 'arrival_rate', 'vpin', 'effective_spread', 'ofi']].values
        y = df['future_return'].values
        
        print(f"Training LightGBM on {len(df)} samples...")
        train_data = lgb.Dataset(X, label=y)
        params = {
            'objective': 'regression',
            'metric': 'rmse',
            'boosting_type': 'gbdt',
            'num_leaves': 31,
            'learning_rate': 0.05,
            'feature_fraction': 0.9,
            'bagging_fraction': 0.8,
            'bagging_freq': 5,
            'verbose': -1
        }
        bst = lgb.train(params, train_data, num_boost_round=100)
        
        print("Compiling model with Treelite...")
        model = treelite.Model.from_lightgbm(bst)
        
        # Compile to C code
        # We use a temporary directory to generate the files
        temp_dir = "temp_treelite_build"
        if os.path.exists(temp_dir):
            shutil.rmtree(temp_dir)
        os.makedirs(temp_dir)
        
        # Generate C code
        model.compile(dirpath=temp_dir, params={'parallel_comp': 0}, verbose=True)
        
        src_main = os.path.join(temp_dir, "main.c")
        src_header = os.path.join(temp_dir, "header.h")
        
        dst_main = os.path.join(OUTPUT_DIR, MODEL_FILE)
        dst_header = os.path.join(OUTPUT_DIR, HEADER_FILE)
        
        if os.path.exists(src_main):
            # Read content and fix includes if necessary
            with open(src_main, 'r') as f:
                content = f.read()
            
            # Replace include "header.h" with "model_compiled.h"
            content = content.replace('#include "header.h"', f'#include "{HEADER_FILE}"')
            
            # Write to destination
            with open(dst_main, 'w') as f:
                f.write(content)
            print(f"Generated {dst_main}")
            
            # Handle Header
            if os.path.exists(src_header):
                shutil.copy(src_header, dst_header)
                print(f"Generated {dst_header}")
            
            # Clean up
            shutil.rmtree(temp_dir)
            print("Compilation complete.")
            
        else:
            print("Error: Treelite did not generate main.c")
            
    except Exception as e:
        print(f"Error: {e}")
        import traceback
        traceback.print_exc()

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Train HFT Model")
    parser.add_argument("--data", help="Path to training data CSV")
    args = parser.parse_args()
    
    train_and_compile(args.data)
