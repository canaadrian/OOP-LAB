#include <iostream>
#include "temperature.h"

using namespace std;

int main() {
    float c, f;

    cout << "Enter temperature in Celsius: ";
    cin >> c;
    cout << "Fahrenheit: " << celsiusToFahrenheit(c) << endl;

    cout << "Enter temperature in Fahrenheit: ";
    cin >> f;
    cout << "Celsius: " << fahrenheitToCelsius(f) << endl;

    return 0;
}
