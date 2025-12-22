"""
Global Performance Visualization Suite
Aggregates results from all test days and generates interactive Plotly charts.
"""

import subprocess
import os
import json
import pandas as pd
import numpy as np
import plotly.graph_objects as go
from plotly.subplots import make_subplots

import argparse

# Configuration
ENGINE_PATH = "build/src/Release/hft_engine.exe"
if not os.path.exists(ENGINE_PATH):
    ENGINE_PATH = "build/src/hft_engine"

CONFIG_FILE = "config/best_global_config.json"
RESULTS_DIR = "results"

DATA_FILES = {
    "2025-12-19 (Day 1)": "data/historical/AAPL_2025-12-19.csv",
    "2025-12-20 (Day 2)": "data/historical/AAPL_2025-12-20.csv",
    "SimSession 1": "data/historical/AAPL_SimSession_1.csv",
    "SimSession 2": "data/historical/AAPL_SimSession_2.csv",
    "SimSession 3": "data/historical/AAPL_SimSession_3.csv",
}

# Color palette for days
DAY_COLORS = {
    "2025-12-19 (Day 1)": "#2ecc71",  # Green
    "2025-12-20 (Day 2)": "#3498db",  # Blue
    "SimSession 1": "#e74c3c",         # Red
    "SimSession 2": "#9b59b6",         # Purple
    "SimSession 3": "#f39c12",         # Orange
}

def load_config():
    """Load the best configuration."""
    with open(CONFIG_FILE, "r") as f:
        return json.load(f)

def run_backtest(data_file, config, output_file):
    """Run engine on a single day and save output."""
    cmd = [
        ENGINE_PATH,
        data_file,
        "--risk-aversion", str(config.get('risk_aversion', 0.1)),
        "--half-spread", str(config.get('half_spread', 0.05)),
        "--skew-factor", str(config.get('skew_factor', 1.0)),
        "--max-inventory", str(config.get('max_inventory', 100)),
        "--order-size", "0.01"
    ]
    
    with open(output_file, 'w') as f:
        result = subprocess.run(cmd, stdout=f, stderr=subprocess.PIPE, text=True)
    
    return result.returncode == 0

def parse_output(output_file):
    """Parse engine output into DataFrame."""
    columns = ['type', 'timestamp', 'imbalance', 'spread', 'microprice', 'midprice', 
               'inventory', 'equity', 'reservation_price', 'volatility', 'alpha',
               'arrival_rate', 'vpin', 'effective_spread', 'ofi']
    
    try:
        df = pd.read_csv(output_file, names=columns, on_bad_lines='skip')
        df = df[df['type'] == 'TICK'].copy()
        
        for col in ['equity', 'inventory', 'midprice', 'timestamp']:
            df[col] = pd.to_numeric(df[col], errors='coerce')
        
        df.dropna(subset=['equity', 'inventory'], inplace=True)
        df.reset_index(drop=True, inplace=True)
        
        return df
    except Exception as e:
        print(f"Error parsing {output_file}: {e}")
        return pd.DataFrame()

def calculate_metrics(all_results):
    """Calculate global performance metrics."""
    metrics = {}
    
    # Aggregate all equity curves
    all_equities = []
    for day_name, df in all_results.items():
        if not df.empty:
            all_equities.extend(df['equity'].tolist())
    
    if not all_equities:
        return None
    
    # Total Net Profit
    final_equities = [df['equity'].iloc[-1] for df in all_results.values() if not df.empty]
    metrics['total_net_profit'] = sum(final_equities)
    
    # Gross Profit / Gross Loss
    gross_profit = sum([e for e in final_equities if e > 0])
    gross_loss = abs(sum([e for e in final_equities if e < 0]))
    metrics['gross_profit'] = gross_profit
    metrics['gross_loss'] = gross_loss
    metrics['profit_factor'] = gross_profit / gross_loss if gross_loss > 0 else float('inf')
    
    # Max Drawdown (per day and global)
    max_dd_per_day = {}
    global_max_dd = 0.0
    
    for day_name, df in all_results.items():
        if not df.empty:
            equity = df['equity'].values
            peak = np.maximum.accumulate(equity)
            drawdown = peak - equity
            max_dd = np.max(drawdown)
            max_dd_per_day[day_name] = max_dd
            if max_dd > global_max_dd:
                global_max_dd = max_dd
    
    metrics['max_drawdown'] = global_max_dd
    metrics['max_dd_per_day'] = max_dd_per_day
    
    # Sharpe Ratio (Annualized)
    # Assume each tick is ~100ms, so ~36000 ticks per hour, ~234000 per trading day
    # Annualize: sqrt(252 trading days)
    all_returns = []
    for df in all_results.values():
        if not df.empty and len(df) > 1:
            returns = df['equity'].diff().dropna()
            all_returns.extend(returns.tolist())
    
    if all_returns:
        mean_return = np.mean(all_returns)
        std_return = np.std(all_returns)
        # Annualization factor: assume ~1M ticks per year (rough)
        annualization_factor = np.sqrt(252 * 23400)  # 252 days * 6.5 hours * 3600 ticks/hour
        metrics['sharpe_ratio'] = (mean_return / std_return * annualization_factor) if std_return > 0 else 0.0
    else:
        metrics['sharpe_ratio'] = 0.0
    
    return metrics

