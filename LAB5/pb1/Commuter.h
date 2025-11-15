#pragma once
#include "Person.h"

class Commuter : public Person {
private:
    int ticket;

public:
    Commuter(std::string name = "", Address addr = Address(), int ticket = 0);
    int getTicket() const;
};
