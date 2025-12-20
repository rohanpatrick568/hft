import sys
import json
import argparse
import os
import uuid
import time

# State Files (Must match feed adapter)
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
    temp = filepath + ".tmp"
    with open(temp, 'w') as f:
        json.dump(data, f)
    os.replace(temp, filepath)

def place_order(symbol, side, qty, price=None, type="market"):
    orders = load_json(ORDERS_FILE, {})
    order_id = str(uuid.uuid4())
    
    orders[order_id] = {
        "symbol": symbol,
        "side": side.lower(),
        "qty": qty,
        "type": type,
        "limit_price": price,
        "status": "new"
    }
    
    save_json(ORDERS_FILE, orders)
    print(order_id) # Output ID for C++
    sys.stderr.write(f"[SimExec] Order placed: {order_id}\n")

def cancel_order(order_id):
    orders = load_json(ORDERS_FILE, {})
    if order_id in orders:
        del orders[order_id]
        save_json(ORDERS_FILE, orders)
        sys.stderr.write(f"[SimExec] Order cancelled: {order_id}\n")
    else:
        sys.stderr.write(f"[SimExec] Order not found: {order_id}\n")

def get_position(symbol):
    pos = load_json(POSITION_FILE, {"qty": 0})
    print(pos["qty"])

def get_fills(symbol):
    fills = load_json(FILLS_FILE, [])
    # Format: timestamp,orderId,price,quantity,is_buy,is_maker
    # We need to clear reported fills so we don't report them twice?
    # The C++ adapter polls. If we return all fills every time, C++ might duplicate.
    # But C++ PaperExchangeAdapter doesn't seem to track "seen" fills, it just logs them.
    # Wait, ExecutionSimulator in C++ handles this. PaperExchangeAdapter just returns what it gets.
    # If we return the same fill twice, C++ might process it twice.
    # Let's assume we should only return *new* fills.
    # We can move reported fills to a "history" file or just clear the list.
    
    if fills:
        for f in fills:
            print(f"{f['timestamp']},{f['orderId']},{f['price']},{f['quantity']},{f['is_buy']},{f['is_maker']}")
        
        # Clear fills after reporting
        save_json(FILLS_FILE, [])

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--action", required=True, choices=["place", "cancel", "position", "fills"])
    parser.add_argument("--symbol", required=True)
    parser.add_argument("--side", choices=["BUY", "SELL"])
    parser.add_argument("--quantity", type=float)
    parser.add_argument("--price", type=float)
    parser.add_argument("--order_id")
    parser.add_argument("--type", default="market", choices=["market", "limit"])
    parser.add_argument("--api_key") # Ignored
    parser.add_argument("--secret_key") # Ignored
    
    args = parser.parse_args()

    if args.action == "place":
        place_order(args.symbol, args.side, args.quantity, args.price, args.type)
    elif args.action == "cancel":
        cancel_order(args.order_id)
    elif args.action == "position":
        get_position(args.symbol)
    elif args.action == "fills":
        get_fills(args.symbol)

if __name__ == "__main__":
    main()
