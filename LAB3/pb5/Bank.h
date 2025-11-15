#ifndef BANK_H
#define BANK_H

#include <string>
using namespace std;

class Bank {
private:
    string username = "admin";
    string password = "1234";

    bool logged = false;
    float balance = 0;

    static int userCount;

public:
    Bank();

    bool login(string user, string pass);
    void deposit(float amount);
    void withdraw(float amount);
    float getBalance() const;
    static int getUserCount();
};

#endif
