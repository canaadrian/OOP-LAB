#include <iostream>
#include "Bank.h"
using namespace std;

int main() {
    Bank user;

    if (!user.login("admin", "1234")) {
        cout << "Login failed." << endl;
        return 0;
    }

    user.deposit(1000);
    user.withdraw(150);

    cout << "Balance: " << user.getBalance() << endl;
    cout << "Total users: " << Bank::getUserCount() << endl;

    return 0;
}
