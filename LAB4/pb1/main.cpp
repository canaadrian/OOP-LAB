#include <iostream>
#include "OnlineShop.h"

using namespace std;

int main() {
    OnlineShop shop;

    Category electronics("Electronics");
    electronics.addProduct(Product("Phone", 999, true));
    electronics.addProduct(Product("Laptop", 1500, false));

    Category food("Food");
    food.addProduct(Product("Apple", 1.2, false));
    food.addProduct(Product("Chocolate", 3.5, true));

    shop.addCategory(electronics);
    shop.addCategory(food);

    cout << "\n=== ALL PRODUCTS ===\n";
    shop.displayAllProducts();

    cout << "\n=== PRODUCTS ON PROMOTION ===\n";
    shop.displayPromotionProducts();

    cout << "\n=== SEARCH BY NAME (Phone) ===\n";
    shop.searchByName("Phone");

    cout << "\n=== SEARCH BY PRICE (1 - 1000) ===\n";
    shop.searchByPrice(1, 1000);

    cout << "\n=== SEARCH BY CATEGORY (Food) ===\n";
    shop.searchByCategory("Food");

    return 0;
}
