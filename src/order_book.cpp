#include <iostream> // Include this line
#include "order_book.h"

#include "order_book.h"

bool CompareBuy::operator()(const Order& o1, const Order& o2) {
    return o1.price < o2.price;
}

bool CompareSell::operator()(const Order& o1, const Order& o2) {
    return o1.price > o2.price;
}

void OrderBook::addOrder(const Order& order) {
    if (order.type == BUY) {
        buyOrders.push(order);
    } else {
        sellOrders.push(order);
    }
}

void OrderBook::matchOrders() {
    while (!buyOrders.empty() && !sellOrders.empty()) {
        Order buyOrder = buyOrders.top();
        Order sellOrder = sellOrders.top();

        if (buyOrder.price >= sellOrder.price) {
            int tradeQuantity = std::min(buyOrder.quantity, sellOrder.quantity);
            std::cout << "Trade executed: " << tradeQuantity << " shares at " << sellOrder.price << std::endl;

            buyOrders.pop();
            sellOrders.pop();

            if (buyOrder.quantity > tradeQuantity) {
                buyOrder.quantity -= tradeQuantity;
                buyOrders.push(buyOrder);
            }

            if (sellOrder.quantity > tradeQuantity) {
                sellOrder.quantity -= tradeQuantity;
                sellOrders.push(sellOrder);
            }
        } else {
            break;
        }
    }
}
