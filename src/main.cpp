#include <iostream>
#include "orderbook/OrderBook.h"
#include "engine/ReplayEngine.h"
#include "engine/FeatureExtractor.h"
#include "engine/DecisionEngine.h"
#include "engine/ExecutionSimulator.h"
#include "engine/LatencyQueueSimulator.h"

int main(int argc, char* argv[]) {
    std::cerr << "HFT Engine Starting..." << std::endl;

    bool use_ml = true;
    std::string dataFile = "";
    std::string snapshotFile = "";
    double volume_bucket = 1.0;
    std::string tradeLogFile = "";

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
        } else {
            dataFile = arg;
        }
    }

    OrderBook book;
    FeatureExtractor featureExtractor;
    ExecutionSimulator executionSimulator;
    LatencyQueueSimulator latencySimulator;
    // Pass use_ml to DecisionEngine
    DecisionEngine decisionEngine(executionSimulator, latencySimulator, 0.1, 100, use_ml);
    
    ReplayEngine engine(book, featureExtractor, decisionEngine, executionSimulator, latencySimulator);
    engine.setVolumeBucket(volume_bucket);

    if (!snapshotFile.empty()) {
        engine.loadSnapshots(snapshotFile);
    } else if (!dataFile.empty()) {
        engine.loadData(dataFile);
    } else {
        std::cerr << "No data file provided. Usage: hft_engine <csv_file> [--no-ml] [--volume-bucket <btc>] [--trade-logs <file>]" << std::endl;
        return 1;
    }

    if (use_ml) {
        std::cerr << "Mode: ML Enabled (Hybrid Inference)" << std::endl;
    } else {
        std::cerr << "Mode: Baseline (No ML)" << std::endl;
    }

    engine.run();
    
    if (!tradeLogFile.empty()) {
        engine.saveTradeLogs(tradeLogFile);
    }

    return 0;
}
