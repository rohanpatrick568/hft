import streamlit as st
import pandas as pd
import plotly.express as px
import plotly.graph_objects as go
import subprocess
import os
import sys
import json
import time
import threading
import signal

# Page Config
st.set_page_config(page_title="HFT Control Center", layout="wide", page_icon="🚀")

# --- Sidebar Configuration ---
st.sidebar.title("Control Panel 🎛️")

# Mode Selector
mode = st.sidebar.selectbox(
    "Operation Mode",
    ("Backtest", "Paper Trading", "Live Trading")
)

# Date Pickers (Only for Backtest)
if mode == "Backtest":
    st.sidebar.subheader("Backtest Period")
    start_date = st.sidebar.date_input("Start Date", pd.to_datetime("2023-01-01"))
    end_date = st.sidebar.date_input("End Date", pd.to_datetime("2023-01-07"))
    # Note: The current engine uses a single CSV file. 
    # We might need to filter the CSV or assume the user provides a file matching this range.
    # For now, we'll just pass the dates as args if supported, or ignore.
    # The prompt implies we should select dates, but our engine takes a file.
    # We'll assume the "Data File" is fixed or selected separately.
    data_file = st.sidebar.text_input("Data File", "data/alpaca_history.csv")

# Strategy Sliders
st.sidebar.subheader("Strategy Parameters")
risk_aversion = st.sidebar.slider("Risk Aversion", 0.01, 1.0, 0.1, 0.01)
half_spread = st.sidebar.slider("Half Spread", 0.01, 0.50, 0.05, 0.01)
skew_factor = st.sidebar.slider("Skew Factor", 0.0, 2.0, 1.0, 0.1)

# API Keys (for Paper/Live)
api_key = ""
secret_key = ""
if mode in ["Paper Trading", "Live Trading"]:
    st.sidebar.subheader("API Credentials")
    api_key = st.sidebar.text_input("API Key", type="password")
    secret_key = st.sidebar.text_input("Secret Key", type="password")

# Run Button
run_btn = st.sidebar.button("🚀 Run System")

# Stop Button
stop_btn = st.sidebar.button("🛑 Stop System")

# --- State Management ---
if 'process' not in st.session_state:
    st.session_state.process = None
if 'running' not in st.session_state:
    st.session_state.running = False

# --- Action Logic ---
if run_btn:
    if st.session_state.running:
        st.warning("System is already running!")
    else:
        # Save Config (Optional, as requested)
        config = {
            "risk_aversion": risk_aversion,
            "half_spread": half_spread,
            "skew_factor": skew_factor,
            "mode": mode
        }
        with open("config/gui_config.json", "w") as f:
            json.dump(config, f, indent=4)
        
        # Construct Command
        cmd = [sys.executable, "python/lifecycle_manager.py"]
        
        if mode == "Backtest":
            # Filter Data based on Date Range
            status_text = st.empty()
            status_text.info("Filtering data based on date range...")
            try:
                # Read CSV
                df_source = pd.read_csv(data_file)
                
                # Convert timestamp (ns) to datetime
                # Note: We assume the file is sorted, but we filter by value anyway
                temp_dates = pd.to_datetime(df_source['timestamp'], unit='ns')
                
                # Create filter mask
                ts_start = pd.Timestamp(start_date).tz_localize(None)
                ts_end = pd.Timestamp(end_date).tz_localize(None) + pd.Timedelta(days=1)
                
                mask = (temp_dates >= ts_start) & (temp_dates < ts_end)
                df_filtered = df_source[mask]
                
                if df_filtered.empty:
                    st.error(f"No data found between {start_date} and {end_date}.")
                    st.stop()
                
                filtered_file = "data/filtered_backtest.csv"
                df_filtered.to_csv(filtered_file, index=False)
                
                status_text.success(f"Data filtered: {len(df_filtered)} rows (from {len(df_source)}).")
                
                cmd.extend(["--mode", "backtest"])
                cmd.extend(["--data-file", filtered_file])
                
            except Exception as e:
                st.error(f"Error filtering data: {e}")
                st.stop()

        elif mode == "Paper Trading":
            cmd.extend(["--mode", "paper"])
        elif mode == "Live Trading":
            cmd.extend(["--mode", "live"])
            
        # Strategy Args
        cmd.extend(["--risk-aversion", str(risk_aversion)])
        cmd.extend(["--half-spread", str(half_spread)])
        cmd.extend(["--skew-factor", str(skew_factor)])
        
        # API Keys
        if mode != "Backtest":
            if not api_key or not secret_key:
                st.error("API Key and Secret Key are required!")
                st.stop()
            cmd.extend(["--api-key", api_key])
            cmd.extend(["--secret-key", secret_key])
            
        # Launch
        try:
            # We use Popen to run in background
            # We redirect stdout/stderr to files to read them in the GUI
            with open("logs/gui_stdout.log", "w") as out, open("logs/gui_stderr.log", "w") as err:
                proc = subprocess.Popen(cmd, stdout=out, stderr=err)
            
            st.session_state.process = proc
            st.session_state.running = True
            st.success(f"System launched! PID: {proc.pid}")
        except Exception as e:
            st.error(f"Failed to launch: {e}")

