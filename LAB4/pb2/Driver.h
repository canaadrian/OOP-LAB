#pragma once
#include "Person.h"

class Driver : public Person {
public:
    Driver(std::string name = "", Address address = Address());
};