def generate_plots(all_results, output_html="results/global_performance.html"):
    """Generate interactive Plotly charts."""
    
    # Create subplots: Equity Curve on top, Inventory below
    fig = make_subplots(
        rows=2, cols=1,
        shared_xaxes=False,
        vertical_spacing=0.1,
        subplot_titles=("Cumulative PnL (Equity Curve)", "Inventory Levels"),
        row_heights=[0.6, 0.4]
    )
    
    global_tick_offset = 0
    
    for day_name, df in all_results.items():
        if df.empty:
            continue
        
        color = DAY_COLORS.get(day_name, "#95a5a6")
        x_values = list(range(global_tick_offset, global_tick_offset + len(df)))
        
        # Equity Curve
        fig.add_trace(
            go.Scatter(
                x=x_values,
                y=df['equity'],
                mode='lines',
                name=f"{day_name} - Equity",
                line=dict(color=color, width=1.5),
                hovertemplate=f"{day_name}<br>Tick: %{{x}}<br>Equity: $%{{y:.2f}}<extra></extra>"
            ),
            row=1, col=1
        )
        
        # Inventory
        fig.add_trace(
            go.Scatter(
                x=x_values,
                y=df['inventory'],
                mode='lines',
                name=f"{day_name} - Inventory",
                line=dict(color=color, width=1, dash='dot'),
                hovertemplate=f"{day_name}<br>Tick: %{{x}}<br>Inventory: %{{y:.2f}}<extra></extra>"
            ),
            row=2, col=1
        )
        
        # Add vertical line to separate days
        if global_tick_offset > 0:
            fig.add_vline(x=global_tick_offset, line_dash="dash", line_color="gray", opacity=0.5, row=1, col=1)
            fig.add_vline(x=global_tick_offset, line_dash="dash", line_color="gray", opacity=0.5, row=2, col=1)
        
        global_tick_offset += len(df)
    
    # Update layout
    fig.update_layout(
        title="Global Multi-Day Performance Analysis",
        height=800,
        showlegend=True,
        legend=dict(
            orientation="h",
            yanchor="bottom",
            y=1.02,
            xanchor="right",
            x=1
        ),
        hovermode="x unified"
    )
    
    fig.update_yaxes(title_text="Equity ($)", row=1, col=1)
    fig.update_yaxes(title_text="Inventory (units)", row=2, col=1)
    fig.update_xaxes(title_text="Tick #", row=2, col=1)
    
    # Add horizontal line at 0 for inventory
    fig.add_hline(y=0, line_dash="solid", line_color="black", opacity=0.3, row=2, col=1)
    
    # Save
    os.makedirs(os.path.dirname(output_html), exist_ok=True)
    fig.write_html(output_html)
    print(f"Saved interactive chart to {output_html}")
    
    return fig

