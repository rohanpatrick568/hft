import subprocess
import threading
import time
import yaml
import os
import sys
import signal
import datetime
import requests
from collections import deque

import argparse

# Load Configuration
CONFIG_PATH = "config/lifecycle.yaml"

class LifecycleManager:
    def __init__(self, config_path, mode="live"):
        with open(config_path, 'r') as f:
            self.config = yaml.safe_load(f)
        
        self.mode = mode
        self.log_dir = self.config['system']['log_dir']
        if not os.path.exists(self.log_dir):
            os.makedirs(self.log_dir)
            
        self.feed_proc = None
        self.engine_proc = None
        self.running = True
        self.last_heartbeat = time.time()
        self.feed_retries = 0
        self.engine_retries = 0
        
        if self.mode == "live":
            self.api_key = os.environ.get(self.config['system']['api_key_env'])
            self.secret_key = os.environ.get(self.config['system']['secret_key_env'])
        else:
            self.api_key = "RESEARCH"
            self.secret_key = "RESEARCH"
            
        self.base_url = "https://paper-api.alpaca.markets"
        
        self.trade_timestamps = deque(maxlen=1000) # For rate limiting
        
        # Setup Signal Handling
        signal.signal(signal.SIGINT, self.shutdown)
        signal.signal(signal.SIGTERM, self.shutdown)

    def log(self, component, message, severity="INFO"):
        timestamp = datetime.datetime.now().isoformat()
        log_entry = f"[{timestamp}] [{severity}] [{component}] {message}"
        print(log_entry)
        with open(os.path.join(self.log_dir, "lifecycle.log"), "a") as f:
            f.write(log_entry + "\n")

    def start_market_feed(self):
        if self.mode == "live":
            cmd = self.config['processes']['market_feed']['command']
        else:
            cmd = self.config['processes']['research_feed']['command']
            
        self.log("FEED", f"Starting market feed ({self.mode}): {' '.join(cmd)}")
        
        # We pipe stdout so we can monitor it and pass it to engine
        self.feed_proc = subprocess.Popen(
            cmd,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            bufsize=1 # Line buffered
        )
        
        # Start monitoring thread
        t = threading.Thread(target=self.monitor_feed_output)
        t.daemon = True
        t.start()
        
        t_err = threading.Thread(target=self.log_stream, args=(self.feed_proc.stderr, "FEED_ERR"))
        t_err.daemon = True
        t_err.start()

    def start_engine(self):
        cmd = self.config['processes']['engine']['command'] + self.config['processes']['engine']['args']
        # Pass API keys to engine
        cmd.extend(["--api-key", self.api_key, "--secret-key", self.secret_key])
        
        self.log("ENGINE", f"Starting engine: {' '.join(cmd)}")
        
        self.engine_proc = subprocess.Popen(
            cmd,
            stdin=subprocess.PIPE, # We will write to this
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True,
            bufsize=1
        )
        
        t_out = threading.Thread(target=self.log_stream, args=(self.engine_proc.stdout, "ENGINE_OUT"))
        t_out.daemon = True
        t_out.start()
        
        t_err = threading.Thread(target=self.log_stream, args=(self.engine_proc.stderr, "ENGINE_ERR"))
        t_err.daemon = True
        t_err.start()

    def monitor_feed_output(self):
        """Reads feed stdout, logs heartbeat, and writes to engine stdin."""
        while self.running and self.feed_proc and self.feed_proc.poll() is None:
            line = self.feed_proc.stdout.readline()
            if not line:
                break
            
            self.last_heartbeat = time.time()
            
            # Pass to engine if alive
            if self.engine_proc and self.engine_proc.poll() is None:
                try:
                    self.engine_proc.stdin.write(line)
                    self.engine_proc.stdin.flush()
                except BrokenPipeError:
                    self.log("LIFECYCLE", "Engine pipe broken", "ERROR")
            
            # Optional: Log sample ticks to debug
            # if "TRADE" in line: self.log("FEED", line.strip(), "DEBUG")

    def log_stream(self, stream, component):
        """Reads a stream and logs it to file."""
        with open(os.path.join(self.log_dir, f"{component.lower()}.log"), "a") as f:
            for line in stream:
                if not self.running: break
                f.write(line)
                # Also print critical errors to console
                if "Error" in line or "Exception" in line:
                    self.log(component, line.strip(), "ERROR")

    def check_risk(self):
        """Queries Alpaca to enforce global risk limits."""
        if not self.config['risk']['enabled'] or self.mode == "research": return

        headers = {
            "APCA-API-KEY-ID": self.api_key,
            "APCA-API-SECRET-KEY": self.secret_key
        }
        
        try:
            # 1. Check Account (PnL)
            r = requests.get(f"{self.base_url}/v2/account", headers=headers)
            if r.status_code == 200:
                acct = r.json()
                equity = float(acct['equity'])
                last_equity = float(acct['last_equity'])
                daily_loss = last_equity - equity
                
                if daily_loss > self.config['risk']['max_daily_loss']:
                    self.log("RISK", f"Max daily loss exceeded: -${daily_loss:.2f}", "CRITICAL")
                    self.trigger_kill_switch("Max Daily Loss")

            # 2. Check Position Size
            symbol = self.config['system']['symbol']
            r = requests.get(f"{self.base_url}/v2/positions/{symbol}", headers=headers)
            if r.status_code == 200:
                pos = r.json()
                qty = abs(float(pos['qty']))
                if qty > self.config['risk']['max_position_size']:
                    self.log("RISK", f"Max position size exceeded: {qty}", "CRITICAL")
                    self.trigger_kill_switch("Max Position Size")
            elif r.status_code == 404:
                pass # No position
                
            # 3. Check Trade Rate (Orders in last minute)
            # This requires querying orders, which is heavy. 
            # Alternatively, we could count lines in execution log, but let's stick to API for truth.
            # Simplified: We skip this for now to avoid rate limits on the API itself.
            
        except Exception as e:
            self.log("RISK", f"Risk check failed: {e}", "WARNING")

    def trigger_kill_switch(self, reason):
        self.log("RISK", f"KILL SWITCH TRIGGERED: {reason}", "CRITICAL")
        self.shutdown(None, None)
        
        if self.config['risk']['emergency_flat_on_violation']:
            self.log("RISK", "Attempting emergency flatten...", "CRITICAL")
            headers = {
                "APCA-API-KEY-ID": self.api_key,
                "APCA-API-SECRET-KEY": self.secret_key
            }
            requests.delete(f"{self.base_url}/v2/positions", headers=headers)
            requests.delete(f"{self.base_url}/v2/orders", headers=headers)

    def run(self):
        self.start_market_feed()
        time.sleep(1) # Let feed warm up
        self.start_engine()
        
        while self.running:
            current_time = time.time()
            
            # 1. Check Feed Health
            if self.feed_proc.poll() is not None:
                self.log("LIFECYCLE", "Market feed died. Restarting...", "ERROR")
                self.start_market_feed()
                
            # 2. Check Engine Health
            if self.engine_proc.poll() is not None:
                self.log("LIFECYCLE", "Engine died. Restarting...", "ERROR")
                self.start_engine()
                
            # 3. Check Heartbeat
            if current_time - self.last_heartbeat > self.config['processes']['market_feed']['heartbeat_timeout']:
                self.log("LIFECYCLE", "Feed heartbeat timeout. Restarting feed...", "ERROR")
                self.kill_process(self.feed_proc)
                self.start_market_feed()
                self.last_heartbeat = time.time()
                
            # 4. Check Risk
            if int(current_time) % self.config['risk']['check_interval'] == 0:
                self.check_risk()
                
            time.sleep(1)

    def kill_process(self, proc):
        if proc and proc.poll() is None:
            proc.terminate()
            try:
                proc.wait(timeout=2)
            except subprocess.TimeoutExpired:
                proc.kill()

    def shutdown(self, signum, frame):
        self.log("LIFECYCLE", "Shutting down...", "INFO")
        self.running = False
        self.kill_process(self.engine_proc)
        self.kill_process(self.feed_proc)
        sys.exit(0)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("--mode", default="live", choices=["live", "research"])
    args = parser.parse_args()

    if args.mode == "live" and not os.environ.get("ALPACA_API_KEY"):
        print("Error: ALPACA_API_KEY not set")
        sys.exit(1)
        
    manager = LifecycleManager(CONFIG_PATH, mode=args.mode)
    manager.run()
