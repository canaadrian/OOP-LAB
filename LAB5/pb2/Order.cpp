#include "Order.h"
#include <iostream>

void Order::addItem(Product* p) {
    items.push_back(p);
}

float Order::totalValue() const {
    float sum = 0;
    for (auto p : items)
        sum += p->getPrice();
    return sum;
}

void Order::display() const {
    for (auto p : items)
        p->display();
}
