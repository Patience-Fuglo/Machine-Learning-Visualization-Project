#ifndef TRADING_ENGINE_H
#define TRADING_ENGINE_H

#include "order_book.h"

class TradingEngine {
public:
    OrderBook orderBook;
    int orderIdCounter = 0;

    TradingEngine();

    void receiveOrder(OrderType type, const std::string& symbol, double price, int quantity);
};

#endif // TRADING_ENGINE_H
