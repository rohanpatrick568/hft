import sys
import os
import json
import time
import argparse
import requests

# Configuration
API_KEY = os.environ.get("ALPACA_API_KEY")
SECRET_KEY = os.environ.get("ALPACA_SECRET_KEY")
BASE_URL = "https://paper-api.alpaca.markets"

HEADERS = {
    "APCA-API-KEY-ID": API_KEY,
    "APCA-API-SECRET-KEY": SECRET_KEY
}

def place_order(symbol, side, qty, price=None, type="market"):
    url = f"{BASE_URL}/v2/orders"
    data = {
        "symbol": symbol,
        "qty": qty,
        "side": side.lower(),
        "type": type,
        "time_in_force": "day"
    }
    if price and type == "limit":
        data["limit_price"] = price
        
    response = requests.post(url, json=data, headers=HEADERS)
    if response.status_code == 200:
        order = response.json()
        print(order["id"]) # Output Order ID
        sys.stderr.write(f"[Alpaca] Order placed: {order['id']}\n")
    else:
        sys.stderr.write(f"[Alpaca] Error placing order: {response.text}\n")

def cancel_order(order_id):
    url = f"{BASE_URL}/v2/orders/{order_id}"
    response = requests.delete(url, headers=HEADERS)
    if response.status_code == 204:
        sys.stderr.write(f"[Alpaca] Order cancelled: {order_id}\n")
    else:
        sys.stderr.write(f"[Alpaca] Error cancelling order: {response.text}\n")

def get_position(symbol):
    url = f"{BASE_URL}/v2/positions/{symbol}"
    response = requests.get(url, headers=HEADERS)
    if response.status_code == 200:
        pos = response.json()
        print(pos["qty"])
    elif response.status_code == 404:
        print("0")
    else:
        sys.stderr.write(f"[Alpaca] Error getting position: {response.text}\n")
        print("0")

def get_fills(symbol):
    # Get closed orders from the last minute
    # This is a simplified "fills" check. 
    # In a real HFT system, we'd listen to the trade updates websocket.
    url = f"{BASE_URL}/v2/orders"
    params = {
        "status": "closed",
        "limit": 10,
        "direction": "desc"
    }
    response = requests.get(url, params=params, headers=HEADERS)
    if response.status_code == 200:
        orders = response.json()
        for o in orders:
            if o["symbol"] == symbol and o["filled_qty"] != "0":
                # Format: timestamp,orderId,price,quantity,is_buy,is_maker
                # Alpaca doesn't easily give maker/taker info in this endpoint, assume taker for now
                is_buy = 1 if o["side"] == "buy" else 0
                ts = int(datetime.fromisoformat(o["filled_at"].replace("Z", "+00:00")).timestamp() * 1e9) if o["filled_at"] else 0
                print(f"{ts},{o['id']},{o['filled_avg_price']},{o['filled_qty']},{is_buy},0")
    else:
        sys.stderr.write(f"[Alpaca] Error getting fills: {response.text}\n")

from datetime import datetime

def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--action", required=True, choices=["place", "cancel", "position", "fills"])
    parser.add_argument("--symbol", required=True)
    parser.add_argument("--side", choices=["BUY", "SELL"])
    parser.add_argument("--quantity", type=float)
    parser.add_argument("--price", type=float)
    parser.add_argument("--order_id")
    parser.add_argument("--type", default="market", choices=["market", "limit"])
    parser.add_argument("--api_key")
    parser.add_argument("--secret_key")
    
    args = parser.parse_args()
    
    global API_KEY, SECRET_KEY, HEADERS
    if args.api_key: API_KEY = args.api_key
    if args.secret_key: SECRET_KEY = args.secret_key
    
    if not API_KEY or not SECRET_KEY:
        sys.stderr.write("Error: ALPACA_API_KEY and ALPACA_SECRET_KEY must be set.\n")
        return

    HEADERS = {
        "APCA-API-KEY-ID": API_KEY,
        "APCA-API-SECRET-KEY": SECRET_KEY
    }

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
