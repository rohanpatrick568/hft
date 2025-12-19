import pandas as pd
import numpy as np
import lightgbm as lgb
import treelite
import os
import shutil

# Configuration
LOG_FILE = "data/simulation_log_train.csv"
OUTPUT_DIR = "src/engine"
MODEL_FILE = "model_compiled.c"
HEADER_FILE = "model_compiled.h"

def train_and_compile():
    print("Loading data...")
    try:
        # Load data
        columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
                   'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
                   'arrival_rate', 'vpin', 'effective_spread']
        df = pd.read_csv(LOG_FILE, names=columns, on_bad_lines='skip')
        df = df[df['type'] == 'TICK'].copy()
        
        numeric_cols = ['imbalance', 'spread', 'microprice', 'midprice', 'arrival_rate', 'vpin', 'effective_spread']
        for col in numeric_cols:
            df[col] = pd.to_numeric(df[col], errors='coerce')
        df.dropna(inplace=True)
        
        # Create Target: Future Return (Next Tick)
        df['future_return'] = df['midprice'].shift(-1) - df['midprice']
        df.dropna(inplace=True)
        
        print("Target Stats:")
        print(df['future_return'].describe())

        # Clip target to avoid outliers
        df['future_return'] = df['future_return'].clip(-50, 50)

        # Features: Imbalance, Spread, Arrival Rate, VPIN, Effective Spread
        X = df[['imbalance', 'spread', 'arrival_rate', 'vpin', 'effective_spread']].values
        y = df['future_return'].values
        
        print(f"Training LightGBM on {len(df)} samples...")
        train_data = lgb.Dataset(X, label=y)
        params = {
            'objective': 'regression',
            'metric': 'rmse',
            'boosting_type': 'gbdt',
            'num_leaves': 31,
            'learning_rate': 0.01,
            'feature_fraction': 0.9,
            'bagging_fraction': 0.9,
            'verbose': 1
        }
        bst = lgb.train(params, train_data, num_boost_round=2000)
        
        print("Compiling model with Treelite...")
        model = treelite.Model.from_lightgbm(bst)
        # import treelite.frontend
        # model = treelite.frontend.from_lightgbm(bst)
        
        # Compile to C code
        # We use a temporary directory to generate the files
        temp_dir = "temp_treelite_build"
        if os.path.exists(temp_dir):
            shutil.rmtree(temp_dir)
        os.makedirs(temp_dir)
        
        # Generate C code
        # parallel_comp=0 disables OpenMP (simpler for standalone)
        # In Treelite 3.9.0, use compiler='ast_native' (default)
        model.compile(dirpath=temp_dir, params={'parallel_comp': 0}, verbose=True)
        
        # Treelite generates 'main.c' and 'header.h' (and others)
        # We need to move them to src/engine/ and rename main.c to model_compiled.c
        
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

if __name__ == "__main__":
    train_and_compile()
