#pragma once
#include <string>

class Product {
protected:
    std::string name;
    float price;

public:
    Product(std::string name = "", float price = 0);
    virtual ~Product() {}

    std::string getName() const;
    float getPrice() const;

    virtual void display() const = 0; // pure virtual
};
