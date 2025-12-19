import pandas as pd
import numpy as np
import lightgbm as lgb
import treelite
import os
import shutil
import itertools
from sklearn.model_selection import TimeSeriesSplit

# Configuration
LOG_FILE = "data/simulation_log_train.csv"
OUTPUT_DIR = "src/engine"
MODEL_FILE = "model_compiled.c"
HEADER_FILE = "model_compiled.h"

def load_data():
    print("Loading data...")
    try:
        columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
                   'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
                   'arrival_rate', 'vpin', 'effective_spread', 'ofi']
        df = pd.read_csv(LOG_FILE, names=columns, on_bad_lines='skip')
        df = df[df['type'] == 'TICK'].copy()
        
        numeric_cols = ['imbalance', 'spread', 'microprice', 'midprice', 'arrival_rate', 'vpin', 'effective_spread', 'ofi']
        for col in numeric_cols:
            df[col] = pd.to_numeric(df[col], errors='coerce')
        df.dropna(inplace=True)
        
        # Create Target: Spread-Adjusted Future Return
        # y = (mid_price[t + H] - mid_price[t]) / spread[t]
        H = 10 # Horizon in volume buckets
        
        df['future_mid'] = df['midprice'].shift(-H)
        df['future_return'] = (df['future_mid'] - df['midprice']) / df['spread']
        
        # Handle division by zero or NaN
        df.replace([np.inf, -np.inf], np.nan, inplace=True)
        df.dropna(inplace=True)
        
        # Clip target (e.g., +/- 5 spreads)
        df['future_return'] = df['future_return'].clip(-5, 5)
        
        # Feature Selection: [ofi, spread, microprice_deviation, volatility, inventory]
        df['microprice_deviation'] = df['microprice'] - df['midprice']
        
        X = df[['ofi', 'spread', 'microprice_deviation', 'volatility', 'inventory']].values
        y = df['future_return'].values
        
        return X, y
    except Exception as e:
        print(f"Error loading data: {e}")
        return None, None

def tune_hyperparameters(X, y):
    print("Tuning hyperparameters...")
    
    # Grid Search Space
    param_grid = {
        'num_leaves': [20, 31, 50],
        'learning_rate': [0.01, 0.05, 0.1],
        'feature_fraction': [0.8, 0.9, 1.0],
        'bagging_fraction': [0.8, 0.9, 1.0]
    }
    
    keys = param_grid.keys()
    combinations = list(itertools.product(*param_grid.values()))
    
    best_score = float('inf')
    best_params = {}
    
    # Time Series Split for Validation
    tscv = TimeSeriesSplit(n_splits=3)
    
    for combo in combinations:
        params = dict(zip(keys, combo))
        params['objective'] = 'regression'
        params['metric'] = 'rmse'
        params['boosting_type'] = 'gbdt'
        params['verbose'] = -1
        
        scores = []
        for train_index, val_index in tscv.split(X):
            X_train, X_val = X[train_index], X[val_index]
            y_train, y_val = y[train_index], y[val_index]
            
            train_data = lgb.Dataset(X_train, label=y_train)
            val_data = lgb.Dataset(X_val, label=y_val)
            
            bst = lgb.train(params, train_data, num_boost_round=100, valid_sets=[val_data], 
                            callbacks=[lgb.early_stopping(stopping_rounds=10, verbose=False)])
            
            # RMSE
            preds = bst.predict(X_val)
            rmse = np.sqrt(np.mean((y_val - preds) ** 2))
            scores.append(rmse)
            
        avg_score = np.mean(scores)
        print(f"Params: {params} -> RMSE: {avg_score:.4f}")
        
        if avg_score < best_score:
            best_score = avg_score
            best_params = params
            
    print(f"\nBest Params: {best_params}")
    print(f"Best RMSE: {best_score:.4f}")
    return best_params

def train_and_compile(best_params, X, y):
    print("Training final model with best parameters...")
    train_data = lgb.Dataset(X, label=y)
    bst = lgb.train(best_params, train_data, num_boost_round=1000)
    
    print("Compiling model with Treelite...")
    model = treelite.Model.from_lightgbm(bst)
    
    temp_dir = "temp_treelite_build"
    if os.path.exists(temp_dir):
        shutil.rmtree(temp_dir)
    os.makedirs(temp_dir)
    
    model.compile(dirpath=temp_dir, params={'parallel_comp': 0}, verbose=True)
    
    src_main = os.path.join(temp_dir, "main.c")
    src_header = os.path.join(temp_dir, "header.h")
    
    dst_main = os.path.join(OUTPUT_DIR, MODEL_FILE)
    dst_header = os.path.join(OUTPUT_DIR, HEADER_FILE)
    
    if os.path.exists(src_main):
        with open(src_main, 'r') as f:
            content = f.read()
        content = content.replace('#include "header.h"', f'#include "{HEADER_FILE}"')
        
        with open(dst_main, 'w') as f:
            f.write(content)
        
        if os.path.exists(src_header):
            shutil.copy(src_header, dst_header)
            
        shutil.rmtree(temp_dir)
        print("Compilation complete.")
    else:
        print("Error: Treelite did not generate main.c")

if __name__ == "__main__":
    X, y = load_data()
    if X is not None:
        best_params = tune_hyperparameters(X, y)
        train_and_compile(best_params, X, y)
