#pragma once
#include <iostream>
#include <iomanip>
#include <cmath>
#include <Funcion.hpp>
#include <FDerivada.hpp>
using namespace std;


class Tabula
{
private:
    int intervalos;
    int puntos;
    double ancho;

protected:
    double a;
    double b;
    double tolerancia; // Tolerancia
    double x0;
    Funcion funcion; // Added instance of Funcion

public:
    Tabula(double a, double b, int intervalos) : a(a), b(b), intervalos(intervalos), funcion(a)
    {
        puntos = intervalos + 1;
        ancho = (b - a) / intervalos;
    }

    void tabula()
    {
        cout << "\n\tx\t\tf(x) " << endl;
        for (int i = 0; i < puntos; i++)
        {
            cout << "\t" << fixed << setprecision(5) << a << "\t\t" << fixed << setprecision(5) << funcion.dobleF() << endl;
            a = a + ancho;
        }
    }

    int mostrarIntervalo()
    {
        return intervalos;
    }

    ~Tabula()
    {
    }
};