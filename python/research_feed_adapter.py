import sys
import time
import pandas as pd
import json
import os

# State Files
STATE_FILE = "data/sim_state.json"
ORDERS_FILE = "data/sim_orders.json"
FILLS_FILE = "data/sim_fills.json"
POSITION_FILE = "data/sim_position.json"

def load_json(filepath, default):
    if not os.path.exists(filepath): return default
    for _ in range(10):
        try:
            with open(filepath, 'r') as f:
                return json.load(f)
        except (PermissionError, json.JSONDecodeError):
            time.sleep(0.001)
        except Exception:
            return default
    return default

def save_json(filepath, data):
    temp = filepath + ".tmp"
    for _ in range(10):
        try:
            with open(temp, 'w') as f:
                json.dump(data, f)
            os.replace(temp, filepath)
            return
        except PermissionError:
            time.sleep(0.001)
        except Exception:
            return

def match_orders(current_bid, current_ask, timestamp):
    orders = load_json(ORDERS_FILE, {})
    fills = load_json(FILLS_FILE, [])
    position = load_json(POSITION_FILE, {"qty": 0, "cash": 100000})
    dirty = False
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
            fill = {
                "timestamp": int(timestamp),
                "orderId": order_id,
                "price": fill_price,
                "quantity": order["qty"],
                "is_buy": 1 if order["side"] == "buy" else 0,
                "is_maker": 0 
            }
            fills.append(fill)
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
    
    current_bid = 0
    current_ask = 0
    last_timestamp = 0
    
    # Simulation Loop
    for _, row in df.iterrows():
        last_timestamp = row["timestamp"]
        
        # 1. Update Market State
        state = load_json(STATE_FILE, {})
        state["timestamp"] = row["timestamp"]
        
        if row["type"] == "QUOTE":
            state["bid"] = row["bid"]
            state["ask"] = row["ask"]
            current_bid = row["bid"]
            current_ask = row["ask"]
            # Output to Engine
            print(f"{int(row['timestamp'])},{row['symbol']},QUOTE,0,0,{row['bid']},{row['ask']}")
            sys.stdout.flush()
            
        elif row["type"] == "TRADE":
            # Output to Engine
            print(f"{int(row['timestamp'])},{row['symbol']},TRADE,{row['price']},{row['size']},0,0")
            sys.stdout.flush()
            
        save_json(STATE_FILE, state)
        
        # 2. Match Orders
        match_orders(current_bid, current_ask, row["timestamp"])
        
        # Slow down to let Engine catch up
        time.sleep(0.01)

    # Wait for remaining orders
    sys.stderr.write("Data finished. Waiting for remaining orders...\n")
    for _ in range(50): # Wait 5 seconds
        match_orders(current_bid, current_ask, last_timestamp)
        time.sleep(0.1)

if __name__ == "__main__":
    main()
