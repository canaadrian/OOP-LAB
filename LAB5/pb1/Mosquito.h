#pragma once
#include <string>

class Mosquito {
private:
    std::string id;

public:
    Mosquito(std::string id = "");
    std::string getId() const;
};
