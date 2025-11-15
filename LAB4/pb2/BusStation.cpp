#include "BusStation.h"
#include <iostream>

void BusStation::addBus(const Bus& b) {
    buses.push_back(b);
}

void BusStation::showBuses() const {
    std::cout << "Bus station contains " << buses.size() << " buses.\n";
    for (auto& b : buses) {
        std::cout << "Bus with driver " << b.getDriver().getName() << "\n";
    }
}
