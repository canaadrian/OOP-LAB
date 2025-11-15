#include "Car.h"
#include <algorithm>

Car::Car(Driver d) : Vehicle(d) {}

void Car::addPassenger(Person* p) {
    passengers.push_back(p);
}

void Car::addMosquito(Mosquito* m) {
    mosquitos.push_back(m);
}

bool Car::containsMosquito(std::string id) const {
    for (auto m : mosquitos)
        if (m->getId() == id)
            return true;
    return false;
}
