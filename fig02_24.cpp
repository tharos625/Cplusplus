//Fig. 2.24: fig02_24.cpp (pag. 121)
//Uso de la estructura de repeticion do/while.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{
	int contador = 1;
	
	do {
		cout << contador << " ";
	} while (++contador <= 10);
	
	cout << endl;
	
	return 0;
	
}