def generate_markdown_report(metrics, output_file="GLOBAL_PERFORMANCE_SUMMARY.md"):
    """Generate markdown performance report."""
    
    dd_status = "✅ PASS" if metrics['max_drawdown'] <= 10.0 else "❌ FAIL"
    pnl_status = "✅ PROFITABLE" if metrics['total_net_profit'] > 0 else "❌ LOSING"
    
    report = f"""# Global Performance Summary

## Executive Summary

| Metric | Value | Status |
|--------|-------|--------|
| **Total Net Profit** | ${metrics['total_net_profit']:.2f} | {pnl_status} |
| **Profit Factor** | {metrics['profit_factor']:.2f} | {"✅" if metrics['profit_factor'] > 1.0 else "❌"} |
| **Max Drawdown** | ${metrics['max_drawdown']:.2f} | {dd_status} |
| **Sharpe Ratio (Ann.)** | {metrics['sharpe_ratio']:.2f} | {"✅" if metrics['sharpe_ratio'] > 0 else "⚠️"} |

---

## Detailed Breakdown

### Profit & Loss
- **Gross Profit:** ${metrics['gross_profit']:.2f}
- **Gross Loss:** ${metrics['gross_loss']:.2f}
- **Net Profit:** ${metrics['total_net_profit']:.2f}

### Risk Metrics
- **Max Drawdown:** ${metrics['max_drawdown']:.2f}
- **Drawdown Limit:** $10.00
- **Constraint Status:** {dd_status}

### Drawdown by Day
| Day | Max Drawdown |
|-----|--------------|
"""
    
    for day_name, dd in metrics.get('max_dd_per_day', {}).items():
        status = "✅" if dd <= 10.0 else "❌"
        report += f"| {day_name} | ${dd:.2f} {status} |\n"
    
    report += f"""
---

## Configuration Used

```json
{json.dumps(load_config(), indent=2)}
```

---

*Report generated on {pd.Timestamp.now().strftime('%Y-%m-%d %H:%M:%S')}*
"""
    
    with open(output_file, 'w', encoding='utf-8') as f:
        f.write(report)
    
    print(f"Saved report to {output_file}")

def main(config_file=None):
    global CONFIG_FILE
    if config_file:
        CONFIG_FILE = config_file
    
    print("=" * 60)
    print("GLOBAL PERFORMANCE VISUALIZATION SUITE")
    print("=" * 60)
    
    # Load config
    config = load_config()
    print(f"\nLoaded config: {config}")
    
    # Ensure results directory exists
    os.makedirs(RESULTS_DIR, exist_ok=True)
    
    # Run backtests
    all_results = {}
    
    for day_name, data_file in DATA_FILES.items():
        print(f"\nProcessing {day_name}...")
        
        output_file = os.path.join(RESULTS_DIR, f"backtest_{day_name.replace(' ', '_').replace('/', '-')}.csv")
        
        if not os.path.exists(data_file):
            print(f"  WARNING: {data_file} not found, skipping.")
            continue
        
        success = run_backtest(data_file, config, output_file)
        
        if success:
            df = parse_output(output_file)
            all_results[day_name] = df
            
            if not df.empty:
                final_equity = df['equity'].iloc[-1]
                max_inv = df['inventory'].abs().max()
                print(f"  ✓ {len(df)} ticks | Final PnL: ${final_equity:.2f} | Max Inventory: {max_inv:.2f}")
            else:
                print(f"  ✗ No valid data parsed")
        else:
            print(f"  ✗ Engine failed")
    
    if not all_results:
        print("\nERROR: No results to analyze!")
        return
    
    # Calculate metrics
    print("\n" + "=" * 60)
    print("CALCULATING METRICS")
    print("=" * 60)
    
    metrics = calculate_metrics(all_results)
    
    if metrics:
        print(f"\nTotal Net Profit: ${metrics['total_net_profit']:.2f}")
        print(f"Profit Factor: {metrics['profit_factor']:.2f}")
        print(f"Max Drawdown: ${metrics['max_drawdown']:.2f}")
        print(f"Sharpe Ratio (Ann.): {metrics['sharpe_ratio']:.2f}")
        
        # Generate visualizations
        print("\n" + "=" * 60)
        print("GENERATING VISUALIZATIONS")
        print("=" * 60)
        
        generate_plots(all_results)
        generate_markdown_report(metrics)
        
        print("\n" + "=" * 60)
        print("COMPLETE!")
        print("=" * 60)
        print(f"\n📊 Interactive Chart: results/global_performance.html")
        print(f"📝 Summary Report: GLOBAL_PERFORMANCE_SUMMARY.md")
    else:
        print("ERROR: Could not calculate metrics!")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Global Performance Visualization")
    parser.add_argument("--config", help="Path to config JSON file", default="best_global_config.json")
    args = parser.parse_args()
    
    main(args.config)
