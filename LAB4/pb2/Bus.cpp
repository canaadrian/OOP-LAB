#include "Bus.h"
#include <iostream>

Bus::Bus(Driver d) : driver(d) {}

void Bus::addCommuter(const Commuter& c) {
    commuters.push_back(c);
}

void Bus::showCommuters() const {
    for (auto& c : commuters)
        std::cout << c.getName() << " (ticket " << c.getTicket() << ")\n";
}

Driver Bus::getDriver() const {
    return driver;
}

void Bus::start() { engine.start(); }
void Bus::stop() { engine.stop(); }
