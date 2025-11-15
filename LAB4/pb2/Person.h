#pragma once
#include <string>
#include "Address.h"

class Person {
protected:
    std::string name;
    Address address;

public:
    Person(std::string name = "", Address address = Address());
    std::string getName() const;
    Address getAddress() const;
};
