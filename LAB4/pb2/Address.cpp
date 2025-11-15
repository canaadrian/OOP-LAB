#include "Address.h"

Address::Address(std::string street, std::string city) {
    this->street = street;
    this->city = city;
}

std::string Address::getStreet() const { return street; }
std::string Address::getCity() const { return city; }
