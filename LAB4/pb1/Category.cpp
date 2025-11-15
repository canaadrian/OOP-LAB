#include "Category.h"
#include <algorithm>

Category::Category(std::string name) {
    this->name = name;
}

std::string Category::getName() const {
    return name;
}

void Category::addProduct(const Product& p) {
    products.push_back(p);
}

void Category::removeProduct(std::string productName) {
    products.erase(
        std::remove_if(products.begin(), products.end(),
            [productName](const Product& p) { return p.getName() == productName; }),
        products.end()
    );
}

void Category::updateProduct(std::string oldName, const Product& newProduct) {
    for (auto& p : products) {
        if (p.getName() == oldName) {
            p = newProduct;
            return;
        }
    }
}

const std::vector<Product>& Category::getProducts() const {
    return products;
}
