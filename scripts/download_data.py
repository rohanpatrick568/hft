import os
import requests
import zipfile
import argparse
from pathlib import Path
import sys

# Constants
BASE_URL_MONTHLY = "https://data.binance.vision/data/spot/monthly/trades"
BASE_URL_DAILY = "https://data.binance.vision/data/spot/daily/trades"

def download_file(url, dest_path):
    if dest_path.exists():
        print(f"File already exists: {dest_path}")
        return True

    print(f"Downloading {url}...")
    try:
        response = requests.get(url, stream=True)
        if response.status_code != 200:
            print(f"Failed to download {url}: HTTP {response.status_code}")
            return False
            
        with open(dest_path, 'wb') as f:
            for chunk in response.iter_content(chunk_size=8192):
                f.write(chunk)
        print("Download complete.")
        return True
    except Exception as e:
        print(f"Error downloading file: {e}")
        if dest_path.exists():
            os.remove(dest_path)
        return False

def unzip_file(zip_path, extract_to):
    print(f"Extracting {zip_path}...")
    try:
        with zipfile.ZipFile(zip_path, 'r') as zip_ref:
            zip_ref.extractall(extract_to)
            return zip_ref.namelist()
    except Exception as e:
        print(f"Error extracting file: {e}")
        return []

def create_sample(csv_path, sample_size):
    sample_path = csv_path.parent / f"{csv_path.stem}_sample.csv"
    print(f"Creating sample file: {sample_path} ({sample_size} rows)...")
    try:
        with open(csv_path, 'r') as f_in, open(sample_path, 'w') as f_out:
            for i, line in enumerate(f_in):
                if i >= sample_size:
                    break
                f_out.write(line)
        print("Sample creation complete.")
        return sample_path
    except Exception as e:
        print(f"Error creating sample: {e}")
        return None

def main():
    parser = argparse.ArgumentParser(description="Download Binance Trade Data (Monthly or Daily)")
    parser.add_argument("--mode", choices=["monthly", "daily"], default="daily", help="Download mode")
    parser.add_argument("--symbol", type=str, default="BTCUSDT", help="Trading pair symbol")
    parser.add_argument("--year", type=str, default="2025", help="Year (YYYY)")
    parser.add_argument("--month", type=str, default="11", help="Month (MM)")
    parser.add_argument("--day", type=str, default="01", help="Day (DD) - only for daily mode")
    parser.add_argument("--sample", type=int, default=100000, help="Create a sample CSV with N rows (0 to disable)")
    parser.add_argument("--output", type=str, default="../data", help="Output directory")
    
    args = parser.parse_args()

    # Setup paths
    # If script is run from scripts/ folder, default output is ../data
    # If script is run from root, we might need to adjust. 
    # Using Path to resolve relative to script location if default is used.
    if args.output == "../data":
        data_dir = Path(__file__).parent.parent / "data"
    else:
        data_dir = Path(args.output)
    
    data_dir.mkdir(parents=True, exist_ok=True)

    # Construct URL and Filename
    if args.mode == "monthly":
        # Format: BTCUSDT-trades-2024-01.zip
        filename = f"{args.symbol}-trades-{args.year}-{args.month}.zip"
        url = f"{BASE_URL_MONTHLY}/{args.symbol}/{filename}"
    else:
        # Format: BTCUSDT-trades-2024-01-01.zip
        filename = f"{args.symbol}-trades-{args.year}-{args.month}-{args.day}.zip"
        url = f"{BASE_URL_DAILY}/{args.symbol}/{filename}"

    zip_path = data_dir / filename

    # Execute
    if download_file(url, zip_path):
        extracted_files = unzip_file(zip_path, data_dir)
        
        if args.sample > 0:
            for f in extracted_files:
                if f.endswith(".csv"):
                    create_sample(data_dir / f, args.sample)

if __name__ == "__main__":
    main()
