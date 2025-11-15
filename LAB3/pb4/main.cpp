#include <iostream>
#include "Equation2.h"
using namespace std;

int main() {
    Equation2 eq(1, -3, 2);
    Results* res = eq.solve();

    if (!res) {
        cout << "No real solutions." << endl;
        return 0;
    }

    cout << "x1 = " << res->getX1() << endl;
    cout << "x2 = " << res->getX2() << endl;

    return 0;
}
