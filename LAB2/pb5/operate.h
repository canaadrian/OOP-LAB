#pragma once

int operate(int a, int b, int (*fn)(int,int));
double operate(double a, double b, double (*fn)(double,double));

int addInt(int a, int b);
int divInt(int a, int b);

double addDouble(double a, double b);
double divDouble(double a, double b);
