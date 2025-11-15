#include "Toys.h"
#include <iostream>

Toys::Toys(std::string name, float price, int minAge)
    : Product(name, price), minAge(minAge) {}

void Toys::display() const {
    std::cout << "Toy: " << name << " $" << price << " (min age " << minAge << ")\n";
}