if stop_btn:
    if st.session_state.running and st.session_state.process:
        st.session_state.process.terminate()
        st.session_state.running = False
        st.session_state.process = None
        st.warning("System stopped.")
    else:
        st.info("System is not running.")

# --- Main Dashboard ---

st.title("HFT Research & Monitoring Dashboard")

# Tabs
tab1, tab2 = st.tabs(["Research / Backtest", "Live Monitoring"])

with tab1:
    st.header("Backtest Results")
    
    # Load Trade Log
    # In backtest mode, lifecycle_manager uses --trade-logs data/trade_log.csv (or validation_trades.csv?)
    # Let's assume data/trade_log.csv is the main output.
    log_file = "data/trade_log.csv"
    
    if os.path.exists(log_file):
        try:
            df = pd.read_csv(log_file)
            if not df.empty:
                # Metrics
                # Calculate PnL
                # Assuming 'fill_price' and 'midprice_after_10' or similar for PnL proxy?
                # Or maybe we have 'realized_pnl' if we track inventory?
                # Let's approximate PnL: (Exit - Entry) * Direction
                # We don't have exit price for every trade in the log unless we match them.
                # But we can use 'midprice_after_10' as a mark-to-market PnL proxy for short term.
                # Or better, if we have 'equity' in feature log?
                
                # Let's check feature log for Equity Curve
                feature_file = "data/feature_log.csv"
                if os.path.exists(feature_file):
                    # Feature log has no header usually if captured from stdout?
                    # Wait, lifecycle_manager captures stdout to feature_log.csv.
                    # The engine prints "TICK,..." lines.
                    # We need to parse it.
                    try:
                        # Read last 10000 lines to avoid huge load
                        # For backtest, we might want all.
                        df_feat = pd.read_csv(feature_file, names=['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
                                                                   'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
                                                                   'arrival_rate', 'vpin', 'effective_spread', 'ofi'],
                                              on_bad_lines='skip')
                        df_feat = df_feat[df_feat['type'] == 'TICK'].copy()
                        df_feat['timestamp'] = pd.to_numeric(df_feat['timestamp'], errors='coerce')
                        df_feat['equity'] = pd.to_numeric(df_feat['equity'], errors='coerce')
                        
                        # Convert timestamp to datetime for readability
                        df_feat['datetime'] = pd.to_datetime(df_feat['timestamp'], unit='ns')

                        if not df_feat.empty:
                            # Downsample for plotting to avoid browser crash
                            # Plotly struggles with > 10k points in the browser
                            max_points = 5000
                            if len(df_feat) > max_points:
                                step = len(df_feat) // max_points
                                df_plot = df_feat.iloc[::step]
                                st.caption(f"Displaying {len(df_plot)} downsampled points out of {len(df_feat)} total.")
                            else:
                                df_plot = df_feat

                            # Equity Curve
                            fig = px.line(df_plot, x='datetime', y='equity', title='Equity Curve')
                            st.plotly_chart(fig, width="stretch")
                            
                            # Metrics
                            total_return = df_feat['equity'].iloc[-1] - df_feat['equity'].iloc[0]
                            st.metric("Total Return", f"${total_return:.2f}")
                    except Exception as e:
                        st.error(f"Error parsing feature log: {e}")

                # Trade Log Table
                st.subheader("Trade Log")
                st.dataframe(df.tail(100))
                
                # Metrics Scorecard
                col1, col2, col3 = st.columns(3)
                col1.metric("Total Trades", len(df))
                # col2.metric("Sharpe Ratio", "N/A") # Need calculation
                # col3.metric("Max Drawdown", "N/A")
                
            else:
                st.info("Trade log is empty.")
        except Exception as e:
            st.error(f"Error reading trade log: {e}")
    else:
        st.info("No trade log found. Run a backtest to generate results.")

with tab2:
    st.header("Live System Monitor")
    
    # Heartbeat
    if st.session_state.running:
        if st.session_state.process.poll() is None:
            st.success("🟢 Engine Status: ONLINE")
        else:
            st.error("🔴 Engine Status: STOPPED (Exit Code: " + str(st.session_state.process.returncode) + ")")
            st.session_state.running = False
    else:
        st.warning("⚪ Engine Status: OFFLINE")
        
    # Live Logs
    st.subheader("Live Logs (Tail)")
    log_container = st.empty()
    
    # Inventory Gauge (Placeholder)
    # We need to read the latest state from feature_log.csv
    
    # Auto-refresh logic for logs
    if st.session_state.running:
        # Read last 10 lines of stderr log
        if os.path.exists("logs/gui_stderr.log"):
            with open("logs/gui_stderr.log", "r") as f:
                lines = f.readlines()
                last_lines = "".join(lines[-10:])
                log_container.code(last_lines)
        
        # Read latest inventory
        if os.path.exists("data/feature_log.csv"):
            try:
                # Read only the last few bytes/lines efficiently?
                # For now, just read tail using pandas with chunksize or similar?
                # Or just read the file if it's not too big.
                # In live mode, it grows.
                pass
            except:
                pass
        
        time.sleep(1) # Simple refresh rate
        st.rerun()

