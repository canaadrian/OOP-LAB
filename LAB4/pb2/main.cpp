#include <iostream>
#include "BusStation.h"
using namespace std;

int main() {
    Address addr("Main Street", "Craiova");
    Driver d("Mihai", addr);
    Bus b(d);

    b.addCommuter(Commuter("Alex", addr, 123));
    b.addCommuter(Commuter("Mara", addr, 456));

    BusStation station;
    station.addBus(b);

    cout << "=== Bus Station ===\n";
    station.showBuses();

    cout << "\n=== Commuters ===\n";
    b.showCommuters();

    cout << "\nStarting bus...\n";
    b.start();

    return 0;
}
