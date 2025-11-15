#include "Results.h"

Results::Results(float x1, float x2) {
    this->x1 = x1;
    this->x2 = x2;
}

float Results::getX1() const { return x1; }
float Results::getX2() const { return x2; }
