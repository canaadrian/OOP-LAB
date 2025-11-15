#include "Product.h"

Product::Product(std::string name, float price, bool promotion) {
    this->name = name;
    this->price = price;
    this->promotion = promotion;
}

std::string Product::getName() const { return name; }
float Product::getPrice() const { return price; }
bool Product::isOnPromotion() const { return promotion; }

void Product::setName(std::string newName) { name = newName; }
void Product::setPrice(float newPrice) { price = newPrice; }
void Product::setPromotion(bool promo) { promotion = promo; }
