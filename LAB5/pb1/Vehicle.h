#pragma once
#include "Driver.h"
#include "Engine.h"

class Vehicle {
protected:
    Driver driver;
    Engine engine;

public:
    Vehicle(Driver d = Driver());
    void startEngine();
};
