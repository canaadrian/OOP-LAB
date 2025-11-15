#include <iostream>
#include "complex.h"

using namespace std;

int main() {
    float x;
    cout << "Enter real number: ";
    cin >> x;
    cout << "|x| = " << absValue(x) << endl;

    nrComplex z;
    cout << "Enter complex number a b: ";
    cin >> z.a >> z.b;
    cout << "|z| = " << absValue(z) << endl;

    return 0;
}
