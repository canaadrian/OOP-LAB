#include "Person.h"

Person::Person(std::string name, Address addr)
    : name(name), address(addr) {}

std::string Person::getName() const { return name; }
Address Person::getAddress() const { return address; }
void Person::setAddress(Address newAddr) { address = newAddr; }
