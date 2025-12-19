import requests
import time
import hmac
import hashlib
import sys
import argparse
import json
from urllib.parse import urlencode

# Binance Futures Testnet
BASE_URL = "https://testnet.binancefuture.com"

def get_timestamp():
    return int(time.time() * 1000)

def sign(params, secret_key):
    query_string = urlencode(params)
    signature = hmac.new(secret_key.encode('utf-8'), query_string.encode('utf-8'), hashlib.sha256).hexdigest()
    return signature

def send_request(method, endpoint, params, api_key, secret_key):
    params['timestamp'] = get_timestamp()
    params['signature'] = sign(params, secret_key)
    
    headers = {
        'X-MBX-APIKEY': api_key
    }
    
    url = f"{BASE_URL}{endpoint}"
    
    try:
        if method == 'GET':
            response = requests.get(url, headers=headers, params=params)
        elif method == 'POST':
            response = requests.post(url, headers=headers, params=params)
        elif method == 'DELETE':
            response = requests.delete(url, headers=headers, params=params)
            
        if response.status_code >= 400:
            sys.stderr.write(f"Error: {response.text}\n")
            return None
            
        return response.json()
            
    except Exception as e:
        sys.stderr.write(f"Exception: {e}\n")
        return None

def main():
    parser = argparse.ArgumentParser(description='Binance Order Manager')
    parser.add_argument('--action', required=True, choices=['place', 'cancel', 'position', 'fills'])
    parser.add_argument('--symbol', required=True)
    parser.add_argument('--side', choices=['BUY', 'SELL'])
    parser.add_argument('--quantity', type=float)
    parser.add_argument('--price', type=float)
    parser.add_argument('--order_id')
    parser.add_argument('--api_key', required=True)
    parser.add_argument('--secret_key', required=True)
    
    args = parser.parse_args()
    
    params = {'symbol': args.symbol}
    
    if args.action == 'place':
        params['side'] = args.side
        params['type'] = 'LIMIT'
        params['timeInForce'] = 'GTC'
        params['quantity'] = args.quantity
        params['price'] = args.price
        res = send_request('POST', '/fapi/v1/order', params, args.api_key, args.secret_key)
        if res:
            print(json.dumps(res))
        
    elif args.action == 'cancel':
        if args.order_id:
            params['orderId'] = args.order_id
        res = send_request('DELETE', '/fapi/v1/order', params, args.api_key, args.secret_key)
        if res:
            print(json.dumps(res))
        
    elif args.action == 'position':
        res = send_request('GET', '/fapi/v2/positionRisk', params, args.api_key, args.secret_key)
        if res:
            # Find symbol position
            for pos in res:
                if pos['symbol'] == args.symbol:
                    print(pos['positionAmt'])
                    break

    elif args.action == 'fills':
        # Get recent user trades
        res = send_request('GET', '/fapi/v1/userTrades', params, args.api_key, args.secret_key)
        if res:
            # Output CSV: id,price,qty,side,commission
            for trade in res:
                # trade: { "id": ..., "price": "...", "qty": "...", "side": "BUY", ... }
                print(f"{trade['id']},{trade['price']},{trade['qty']},{trade['side']},{trade['commission']}")

if __name__ == "__main__":
    main()
