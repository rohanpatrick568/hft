#include "PaperExchangeAdapter.h"
#include "PaperExchangeAdapter.h"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <cstdio>
#include <memory>
#include <array>
#include <stdexcept>
#include <vector>
#include <fstream>

// Helper to run command and get output
std::string exec(const char* cmd) {
    std::string cmd_str = std::string(cmd) + " > temp_output.txt";
    std::system(cmd_str.c_str());
    
    std::ifstream file("temp_output.txt");
    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();
}

PaperExchangeAdapter::PaperExchangeAdapter(const std::string& apiKey, const std::string& secretKey, bool use_testnet)
    : apiKey(apiKey), secretKey(secretKey), use_testnet(use_testnet) {}

void PaperExchangeAdapter::placeOrder(bool is_buy, double price, double quantity, uint64_t timestamp) {
    std::stringstream cmd;
    cmd << "python scripts/order_manager.py --action place --symbol BTCUSDT"
        << " --side " << (is_buy ? "BUY" : "SELL")
        << " --quantity " << quantity
        << " --price " << price
        << " --api_key " << apiKey
        << " --secret_key " << secretKey;
        
    std::system(cmd.str().c_str());
}

void PaperExchangeAdapter::cancelOrder(uint64_t orderId) {
    std::stringstream cmd;
    cmd << "python scripts/order_manager.py --action cancel --symbol BTCUSDT"
        << " --order_id " << orderId
        << " --api_key " << apiKey
        << " --secret_key " << secretKey;
        
    std::system(cmd.str().c_str());
}

void PaperExchangeAdapter::processMarketEvent(const MarketEvent& event) {
    // Update PnL based on current price
}

std::vector<FillReport> PaperExchangeAdapter::getNewFills() {
    std::vector<FillReport> fills;
    std::stringstream cmd;
    cmd << "python scripts/order_manager.py --action fills --symbol BTCUSDT"
        << " --api_key " << apiKey
        << " --secret_key " << secretKey;
        
    std::string output = exec(cmd.str().c_str());
    std::stringstream ss(output);
    std::string line;
    
    while (std::getline(ss, line)) {
        if (line.empty()) continue;
        // Log fill
        std::cerr << "[PaperExchange] Fill: " << line << std::endl;
    }
    
    return fills;
}

double PaperExchangeAdapter::getInventory() const {
    std::stringstream cmd;
    cmd << "python scripts/order_manager.py --action position --symbol BTCUSDT"
        << " --api_key " << apiKey
        << " --secret_key " << secretKey;
        
    std::string output = exec(cmd.str().c_str());
    try {
        return std::stod(output);
    } catch (...) {
        return 0.0;
    }
}

double PaperExchangeAdapter::getTotalPnL(double currentMidPrice) const {
    return 0.0; // Placeholder
}
