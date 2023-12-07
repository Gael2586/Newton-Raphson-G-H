#pragma once
#include <iostream>
#include <iomanip>
#include "Funcion.hpp"
#include "FDerivada.hpp"
using namespace std;

class Menu
{
private:
public:
    Menu() {}
    ~Menu() {}
};

void Mensaje()
{
    cout << "Proyecto Hecho por: \nHevan Jesus Viscencio Lopez ----22310198 \nGael Alexandro Silva Huacuja ---22310258\n\n\n ";
    cout << "\nCalculo de las raices de una función aplicando el método de Newton - Raphson\n";
    cout << "\nUsaremos Esta Funcion F(X) = x - 4 * sin(x)";
    cout << "\nDonde su derivada sería F'(X) = 1 - (4 * cos(x))";
    cout << "\nIngrese el intervalo inicial (Ejemplo 3, -3):";
}