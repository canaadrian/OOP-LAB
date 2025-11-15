#pragma once

struct nrComplex {
    float a;
    float b;
};

float absValue(float x);
float absValue(const nrComplex& c);
