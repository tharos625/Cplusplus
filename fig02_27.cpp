//Fig. 2.27: fig02_27.cpp (pag. 123)
//Uso de la instruccion continue en un estructura for.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{
	// repite 10 veces
	for (int x = 1; x <= 10; x++) {

		// si x es 5, continua con la sig. iteración del ciclo
		if (x == 5)
			continue;		// evita el resto del codigo en el cuerpo del ciclo

		cout << x << " ";

	}

		cout << "\nUso de continue para evitar que se despliegue el valor 5"
		     << endl;

		return 0;

}
