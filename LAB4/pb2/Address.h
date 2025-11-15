#pragma once
#include <string>

class Address {
private:
    std::string street;
    std::string city;

public:
    Address(std::string street = "", std::string city = "");
    std::string getStreet() const;
    std::string getCity() const;
};
