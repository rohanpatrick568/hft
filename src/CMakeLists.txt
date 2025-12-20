cmake_minimum_required(VERSION 3.10)
project(HFT_Engine VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include directories
include_directories(orderbook engine)

# Source files
set(SOURCES
    main.cpp
    orderbook/OrderBook.cpp
    engine/ReplayEngine.cpp
    engine/FeatureExtractor.cpp
    engine/DecisionEngine.cpp
    engine/ExecutionSimulator.cpp
    engine/LatencyQueueSimulator.cpp
    engine/TradingEngine.cpp
    engine/SimulatedExchange.cpp
    engine/LiveFeedAdapter.cpp
    engine/PaperExchangeAdapter.cpp
    engine/model_compiled.c
)

# Executable
add_executable(hft_engine ${SOURCES})

# Compiler options (Optional optimization)
if(MSVC)
    target_compile_options(hft_engine PRIVATE /O2 /W3)
else()
    target_compile_options(hft_engine PRIVATE -O3 -Wall)
endif()
