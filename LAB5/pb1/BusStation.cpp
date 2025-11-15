#include "BusStation.h"

void BusStation::addBus(Bus* b) { buses.push_back(b); }

void BusStation::addStudent(Student* s) { students.push_back(s); }

int BusStation::totalCommuters() const {
    int sum = 0;
    for (auto b : buses)
        sum += b->commuterCount();
    return sum;
}

std::vector<Bus*> BusStation::findBusesStoppingAt(std::string station) const {
    std::vector<Bus*> result;
    for (auto b : buses) {
        for (auto& s : b->getStations()) {
            if (s == station) result.push_back(b);
        }
    }
    return result;
}
