#include "Bus.h"
#include <algorithm>

Bus::Bus(Driver d) : Vehicle(d) {}

void Bus::addPassenger(Person* p) { passengers.push_back(p); }

int Bus::commuterCount() const { return passengers.size(); }

void Bus::addStation(std::string s) { stations.push_back(s); }

const std::vector<std::string>& Bus::getStations() const { return stations; }

void Bus::addMosquito(Mosquito* m) { mosquitos.push_back(m); }

bool Bus::containsMosquito(std::string id) const {
    for (auto m : mosquitos)
        if (m->getId() == id)
            return true;
    return false;
}
