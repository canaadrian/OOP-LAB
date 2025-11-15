#include "complex.h"
#include <cmath>

float absValue(float x) {
    return (x < 0) ? -x : x;
}

float absValue(const nrComplex& c) {
    return std::sqrt(c.a * c.a + c.b * c.b);
}
