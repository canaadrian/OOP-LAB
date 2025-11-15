#pragma once
#include <vector>
#include "Bus.h"

class BusStation {
private:
    std::vector<Bus> buses;

public:
    void addBus(const Bus& b);
    void showBuses() const;
};
