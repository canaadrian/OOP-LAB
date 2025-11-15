#pragma once
#include <string>

double rectangleArea(double a, double b);
double squareArea(double a, double b = 0);
double computeArea(const std::string& s1,
                   const std::string& s2,
                   double (*areaFn)(double, double));

double parseDouble(const std::string& s);
