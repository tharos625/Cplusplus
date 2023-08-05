//Fig. 2.16: fig02_16.cpp (pag. 103)
//Repeticion controlada por un contador.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{
	int contador = 0;
	
	while (++contador <= 10) {
		cout << contador << endl;
		//++contador;

	}
}
