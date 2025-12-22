import websocket
import json
import time
import sys
import threading

# Binance Futures Testnet
WS_URL = "wss://stream.testnet.binancefuture.com/ws"
SYMBOL = "btcusdt"

def on_message(ws, message):
    data = json.loads(message)
    # Event type 'a' is aggTrade
    if data.get('e') == 'aggTrade':
        # Extract fields
        # T: Transaction time (ms)
        # p: Price
        # q: Quantity
        # m: Is the buyer the market maker? (True -> Sell, False -> Buy)
        
        ts_ns = data['T'] * 1000000 # Convert ms to ns
        price = float(data['p'])
        size = float(data['q'])
        is_buyer_maker = data['m']
        
        # Map is_buyer_maker to is_buy (aggressor side)
        # If buyer is maker, then seller is aggressor -> Sell
        # If buyer is NOT maker, then buyer is aggressor -> Buy
        is_buy = not is_buyer_maker
        
        # Output format: TICK,timestamp_ns,price,size,is_buy
        # Flush stdout to ensure C++ receives it immediately
        print(f"TICK,{ts_ns},{price},{size},{1 if is_buy else 0}")
        sys.stdout.flush()

def on_error(ws, error):
    sys.stderr.write(f"Error: {error}\n")

def on_close(ws, close_status_code, close_msg):
    sys.stderr.write("### closed ###\n")

def on_open(ws):
    # Subscribe to aggTrade
    subscribe_msg = {
        "method": "SUBSCRIBE",
        "params": [
            f"{SYMBOL}@aggTrade"
        ],
        "id": 1
    }
    ws.send(json.dumps(subscribe_msg))
    sys.stderr.write(f"Subscribed to {SYMBOL}@aggTrade\n")

if __name__ == "__main__":
    # websocket.enableTrace(True)
    ws = websocket.WebSocketApp(WS_URL,
                              on_open=on_open,
                              on_message=on_message,
                              on_error=on_error,
                              on_close=on_close)

    ws.run_forever()
