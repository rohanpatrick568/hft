import pandas as pd
import numpy as np
import random
import time

def generate_research_data(filename="data/research_data.csv", n_rows=5000):
    print(f"Generating {n_rows} rows of research data to {filename}...")
    
    data = []
    midprice = 150.0
    start_time = int(time.time() * 1e9)
    
    for i in range(n_rows):
        timestamp = start_time + i * 100000000 # 100ms steps
        
        # Random walk
        midprice += np.random.normal(0, 0.02)
        spread = 0.02
        bid = midprice - spread/2
        ask = midprice + spread/2
        
        # Quote event
        data.append([timestamp, "AAPL", "QUOTE", 0, 0, round(bid, 2), round(ask, 2)])
        
        # Trade event (30% chance)
        if random.random() < 0.3:
            side = "buy" if random.random() > 0.5 else "sell"
            price = ask if side == "buy" else bid
            size = random.randint(1, 100)
            # For trade, we put price in price column
            data.append([timestamp + 1000, "AAPL", "TRADE", round(price, 2), size, 0, 0])
            
    df = pd.DataFrame(data, columns=["timestamp", "symbol", "type", "price", "size", "bid", "ask"])
    df.to_csv(filename, index=False)
    print("Done.")

if __name__ == "__main__":
    generate_research_data()
