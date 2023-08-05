//Fig. 2.9: fig02_09.cpp (pag. 89)
//Programa para obtener el promedio de una clase mediante una repetición controlada por un centinela.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>

using std::setprecision;

int main()
{
	int total;
	int contadorCalificacion;
	int calificacion;

	double promedio;

	total = 0;
	contadorCalificacion = 0;
	
	cout << "Introduzca la calificacion, -1 para salir: ";
	cin >> calificacion;

	while (calificacion != -1) {
		total = total + calificacion;
		contadorCalificacion = contadorCalificacion + 1;

		cout << "Introduzca la calificacion, -1 para salir: ";
		cin >> calificacion;
		
	}
	
	if (contadorCalificacion != 0 ) {
		
		promedio = static_cast<double>(total) / contadorCalificacion;
	
		cout << "El promedio de la clase es " << setprecision(2) << fixed << promedio << endl;
	
	}
	
	else 
		cout << "No se introdujeron calificaciones";
	
	return 0;
}
