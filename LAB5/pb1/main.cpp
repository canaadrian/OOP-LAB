#include <iostream>
#include "BusStation.h"
#include "Apartment.h"
#include "Car.h"

using namespace std;

int main() {
    Address addr("Main Street", "Craiova");

    Driver d("Mihai", addr);
    Bus bus(d);
    bus.addStation("Center");
    bus.addStation("OldTown");

    BusStation station;
    station.addBus(&bus);

    Student s("Alex", addr, "CS");
    Commuter c("Ion", addr, 101);

    bus.addPassenger(&s);
    bus.addPassenger(&c);

    Mosquito m("M1");
    Apartment apt;
    apt.addMosquito(&m);

    // Move mosquito to bus
    apt.removeMosquito(&m);
    bus.addMosquito(&m);

    cout << "Commuters in bus: " << bus.commuterCount() << endl;
    cout << "Total commuters in station: " << station.totalCommuters() << endl;

    cout << "Is mosquito M1 in bus? " << bus.containsMosquito("M1") << endl;

    return 0;
}
