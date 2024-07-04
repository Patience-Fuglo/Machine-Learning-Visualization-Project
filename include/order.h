#ifndef ORDER_H
#define ORDER_H

#include <string>

enum OrderType { BUY, SELL };

struct Order {
    int id;
    OrderType type;
    std::string symbol;
    double price;
    int quantity;
    
    Order(int id, OrderType type, std::string symbol, double price, int quantity);
};

#endif // ORDER_H
