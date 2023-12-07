#pragma once
#include <iostream>
#include <cmath>
#include "Tabula.hpp"
using namespace std;


class NewtonRaphson
{
private:
	double x1;			 // Siguiente aproximación
	double error;		 // Diferencia entre dos aproximaciones sucesivas: x1 - x0
	int iteracion;		 // # de iteraciones
	bool converge;		 // Removed redundant initialization
	Funcion funcion;	 // Added instance of Funcion
	FDerivada fDerivada; // Added instance of FDerivada

public:
	NewtonRaphson(double x0, double tolerancia, int max_iteraciones) : converge(true), funcion(x0), fDerivada()
	{
		x1 = 0.0;
		error = 0.0;
		iteracion = 1;

		// Se imprimen los valores de la primera aproximación
		cout << "\nAproximacion inicial:\n";
		cout << "x0 = " << x0 << "\n"
			 << "f(x0) = " << funcion.dobleF() << "\n"
			 << "f'(x0) = " << fDerivada.DoubleADerivada(x0) << endl;

		do
		{
			if (iteracion > max_iteraciones)
			{
				converge = false; // Se sobrepasó la máxima cantidad de iteraciones permitidas
				break;
			}
			else
			{
				x1 = x0 - funcion.dobleF() / fDerivada.DoubleADerivada(x0);
				error = fabs(x1 - x0);

				cout << "\a";
				cout << "\n\nIteracion #" << iteracion << endl;
				cout << "\nx" << iteracion << "     = " << x1 << "\n";
				cout << "f(x" << iteracion << ")  = " << funcion.dobleF() << "\n";
				cout << "f'(x" << iteracion << ") = " << fDerivada.DoubleADerivada(x1) << "\n";
				cout << "error  = " << error << endl;

				if (error <= tolerancia)
				{
					converge = true;
					break;
				}
				else
				{
					x0 = x1;
					iteracion++;
				}
			}

		} while (1);

		// Respuesta final
		cout << "\a";
		if (converge)
		{
			cout << "\n\nPara una tolerancia de " << tolerancia << " la RAIZ APROXIMADA de f es = " << x1 << endl;
		}
		else
		{
			cout << "\n\nSe sobrepasó la máxima cantidad de iteraciones permitidas" << endl;
		}
	}

	~NewtonRaphson() {}
};