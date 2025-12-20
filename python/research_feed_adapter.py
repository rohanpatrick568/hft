import sys
import time
import pandas as pd
import json
import os
import fcntl  # For file locking on Linux, but we are on Windows. 
# On Windows, we might need a different locking mechanism or just hope for the best for this prototype.
# Since it's a single writer (feed) and single reader (execution adapter mostly reads, writes orders), 
# we will use a simple .lock file approach or just atomic writes.

# State Files
STATE_FILE = "data/sim_state.json"
ORDERS_FILE = "data/sim_orders.json"
FILLS_FILE = "data/sim_fills.json"
POSITION_FILE = "data/sim_position.json"

def load_json(filepath, default):
    if not os.path.exists(filepath): return default
    try:
        with open(filepath, 'r') as f:
            return json.load(f)
    except:
        return default

def save_json(filepath, data):
    # Atomic write
    temp = filepath + ".tmp"
    with open(temp, 'w') as f:
        json.dump(data, f)
    os.replace(temp, filepath)

def main():
    # Initialize State
    save_json(STATE_FILE, {"timestamp": 0, "bid": 0, "ask": 0})
    save_json(ORDERS_FILE, {})
    save_json(FILLS_FILE, [])
    save_json(POSITION_FILE, {"qty": 0, "cash": 100000})
    
    # Load Data
    data_path = "data/research_data.csv"
    if len(sys.argv) > 1:
        data_path = sys.argv[1]
        
    if not os.path.exists(data_path):
        sys.stderr.write(f"Error: {data_path} not found\n")
        return

    df = pd.read_csv(data_path)
    
    # Simulation Loop
    for _, row in df.iterrows():
        # 1. Update Market State
        state = load_json(STATE_FILE, {})
        state["timestamp"] = row["timestamp"]
        
        if row["type"] == "QUOTE":
            state["bid"] = row["bid"]
            state["ask"] = row["ask"]
            # Output to Engine
            print(f"{int(row['timestamp'])},{row['symbol']},QUOTE,0,0,{row['bid']},{row['ask']}")
            sys.stdout.flush()
            
        elif row["type"] == "TRADE":
            # Output to Engine
            print(f"{int(row['timestamp'])},{row['symbol']},TRADE,{row['price']},{row['size']},0,0")
            sys.stdout.flush()
            
        save_json(STATE_FILE, state)
        
        # 2. Match Orders (Simple Matching Engine)
        orders = load_json(ORDERS_FILE, {})
        fills = load_json(FILLS_FILE, [])
        position = load_json(POSITION_FILE, {"qty": 0, "cash": 100000})
        
        dirty = False
        
        # Check Limit Orders
        # If we have a trade at price P, we fill orders that are marketable
        # Or if we have a quote, we check if orders cross it.
        # For simplicity, we fill if price crosses limit.
        
        current_bid = state.get("bid", 0)
        current_ask = state.get("ask", 0)
        
        to_remove = []
        
        for order_id, order in orders.items():
            filled = False
            fill_price = 0
            
            if order["type"] == "market":
                filled = True
                fill_price = current_ask if order["side"] == "buy" else current_bid
                
            elif order["type"] == "limit":
                if order["side"] == "buy" and current_ask <= order["limit_price"] and current_ask > 0:
                    filled = True
                    fill_price = current_ask
                elif order["side"] == "sell" and current_bid >= order["limit_price"] and current_bid > 0:
                    filled = True
                    fill_price = current_bid
            
            if filled:
                # Generate Fill
                fill = {
                    "timestamp": int(row["timestamp"]),
                    "orderId": order_id,
                    "price": fill_price,
                    "quantity": order["qty"],
                    "is_buy": 1 if order["side"] == "buy" else 0,
                    "is_maker": 0 # Simplified
                }
                fills.append(fill)
                
                # Update Position
                qty_delta = order["qty"] if order["side"] == "buy" else -order["qty"]
                position["qty"] += qty_delta
                position["cash"] -= qty_delta * fill_price
                
                to_remove.append(order_id)
                dirty = True
                
        for oid in to_remove:
            del orders[oid]
            
        if dirty:
            save_json(ORDERS_FILE, orders)
            save_json(FILLS_FILE, fills)
            save_json(POSITION_FILE, position)
            
        # Speed Control (Accelerated)
        time.sleep(0.01) # 100x speed roughly if data is 1s apart

if __name__ == "__main__":
    main()
