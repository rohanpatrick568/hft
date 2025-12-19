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
    uint64_t latency_us = 100; // Default 100us
    double queue_decay = 0.0;
    double order_size = 0.01;
    double impact_coeff = 0.0;

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
        } else {
            dataFile = arg;
        }
    }

    OrderBook book;
    FeatureExtractor featureExtractor;
    ExecutionSimulator executionSimulator;
    // Use fixed latency for deterministic sweep
    LatencyQueueSimulator latencySimulator(latency_us * 1000, latency_us * 1000); 
    
    // Pass use_ml to DecisionEngine
    DecisionEngine decisionEngine(executionSimulator, latencySimulator, 0.1, 100, use_ml);
    decisionEngine.setOrderSize(order_size);
    
    ReplayEngine engine(book, featureExtractor, decisionEngine, executionSimulator, latencySimulator);
    engine.setVolumeBucket(volume_bucket);
    engine.setQueueDecay(queue_decay);
    engine.setImpactCoeff(impact_coeff);

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
