//Fig. 2.20: fig02_20.cpp (pag. 109)
//Sumatoria mediante for.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{
	int suma = 0;

	//suma enteros pares desde 2 hasta 100
	for (int numero = 2; numero <= 100; numero += 2)
		suma += numero;

	cout << "La suma es " << suma << endl;
	return 0;

}
