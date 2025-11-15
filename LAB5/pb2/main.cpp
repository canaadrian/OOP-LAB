#include <iostream>
#include "Store.h"

using namespace std;

int main() {
    Store store;

    // Add products
    store.getShoesDept().addProduct(new Shoes("Nike Air", 299.99, 42));
    store.getShoesDept().addProduct(new Shoes("Adidas Run", 250, 44));

    store.getToysDept().addProduct(new Toys("Lego Set", 199.99, 6));
    store.getToysDept().addProduct(new Toys("Teddy Bear", 49.99, 1));

    // Display sorted by name
    cout << "\n=== Shoes sorted by name ===\n";
    for (auto p : store.getShoesDept().getProductsSortedByName())
        p->display();

    cout << "\n=== Toys sorted by price ===\n";
    for (auto p : store.getToysDept().getProductsSortedByPrice())
        p->display();

    // Search product
    cout << "\nSearching for 'Nike Air':\n";
    auto p = store.getShoesDept().findProduct("Nike Air");
    if (p) p->display();

    // Create an order
    Order o;
    o.addItem(p);
    o.addItem(store.getToysDept().findProduct("Lego Set"));

    // Display order
    cout << "\n=== Order items ===\n";
    o.display();
    cout << "Order total: " << o.totalValue() << endl;

    store.createOrder(o);

    cout << "\nTotal value of all orders: " 
         << store.totalOrdersValue() << endl;

    return 0;
}
