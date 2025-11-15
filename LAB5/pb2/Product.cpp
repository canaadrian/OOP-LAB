#include "Product.h"
#include <iostream>

Product::Product(std::string name, float price)
    : name(name), price(price) {}

std::string Product::getName() const { return name; }
float Product::getPrice() const { return price; }
