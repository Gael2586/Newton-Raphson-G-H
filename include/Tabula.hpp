#pragma once 
#include <iostream>
#include <iomanip> 
#include <cmath>
#include <iomanip> 
using namespace std;

class Tabula
{
    
private:
   // Primera aproximación
    #define precision 10
    int intervalos=6;
    int puntos = intervalos + 1;
    double ancho = (b - a) / intervalos;
    
protected:
    double a;
	double b;
	double tolerancia;	// Tolerancia
	double x0; 

void tabula(double a, double b, int intervalos)
{
	int puntos = intervalos + 1;
	
	double ancho = (b - a) / intervalos;
	
	cout << "\n\tx\t\tf(x) " << endl;
	for (int i = 0; i < puntos; i++) {
		//cout << "\t" << a << "\t\t" << f(a) << endl;
		cout << "\t" << fixed << setprecision(precision) << a << "\t\t" << fixed << setprecision(precision) << f(a) << endl;
		a = a + ancho;
	}
}

    ~Tabula()  
    {
    }
};







