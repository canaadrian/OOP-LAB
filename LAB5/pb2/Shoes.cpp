#include "Shoes.h"
#include <iostream>

Shoes::Shoes(std::string name, float price, int size)
    : Product(name, price), size(size) {}

void Shoes::display() const {
    std::cout << "Shoes: " << name << " $" << price << " size " << size << "\n";
}
