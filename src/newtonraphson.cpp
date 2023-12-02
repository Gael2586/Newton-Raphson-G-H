//Proyecto Hecho por: 
//Hevan Jesus Viscencio Lopez ----22310198 
//Gael Alexandro Silva Huacuja ---22310258
//26/11/23
#include <iostream>
#include <iomanip> // setprecision
#include <cmath>
#include <Tabula.hpp>
#include <Menu.hpp>
#include <NewtonRaphson.hpp>
#include <DoubleF.hpp>
#include <DoubleFDerivada.hpp>
//#include <windows.h>

using namespace std;

void tabula(double a, double b, int intervalos);	// Muestra un # tabulado de intervalos
double f(double x);	// Retorna el valor de la función evaluada en x
double f_derivada(double x); // Retorna la derivada de la función evaluada en x
void newton_raphson(double x0, double tolerancia, int max_interaciones);	// Función que calcula la raiz aproximada de una función


int main()
{

	
	
	
	// Se ingresa el intervalo
	cout << "Ingrese intervalo a= ";
	cin >> a;
	
	cout << "Ingrese intervalo b= ";
	cin >> b;
	
	cout << "Ingresa el valor para de Fix (entre 1 y 9): ";
    cin >> precision;
	
	if (precision < 1 || precision > 9) {
        cout << "Valor no válido para fix. Se establecerá en 3 por defecto." << endl;
        precision = 3;
    }
	// Se tabulan los valores de f para intervalos intervalos
	tabula(a, b, intervalos);
	
	
	// Se pide elegir una aproximación inicial
	cout << "\nEscoja el punto inicial adecuado Donde haya Cambio de Signo Ejemplo (3/2=  2.5):   x0 =";
	cin >> x0;
	
	// Se pide ingresar el Fix
	cout << "Tolerancia = ";
	cin >> tolerancia;
	
	
	// Newton Raphson
	newton_raphson(x0, tolerancia, max_iteraciones);
	
	cin.get();
	cin.get();
	return 0;
}


/*void tabula(double a, double b, int intervalos)
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


double f(double x)
{
	return x-4*sin(x); //x * exp(cos(x)) / 1.5 - 1;
	//return exp(-x) + 3 * x - 3;
}


double f_derivada(double x)
{
	return 1-(4*cos(x));
	//return -1 * exp(-x) + 3;
}*/


/*void newton_raphson(double x0, double tolerancia, int max_iteraciones)
{
	double x1; // Siguiente aproximación
	double error;	// Diferencia entre dos aproximaciones sucesivas: x1 - x0
	int iteracion; // # de iteraciones
	bool converge = true;
	
	// Se imprimen los valores de la primera aproximación
	cout << "\nAproximacion inicial:\n";
	cout << "x0 = " << x0 << "\n"
		<< "f(x0) = " << f(x0) << "\n"
		<< "f'(x0) = " << f_derivada(x0) << endl;
	
	iteracion = 1;
	do {
	
		if (iteracion > max_iteraciones) {
			converge = false;	// Se sobrepasó la máxima cantidad de iteraciones permitidas
			break;
		
		} else {
			x1 = x0 - f(x0) / f_derivada(x0); // Cálculo de la siguiente aproximación
			error = fabs(x1 - x0);	// El error es la diferencia entre dos aproximaciones sucesivas
			
			// Se imprimen los valores de la siguiente aproximación x1, f(x1), f_derivada(x1), error
			cout << "\a";
			Sleep(500);
			cout << "\n\nIteracion #" << iteracion << endl;
			cout << "\nx" << iteracion << "     = " << x1 << "\n"
				<< "f(x" << iteracion << ")  = " << f(x1) << "\n"
				<< "f'(x" << iteracion << ") = " << f_derivada(x1) << "\n"
				<< "error  = " << error << endl;
			
			// La diferencia entre dos aproximaciones sucesivas es también conocida como error.
			// La condición de terminación consiste en que que el error debe ser <= que la tolerancia dada
			// Si se cumple la condición de terminación, se ha encontrado la raiz aproximada buscada.
			if (error <= tolerancia) { // Condición de terminación
				converge = true;
				break;
			
			// Si no se cumple el criterio de terminación, se pasa a la siguiente iteración
			} else {
				x0 = x1;
				iteracion++;
			}
		}
	
	} while (1);
	
	// Respuesta final
	cout << "\a";
	Sleep(500);
	if (converge) {
		cout << "\n\nPara una tolerancia de " << tolerancia << " la RAIZ APROXIMADA de f es = " << x1 << endl;
	
	} else {
		cout << "\n\nSe sobrepasó la máxima cantidad de iteraciones permitidas" << endl;
	}
}*/