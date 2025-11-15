#pragma once
#include <vector>
#include <string>
#include "Product.h"

class Department {
protected:
    std::vector<Product*> products;

public:
    virtual ~Department() {}

    void addProduct(Product* p);
    void removeProduct(std::string name);
    Product* findProduct(std::string name);

    std::vector<Product*> getProductsSortedByName() const;
    std::vector<Product*> getProductsSortedByPrice() const;
};
