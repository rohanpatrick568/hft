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

PaperExchangeAdapter::PaperExchangeAdapter(const std::string& apiKey, const std::string& secretKey, const std::string& symbol, bool use_testnet)
    : apiKey(apiKey), secretKey(secretKey), symbol(symbol), use_testnet(use_testnet) {}

void PaperExchangeAdapter::placeOrder(bool is_buy, double price, double quantity, uint64_t timestamp) {
    std::stringstream cmd;
    cmd << "python python/alpaca_execution_adapter.py --action place --symbol " << symbol
        << " --side " << (is_buy ? "BUY" : "SELL")
        << " --quantity " << quantity
        << " --price " << price
        << " --type limit"
        << " --api_key " << apiKey
        << " --secret_key " << secretKey;
        
    std::system(cmd.str().c_str());
}

void PaperExchangeAdapter::cancelOrder(uint64_t orderId) {
    std::stringstream cmd;
    cmd << "python python/alpaca_execution_adapter.py --action cancel --symbol " << symbol
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
    cmd << "python python/alpaca_execution_adapter.py --action fills --symbol " << symbol
        << " --api_key " << apiKey
        << " --secret_key " << secretKey;
        
    std::string output = exec(cmd.str().c_str());
    std::stringstream ss(output);
    std::string line;
    
    while (std::getline(ss, line)) {
        if (line.empty()) continue;
        // Log fill
        // Format: timestamp,orderId,price,quantity,is_buy,is_maker
        std::stringstream line_ss(line);
        std::string segment;
        std::vector<std::string> parts;
        while(std::getline(line_ss, segment, ',')) parts.push_back(segment);
        
        if (parts.size() >= 5) {
            FillReport report;
            report.timestamp = std::stoull(parts[0]);
            report.orderId = std::stoull(parts[1]);
            report.price = std::stod(parts[2]);
            report.quantity = std::stod(parts[3]);
            report.is_buy = (std::stoi(parts[4]) == 1);
            report.is_maker = false; // Alpaca doesn't specify easily
            fills.push_back(report);
        }
    }
    
    return fills;
}

double PaperExchangeAdapter::getInventory() const {
    std::stringstream cmd;
    cmd << "python python/alpaca_execution_adapter.py --action position --symbol " << symbol
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
