#include <iostream>
#include <stdexcept>
#include "equation.h"

using namespace std;

int main() {
    double a, b;
    cout << "Enter a and b for ax + b = 0: ";
    cin >> a >> b;

    try {
        cout << "Solution x = " << solveLinear(a, b) << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
