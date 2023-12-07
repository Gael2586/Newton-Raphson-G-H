#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class FDerivada
{
private:
public:
    double DoubleADerivada(double x)
    {
        return 1 - (4 * cos(x));
    }
    ~FDerivada() {}
};