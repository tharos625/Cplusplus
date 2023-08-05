//Modificado para poder ingresar la cantidad de calificaciones que queramos y sacar el promedio.
//Fig. 2.7: fig02_07.cpp (pag. 84)
//Programa para obtener el promedio de una clase mediante una repetición controlada por un contador.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
	int total;
	
	int contadorCalificacion;
	
	int calificacion;
	double promedio;

	calificacion=1;
	total = 0;
	contadorCalificacion = 0;
	
	while (calificacion != 0) {
		cout << "Introduzca la calificacion: ";
		cin >> calificacion;
		
		total = total + calificacion;
		
		contadorCalificacion = contadorCalificacion + 1;
	}
	
	promedio = total / (contadorCalificacion - 1);
	
	cout << "El promedio de la clase es: " << promedio << endl;
	
	return 0;
}
