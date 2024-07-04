#include "trading_engine.h"

Order::Order(int id, OrderType type, std::string symbol, double price, int quantity)
    : id(id), type(type), symbol(symbol), price(price), quantity(quantity) {}

TradingEngine::TradingEngine() {}

void TradingEngine::receiveOrder(OrderType type, const std::string& symbol, double price, int quantity) {
    Order newOrder(orderIdCounter++, type, symbol, price, quantity);
    orderBook.addOrder(newOrder);
    orderBook.matchOrders();
}
