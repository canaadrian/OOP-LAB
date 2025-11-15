#pragma once
#include <vector>
#include "Driver.h"
#include "Commuter.h"
#include "Engine.h"

class Bus {
private:
    Driver driver;
    Engine engine;
    std::vector<Commuter> commuters;

public:
    Bus(Driver d);

    void addCommuter(const Commuter& c);
    void showCommuters() const;
    Driver getDriver() const;

    void start();
    void stop();
};
