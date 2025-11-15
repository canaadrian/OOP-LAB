#include "OnlineShop.h"
#include <iostream>
#include <algorithm>

void OnlineShop::addCategory(const Category& c) {
    categories.push_back(c);
}

void OnlineShop::removeCategory(std::string name) {
    categories.erase(
        std::remove_if(categories.begin(), categories.end(),
            [name](const Category& c) { return c.getName() == name; }),
        categories.end()
    );
}

void OnlineShop::displayAllProducts() const {
    for (const auto& c : categories) {
        std::cout << "Category: " << c.getName() << "\n";
        for (const auto& p : c.getProducts()) {
            std::cout << " - " << p.getName() << " $" << p.getPrice() << "\n";
        }
    }
}

void OnlineShop::displayPromotionProducts() const {
    for (const auto& c : categories) {
        for (const auto& p : c.getProducts()) {
            if (p.isOnPromotion()) {
                std::cout << c.getName() << ": " << p.getName()
                          << " (promo!) $" << p.getPrice() << "\n";
            }
        }
    }
}

void OnlineShop::searchByName(std::string name) const {
    for (const auto& c : categories)
        for (const auto& p : c.getProducts())
            if (p.getName() == name)
                std::cout << "Found in " << c.getName() << ": " << p.getName() << "\n";
}

void OnlineShop::searchByPrice(float minPrice, float maxPrice) const {
    for (const auto& c : categories)
        for (const auto& p : c.getProducts())
            if (p.getPrice() >= minPrice && p.getPrice() <= maxPrice)
                std::cout << c.getName() << ": " << p.getName() << " $" << p.getPrice() << "\n";
}

void OnlineShop::searchByCategory(std::string categoryName) const {
    for (const auto& c : categories)
        if (c.getName() == categoryName) {
            for (const auto& p : c.getProducts())
                std::cout << p.getName() << " $" << p.getPrice() << "\n";
        }
}
