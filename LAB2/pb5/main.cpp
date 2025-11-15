#include <iostream>
#include "operate.h"

using namespace std;

int main() {
    try {
        cout << "Add ints: " << operate(10, 5, addInt) << endl;
        cout << "Divide ints: " << operate(10, 0, divInt) << endl; // throws
    }
    catch (const exception& e) {
        cerr << "INT ERROR: " << e.what() << endl;
    }

    try {
        cout << "Add doubles: " << operate(10.5, 2.2, addDouble) << endl;
        cout << "Divide doubles: " << operate(10.5, 0.0, divDouble) << endl; // throws
    }
    catch (const exception& e) {
        cerr << "DOUBLE ERROR: " << e.what() << endl;
    }

    return 0;
}
