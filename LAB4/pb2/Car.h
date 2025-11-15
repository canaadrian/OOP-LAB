#pragma once
#include "Driver.h"
#include "Engine.h"

class Car {
private:
    Driver driver;
    Engine engine;

public:
    Car(Driver driver, Engine engine);
    void start();
    void park();
    Driver getDriver() const;
};
