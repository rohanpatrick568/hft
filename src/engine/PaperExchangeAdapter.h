#pragma once
#include "ExecutionInterface.h"
#include <string>
#include <vector>

class PaperExchangeAdapter : public ExecutionInterface {
public:
    PaperExchangeAdapter(const std::string& apiKey, const std::string& secretKey, bool use_testnet = true);
    
    void placeOrder(bool is_buy, double price, double quantity, uint64_t timestamp) override;
    void cancelOrder(uint64_t orderId) override;
    void processMarketEvent(const MarketEvent& event) override;
    std::vector<FillReport> getNewFills() override;
    double getInventory() const override;
    double getTotalPnL(double currentMidPrice) const override;

private:
    std::string apiKey;
    std::string secretKey;
    bool use_testnet;
    
    double current_inventory = 0.0;
    double realized_pnl = 0.0;
    
    // In a real implementation, we would have a thread polling for fills
    // or listening to a User Data Stream WebSocket.
};
