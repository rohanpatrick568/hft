import sys
import json
import time
import os
import websocket
import threading
from datetime import datetime

# Configuration
API_KEY = os.environ.get("ALPACA_API_KEY")
SECRET_KEY = os.environ.get("ALPACA_SECRET_KEY")
SYMBOL = os.environ.get("TARGET_SYMBOL", "AAPL")
DATA_URL = "wss://stream.data.alpaca.markets/v2/iex" # Free tier data

def on_message(ws, message):
    try:
        data = json.loads(message)
        for item in data:
            msg_type = item.get("T")
            
            if msg_type == "t": # Trade
                # Schema: timestamp_ns,symbol,event_type,price,size,bid,ask
                ts_ns = int(datetime.fromisoformat(item["t"].replace("Z", "+00:00")).timestamp() * 1e9)
                print(f"{ts_ns},{item['S']},TRADE,{item['p']},{item['s']},0,0")
                sys.stdout.flush()
                
            elif msg_type == "q": # Quote
                ts_ns = int(datetime.fromisoformat(item["t"].replace("Z", "+00:00")).timestamp() * 1e9)
                print(f"{ts_ns},{item['S']},QUOTE,0,0,{item['bp']},{item['ap']}")
                sys.stdout.flush()
                
            elif msg_type == "error":
                sys.stderr.write(f"Error: {item['msg']}\n")
                
            elif msg_type == "subscription":
                sys.stderr.write(f"Subscribed: {item}\n")
                
    except Exception as e:
        sys.stderr.write(f"Parse error: {e}\n")

def on_error(ws, error):
    sys.stderr.write(f"WebSocket Error: {error}\n")

def on_close(ws, close_status_code, close_msg):
    sys.stderr.write("WebSocket Closed\n")

def on_open(ws):
    sys.stderr.write("Connected to Alpaca Stream\n")
    
    # Authenticate
    auth_data = {
        "action": "auth",
        "key": API_KEY,
        "secret": SECRET_KEY
    }
    ws.send(json.dumps(auth_data))
    
    # Subscribe
    sub_data = {
        "action": "subscribe",
        "trades": [SYMBOL],
        "quotes": [SYMBOL]
    }
    ws.send(json.dumps(sub_data))

if __name__ == "__main__":
    if not API_KEY or not SECRET_KEY:
        sys.stderr.write("Error: ALPACA_API_KEY and ALPACA_SECRET_KEY must be set.\n")
        sys.exit(1)
        
    # websocket.enableTrace(True)
    ws = websocket.WebSocketApp(DATA_URL,
                              on_open=on_open,
                              on_message=on_message,
                              on_error=on_error,
                              on_close=on_close)
    
    while True:
        try:
            ws.run_forever()
            time.sleep(5) # Reconnect delay
        except KeyboardInterrupt:
            break
        except Exception as e:
            sys.stderr.write(f"Connection failed: {e}\n")
            time.sleep(5)
