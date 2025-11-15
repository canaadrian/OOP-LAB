#include "Department.h"
#include <algorithm>

void Department::addProduct(Product* p) {
    products.push_back(p);
}

void Department::removeProduct(std::string name) {
    products.erase(
        std::remove_if(products.begin(), products.end(),
            [name](Product* p){ return p->getName() == name; }),
        products.end()
    );
}

Product* Department::findProduct(std::string name) {
    for (auto p : products)
        if (p->getName() == name)
            return p;
    return nullptr;
}

std::vector<Product*> Department::getProductsSortedByName() const {
    auto sorted = products;
    std::sort(sorted.begin(), sorted.end(),
        [](Product* a, Product* b){ return a->getName() < b->getName(); });
    return sorted;
}

std::vector<Product*> Department::getProductsSortedByPrice() const {
    auto sorted = products;
    std::sort(sorted.begin(), sorted.end(),
        [](Product* a, Product* b){ return a->getPrice() < b->getPrice(); });
    return sorted;
}
