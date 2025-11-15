#include "Person.h"

Person::Person(std::string name, Address address) {
    this->name = name;
    this->address = address;
}

std::string Person::getName() const { return name; }
Address Person::getAddress() const { return address; }
