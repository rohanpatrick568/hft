import pandas as pd
import numpy as np
import random

# Columns expected by train_model.py:
# ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
#  'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
#  'arrival_rate', 'vpin', 'effective_spread']

def generate_data(n_rows=10000):
    data = []
    midprice = 150.0
    
    for i in range(n_rows):
        # Random walk for price
        midprice += np.random.normal(0, 0.05)
        
        # Features
        imbalance = random.random() # 0 to 1
        spread = 0.01 + random.random() * 0.02 # 0.01 to 0.03 (Stock-like)
        microprice = midprice + (imbalance - 0.5) * spread
        inventory = random.randint(-100, 100)
        equity = 100000.0
        reservation_price = midprice - inventory * 0.001
        volatility = 0.001 + random.random() * 0.005
        alpha = 0.0
        arrival_rate = random.random() * 10
        vpin = random.random()
        effective_spread = spread * 0.8
        
        row = [
            'TICK',
            int(i * 1e9), # timestamp
            imbalance,
            spread,
            microprice,
            midprice,
            inventory,
            equity,
            reservation_price,
            volatility,
            alpha,
            arrival_rate,
            vpin,
            effective_spread
        ]
        data.append(row)
        
    df = pd.DataFrame(data, columns=['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
                   'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
                   'arrival_rate', 'vpin', 'effective_spread'])
    
    # Save
    df.to_csv('data/aapl_training_data.csv', index=False, header=False)
    print("Generated data/aapl_training_data.csv")

if __name__ == "__main__":
    generate_data()
