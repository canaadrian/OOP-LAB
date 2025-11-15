#pragma once
#include <string>
#include <vector>
#include "Product.h"

class Category {
private:
    std::string name;
    std::vector<Product> products;

public:
    Category(std::string name = "");

    std::string getName() const;

    void addProduct(const Product& p);
    void removeProduct(std::string productName);
    void updateProduct(std::string oldName, const Product& newProduct);

    const std::vector<Product>& getProducts() const;
};
