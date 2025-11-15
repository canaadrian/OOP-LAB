#pragma once
#include "Person.h"

class Commuter : public Person {
private:
    int ticketNumber;

public:
    Commuter(std::string name = "", Address address = Address(), int ticketNumber = 0);
    int getTicket() const;
};
