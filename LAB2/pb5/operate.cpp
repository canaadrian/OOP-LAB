#include "operate.h"
#include <stdexcept>

int addInt(int a, int b) {
    return a + b;
}

int divInt(int a, int b) {
    if (b == 0) throw std::runtime_error("Division by zero (int)");
    return a / b;
}

double addDouble(double a, double b) {
    return a + b;
}

double divDouble(double a, double b) {
    if (b == 0) throw std::runtime_error("Division by zero (double)");
    return a / b;
}

int operate(int a, int b, int (*fn)(int,int)) {
    if (!fn) throw std::invalid_argument("Null function pointer (int)");
    return fn(a, b);
}

double operate(double a, double b, double (*fn)(double,double)) {
    if (!fn) throw std::invalid_argument("Null function pointer (double)");
    return fn(a, b);
}
