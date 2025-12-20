#include <iostream>
#include "orderbook/OrderBook.h"
#include "engine/TradingEngine.h"
#include "engine/FeatureExtractor.h"
#include "engine/DecisionEngine.h"
#include "engine/CSVFeed.h"
#include "engine/SimulatedExchange.h"
#include "engine/LiveFeedAdapter.h"
#include "engine/PaperExchangeAdapter.h"

int main(int argc, char* argv[]) {
    std::cerr << "HFT Engine Starting..." << std::endl;

    bool use_ml = true;
    std::string dataFile = "";
    std::string snapshotFile = "";
    double volume_bucket = 1.0;
    std::string tradeLogFile = "";
    uint64_t latency_us = 100; // Default 100us
    double queue_decay = 0.0;
    double order_size = 0.01;
    double impact_coeff = 0.0;
    double risk_aversion = 0.1;
    int window_size = 100;
    double half_spread = 0.0;
    double skew_factor = 1.0;
    std::string mode = "backtest";
    std::string apiKey = "";
    std::string secretKey = "";
    std::string symbol = "BTCUSDT"; // Default

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg == "--no-ml") {
            use_ml = false;
        } else if (arg == "--snapshots" && i + 1 < argc) {
            snapshotFile = argv[++i];
        } else if (arg == "--volume-bucket" && i + 1 < argc) {
            volume_bucket = std::stod(argv[++i]);
        } else if (arg == "--trade-logs" && i + 1 < argc) {
            tradeLogFile = argv[++i];
        } else if (arg == "--latency" && i + 1 < argc) {
            latency_us = std::stoull(argv[++i]);
        } else if (arg == "--queue-decay" && i + 1 < argc) {
            queue_decay = std::stod(argv[++i]);
        } else if (arg == "--order-size" && i + 1 < argc) {
            order_size = std::stod(argv[++i]);
        } else if (arg == "--impact-coeff" && i + 1 < argc) {
            impact_coeff = std::stod(argv[++i]);
        } else if (arg == "--risk-aversion" && i + 1 < argc) {
            risk_aversion = std::stod(argv[++i]);
        } else if (arg == "--window-size" && i + 1 < argc) {
            window_size = std::stoi(argv[++i]);
        } else if (arg == "--half-spread" && i + 1 < argc) {
            half_spread = std::stod(argv[++i]);
        } else if (arg == "--skew-factor" && i + 1 < argc) {
            skew_factor = std::stod(argv[++i]);
        } else if (arg == "--mode" && i + 1 < argc) {
            mode = argv[++i];
        } else if (arg == "--api-key" && i + 1 < argc) {
            apiKey = argv[++i];
        } else if (arg == "--secret-key" && i + 1 < argc) {
            secretKey = argv[++i];
        } else if (arg == "--symbol" && i + 1 < argc) {
            symbol = argv[++i];
        } else {
            dataFile = arg;
        }
    }

    OrderBook book;
    FeatureExtractor featureExtractor;
    
    MarketDataFeed* feed = nullptr;
    ExecutionInterface* execution = nullptr;
    
    if (mode == "backtest") {
        feed = new CSVFeed();
        auto* simExchange = new SimulatedExchange(book, latency_us * 1000);
        simExchange->setQueueDecay(queue_decay);
        simExchange->setImpactCoeff(impact_coeff);
        execution = simExchange;
    } else if (mode == "live" || mode == "paper") {
        feed = new LiveFeedAdapter(symbol, true);
        execution = new PaperExchangeAdapter(apiKey, secretKey, symbol, true);
    } else {
        std::cerr << "Unknown mode: " << mode << std::endl;
        return 1;
    }
    
    // Pass use_ml to DecisionEngine
    DecisionEngine decisionEngine(*execution, risk_aversion, window_size, use_ml);
    decisionEngine.setOrderSize(order_size);
    decisionEngine.setHalfSpread(half_spread);
    decisionEngine.setSkewFactor(skew_factor);
    
    TradingEngine engine(*feed, *execution, book, featureExtractor, decisionEngine);
    engine.setVolumeBucket(volume_bucket);

    if (mode == "backtest") {
        if (!snapshotFile.empty()) {
            // engine.loadSnapshots(snapshotFile); // TODO: Add loadSnapshots to MarketDataFeed or handle in CSVFeed
        } 
        if (!dataFile.empty()) {
            feed->loadData(dataFile);
        } else {
            std::cerr << "No data file provided for backtest." << std::endl;
            return 1;
        }
    } else {
        feed->loadData("binance");
    }

    if (use_ml) {
        std::cerr << "Mode: ML Enabled (Hybrid Inference)" << std::endl;
    } else {
        std::cerr << "Mode: Baseline (No ML)" << std::endl;
    }

    engine.run();
    
    std::cerr << "Engine run finished. Saving logs to: " << tradeLogFile << std::endl;
    if (!tradeLogFile.empty()) {
        engine.saveTradeLogs(tradeLogFile);
    } else {
        std::cerr << "No trade log file specified." << std::endl;
    }
    
    delete feed;
    delete execution;

    return 0;
}
