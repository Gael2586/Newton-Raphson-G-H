#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Funcion
{
private:
    double x;

public:
    Funcion(double a) : x(a) {}

    double dobleF()
    {
        return x - 4 * sin(x);
    }

    ~Funcion() {}
};