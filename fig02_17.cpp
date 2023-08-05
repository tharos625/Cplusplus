//Fig. 2.17: fig02_17.cpp (pag. 104)
//Repeticion controlada por un contador.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{
	//La inicializacion, la condicion de repeticion y el incremento
	//se incluyen en el encabezado de la estructura for.

	for (int contador = 1; contador <= 10; contador++)
		cout << contador << endl;
	
	return 0;
}
