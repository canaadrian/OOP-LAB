#ifndef EQUATION2_H
#define EQUATION2_H

#include "Results.h"

class Equation2 {
private:
    float a, b, c;

public:
    Equation2(float a, float b, float c);
    Results* solve();
};

#endif
