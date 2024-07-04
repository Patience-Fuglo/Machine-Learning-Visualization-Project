#ifndef ORDER_BOOK_H
#define ORDER_BOOK_H

#include "order.h"
#include <queue>

struct CompareBuy {
    bool operator()(const Order& o1, const Order& o2);
};

struct CompareSell {
    bool operator()(const Order& o1, const Order& o2);
};

class OrderBook {
public:
    std::priority_queue<Order, std::vector<Order>, CompareBuy> buyOrders;
    std::priority_queue<Order, std::vector<Order>, CompareSell> sellOrders;

    void addOrder(const Order& order);
    void matchOrders();
};

#endif // ORDER_BOOK_H
