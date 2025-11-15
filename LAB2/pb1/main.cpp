#include <iostream>
#include "area.h"

using namespace std;

int main() {
    try {
        string a, b;
        cout << "Enter rectangle sides as strings: ";
        cin >> a >> b;

        double (*rectPtr)(double, double) = rectangleArea;
        cout << "Rectangle area = " << computeArea(a, b, rectPtr) << endl;

        cout << "\nEnter square side as string: ";
        cin >> a;

        double (*sqPtr)(double, double) = squareArea;
        cout << "Square area = " << computeArea(a, "", sqPtr) << endl;
    }
    catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
