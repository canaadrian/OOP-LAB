#include "Car.h"
#include <iostream>

Car::Car(Driver driver, Engine engine)
    : driver(driver), engine(engine) {}

void Car::start() {
    engine.start();
    std::cout << "Car started.\n";
}

void Car::park() {
    engine.stop();
    std::cout << "Car parked.\n";
}

Driver Car::getDriver() const {
    return driver;
}
