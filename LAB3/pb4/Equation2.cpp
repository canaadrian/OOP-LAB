#include "Equation2.h"
#include <cmath>

Equation2::Equation2(float a, float b, float c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

Results* Equation2::solve() {
    float delta = b*b - 4*a*c;
    if (delta < 0) return nullptr;

    float x1 = (-b + sqrt(delta)) / (2*a);
    float x2 = (-b - sqrt(delta)) / (2*a);
    return new Results(x1, x2);
}
