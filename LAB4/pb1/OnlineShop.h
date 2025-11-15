#pragma once
#include <vector>
#include <string>
#include "Category.h"

class OnlineShop {
private:
    std::vector<Category> categories;

public:
    void addCategory(const Category& c);
    void removeCategory(std::string name);

    void displayAllProducts() const;
    void displayPromotionProducts() const;

    void searchByName(std::string name) const;
    void searchByPrice(float minPrice, float maxPrice) const;
    void searchByCategory(std::string categoryName) const;

    const std::vector<Category>& getCategories() const;
};
