#pragma once
#include <vector>
#include "Product.h"

class Order {
private:
    std::vector<Product*> items;

public:
    void addItem(Product* p);
    float totalValue() const;
    void display() const;
};
