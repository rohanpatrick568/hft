#include <iostream>
#include "orderbook/OrderBook.h"
#include "engine/ReplayEngine.h"
#include "engine/FeatureExtractor.h"
#include "engine/DecisionEngine.h"
#include "engine/ExecutionSimulator.h"
#include "engine/LatencyQueueSimulator.h"

int main(int argc, char* argv[]) {
    std::cout << "HFT Engine Starting..." << std::endl;

    OrderBook book;
    FeatureExtractor featureExtractor;
    ExecutionSimulator executionSimulator;
    LatencyQueueSimulator latencySimulator;
    DecisionEngine decisionEngine(executionSimulator, latencySimulator);
    
    ReplayEngine engine(book, featureExtractor, decisionEngine, executionSimulator, latencySimulator);

    if (argc > 1) {
        std::string arg1 = argv[1];
        if (arg1 == "--snapshots" && argc > 2) {
            engine.loadSnapshots(argv[2]);
        } else {
            engine.loadData(arg1);
        }
    } else {
        std::cout << "No data file provided. Usage: hft_engine <csv_file> OR hft_engine --snapshots <snapshot_file>" << std::endl;
    }

    engine.run();

    return 0;
}
