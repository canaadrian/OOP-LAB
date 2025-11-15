#include "Store.h"

ShoesDepartment& Store::getShoesDept() { return shoes; }
ToysDepartment& Store::getToysDept() { return toys; }

void Store::createOrder(const Order& o) {
    orders.push_back(o);
}

float Store::totalOrdersValue() const {
    float sum = 0;
    for (const auto& o : orders)
        sum += o.totalValue();
    return sum;
}
