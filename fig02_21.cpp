//Fig. 2.21: fig02_21.cpp (pag. 111)
//Calculo del interes compuesto.
#include <iostream>

using std::cout;
using std::endl;
using std::ios;
using std::fixed;

#include <iomanip>

using std::setw;
using std::setprecision;

#include <cmath>

//la funcion main comienza
int main()
{
	double monto;
	double principal = 1000.0;
	double tasa = .05;

	// despliega encabezados de las columnas de la tabla
	cout << "Anio" << setw(21) << "Monto del deposito" << endl;

	// asigna el formato de numero de punto flotante
	cout << fixed << setprecision(2);
	
	// calcula el monto del deposito para cada uno de los diez años
	for (int anio = 1; anio <= 10; anio++) {
		
		// calcula el nuevo monto para el año especificado
		monto = principal * pow(1.0 + tasa, anio);
		
		// despliega una fila de la tabla
		cout << setw(4) << anio 
		     << setw(21) << monto << endl;
		
	}
	
	return 0;

}
