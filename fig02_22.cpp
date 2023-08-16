//Fig. 2.22: fig02_22.cpp (pag. 114)
//Conteo de letras de calificacion.
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//la funcion main comienza
int main()
{
	int calificacion;
	int aContador = 0;
	int bContador = 0;
	int cContador = 0;
	int dContador = 0;
	int fContador = 0;
	
	cout << "Introduzca la calificacion con letra." << endl
	     << "Introduzca el caracter EOF (ctrl + d) para terminar la entrada de datos." << endl;

	//Repite hasta q el usuario digite la secuencia de fin de archivo.
	while ( (calificacion = cin.get() ) != EOF ) {
		
		// determina q calificacion de introdujo
		switch (calificacion) { //estructura switch anidada en un while
			
			case 'A':
			case 'a':
				++aContador;
				break;

			case 'B':
			case 'b':
				++bContador;
				break;

			case 'C':
			case 'c':
				++cContador;
				break;
				
			case 'D':
			case 'd':
				++dContador;
				break;
				
			case 'F':
			case 'f':
				++fContador;
				break;

			case '\n':
			case '\t':
			case ' ':
				break;
			
			default:		//atrapa todos los demas caracteres
				cout << "Se introdujo una letra incorrecta. "
					 << "Introduzca una nueva letra." << endl;
				break;

		} // fin switch

	} // fin while
	
	// despliega el resumen de resultados
	cout << "\n\nLos totales de calificaciones por letra son: "
		 << "\nA: " << aContador
		 << "\nB: " << bContador
		 << "\nC: " << cContador
		 << "\nD: " << dContador
		 << "\nF: " << fContador
		 << endl;

	return 0;

}
