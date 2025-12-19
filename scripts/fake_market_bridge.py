import time
import random
import sys

def main():
    price = 42000.0
    while True:
        timestamp_ns = int(time.time() * 1e9)
        price += random.uniform(-10, 10)
        size = random.uniform(0.001, 0.1)
        is_buy = random.choice([0, 1])
        
        print(f"TICK,{timestamp_ns},{price:.2f},{size:.4f},{is_buy}")
        sys.stdout.flush()
        time.sleep(0.1)

if __name__ == "__main__":
    main()
