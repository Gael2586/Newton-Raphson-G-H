#pragma once
#include <iostream>

class DoubleFDerivada
{
private:
    /* data */
public:
    DoubleFDerivada(double x){
        return 1-(4*cos(x));
	    //return -1 * exp(-x) + 3;
    }
    ~DoubleFDerivada() {}
};


