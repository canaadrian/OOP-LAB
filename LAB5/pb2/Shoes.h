#pragma once
#include "Product.h"

class Shoes : public Product {
private:
    int size;

public:
    Shoes(std::string name = "", float price = 0, int size = 0);
    void display() const override;
};
