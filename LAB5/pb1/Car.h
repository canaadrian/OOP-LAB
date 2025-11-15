#pragma once
#include <vector>
#include "Vehicle.h"
#include "Student.h"
#include "Commuter.h"
#include "Mosquito.h"

class Car : public Vehicle {
private:
    std::vector<Person*> passengers;
    std::vector<Mosquito*> mosquitos;

public:
    Car(Driver d = Driver());

    void addPassenger(Person* p);
    void addMosquito(Mosquito* m);

    bool containsMosquito(std::string id) const;
};
