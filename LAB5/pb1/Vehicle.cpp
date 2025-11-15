#include "Vehicle.h"

Vehicle::Vehicle(Driver d) : driver(d) {}

void Vehicle::startEngine() { engine.start(); }
