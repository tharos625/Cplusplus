//Fig. 2.11: fig02_11.cpp (pag. 98)
//Analisis de los resultados del examen.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//la funcion main comienza
int main()
{
	// variables
	int aprobados = 0;
	int reprobados = 0;
	int contadorEstudiantes = 1;
	int resultado;
	
	// procesa 10 estudiantes
	while (contadorEstudiantes <= 10) {

		// entrada
		cout << "Introduzca resultado (1: aprobado, 2: reprobado): ";
		cin >> resultado;
		
		// si resulado es 1, inc resultado
		if (resultado == 1)
			aprobados = aprobados +1;
		
		else //si resultado no es 1, inc reprobados
			reprobados = reprobados + 1;
		
		// incrementa contadorEstudiantes en 1
		contadorEstudiantes = contadorEstudiantes + 1;
		
	} // fin de while
	
	//fase de terminacion, despliega el nro de aprobados y desaprobados
	cout << "Aprobados " << aprobados << endl;
	cout << "Reprobados " << reprobados << endl;
	
	// si aprob mas de 8, despliega "Aumentar inscripciones"
	if (aprobados > 8 )
		cout << "Aumentar inscripciones" << endl;
	
	return 0;

}
		
