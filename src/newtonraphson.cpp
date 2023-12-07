//Hecho por 
//Hevan Jesus Viscencio Lopez   
//Gael Silva
#include <iostream>
#include <iomanip>
#include "Menu.hpp"
#include "NewtonRaphson.hpp"
#include "Tabula.hpp"

using namespace std;

int main()
{
	double a, b, tolerancia, x0;

	// Display the project information
	Mensaje();

	// Input the interval
	cout << "Ingrese intervalo a = ";
	cin >> a;

	cout << "Ingrese intervalo b = ";
	cin >> b;

	// Input the precision (Fix)
	int precision;
	cout << "Ingresa el valor para Fix (entre 1 y 9): ";
	cin >> precision;

	if (precision < 1 || precision > 9)
	{
		// Handle invalid precision value if needed
	}

	// Display the tabulated values of the function for the given interval
	Tabula tabula(a, b, 6); // Assuming 6 as a default value for intervalos
	tabula.tabula();

	// Choose an initial approximation
	cout << "\nEscoja el punto inicial adecuado donde haya cambio de signo. Ejemplo (3/2 = 2.5): x0 = ";
	cin >> x0;

	// Input the tolerance
	cout << "Tolerancia = ";
	cin >> tolerancia;

	// Newton Raphson
	NewtonRaphson newtonRaphson(x0, tolerancia, 100); // Assuming 100 as a default value for max_iteraciones

	cin.get();
	cin.get();
	return 0;
}