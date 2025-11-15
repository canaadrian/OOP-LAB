#include "area.h"
#include <stdexcept>
#include <cstdlib>
#include <string>

double parseDouble(const std::string& s) {
    size_t pos = 0;
    double val = 0.0;

    try {
        val = std::stod(s, &pos);
    } catch (...) {
        throw std::invalid_argument("Invalid number: " + s);
    }

    if (pos != s.size()) {
        throw std::invalid_argument("Invalid number: " + s);
    }
    return val;
}

double rectangleArea(double a, double b) {
    return a * b;
}

double squareArea(double a, double b) {
    if (b == 0)
        b = a;
    return a * b;
}

double computeArea(const std::string& s1,
                   const std::string& s2,
                   double (*areaFn)(double, double)) {
    double a = parseDouble(s1);
    double b = (s2.empty() ? 0 : parseDouble(s2));
    return areaFn(a, b);
}
