#pragma once
#include "MarketDataFeed.h"
// #include <thread>
// #include <atomic>
#include <queue>
// #include <mutex>
#include <string>

class LiveFeedAdapter : public MarketDataFeed {
public:
    LiveFeedAdapter(const std::string& symbol, bool use_testnet = true);
    ~LiveFeedAdapter();
    
    void loadData(const std::string& source) override;
    bool getNextEvent(MarketEvent& event) override;
    
private:
    std::string symbol;
    bool use_testnet;
    bool running;
    // std::thread ws_thread;
    
    std::queue<MarketEvent> event_queue;
    // std::mutex queue_mutex;
    
    void websocketLoop();
    void parseMessage(const std::string& msg);
};
