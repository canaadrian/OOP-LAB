#pragma once
#include <vector>
#include <string>
#include "Vehicle.h"
#include "Commuter.h"
#include "Student.h"
#include "Mosquito.h"

class Bus : public Vehicle {
private:
    std::vector<Person*> passengers;
    std::vector<std::string> stations;
    std::vector<Mosquito*> mosquitos;

public:
    Bus(Driver d = Driver());

    void addPassenger(Person* p);
    int commuterCount() const;

    void addStation(std::string s);
    const std::vector<std::string>& getStations() const;

    void addMosquito(Mosquito* m);
    bool containsMosquito(std::string id) const;
};
