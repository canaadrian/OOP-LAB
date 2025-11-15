#pragma once
#include <string>

class Product {
private:
    std::string name;
    float price;
    bool promotion;

public:
    Product(std::string name = "", float price = 0, bool promotion = false);

    std::string getName() const;
    float getPrice() const;
    bool isOnPromotion() const;

    void setName(std::string newName);
    void setPrice(float newPrice);
    void setPromotion(bool promo);
};
