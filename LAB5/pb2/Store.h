#pragma once
#include "ShoesDepartment.h"
#include "ToysDepartment.h"
#include "Order.h"

class Store {
private:
    ShoesDepartment shoes;
    ToysDepartment toys;
    std::vector<Order> orders;

public:
    ShoesDepartment& getShoesDept();
    ToysDepartment& getToysDept();

    void createOrder(const Order& o);
    float totalOrdersValue() const;
};
