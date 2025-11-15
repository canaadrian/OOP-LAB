#include "Bank.h"
#include <iostream>
using namespace std;

int Bank::userCount = 0;

Bank::Bank() {
    userCount++;
}

bool Bank::login(string user, string pass) {
    if (user == username && pass == password) {
        logged = true;
        return true;
    }
    return false;
}

void Bank::deposit(float amount) {
    if (!logged) { cout << "Not logged in.\n"; return; }
    balance += amount;
}

void Bank::withdraw(float amount) {
    if (!logged) { cout << "Not logged in.\n"; return; }
    if (amount > balance) {
        cout << "Insufficient funds.\n";
        return;
    }
    balance -= amount;
}

float Bank::getBalance() const {
    return balance;
}

int Bank::getUserCount() {
    return userCount;
}
