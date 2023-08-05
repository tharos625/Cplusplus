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
	int promedio;

	total = 0;
	contadorCalificacion = 1;
	
	while (contadorCalificacion <= 10) {
		cout << "Introduzca la calificacion: ";
		cin >> calificacion;
		
		total = total + calificacion;
		
		contadorCalificacion = contadorCalificacion + 1;
	}
	
	promedio = total / 10;
	
	cout << "El promedio de la clase es " << promedio << endl;
	
	return 0;
}
