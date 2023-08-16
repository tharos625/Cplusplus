//Fig. 2.26: fig02_26.cpp (pag. 122)
//Uso de la instruccion break en un estructura for.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{

	int x;
	
	//repite 10 veces
	for (x = 1; x <= 10; x++ ) {
		
		// si x es 5, termina el ciclo
		if (x == 5)
			break;
		
		cout << x << " ";

	}
	
	cout << "\nInterrupción del ciclo cuando x se volvió " << x << endl;
	
	return 0;
}
