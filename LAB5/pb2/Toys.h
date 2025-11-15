#pragma once
#include "Product.h"

class Toys : public Product {
private:
    int minAge;

public:
    Toys(std::string name = "", float price = 0, int minAge = 0);
    void display() const override;
};
