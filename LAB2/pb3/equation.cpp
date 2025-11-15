#include "equation.h"
#include <stdexcept>

double solveLinear(double a, double b) {
    if (a == 0) {
        if (b == 0)
            throw std::runtime_error("Infinite solutions (a=b=0)");
        else
            throw std::runtime_error("No solution (a=0, b!=0)");
    }
    return -b / a;
}
