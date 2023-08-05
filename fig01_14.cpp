//Figura 1.14: fig01_14.cpp (pag. 36)
//Uso de instrucciones if, operadores de relacion,
//y operadores de igualdad.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
	int num1;
	int num2;
	
	cout << "Digite dos enteros, y le dire\n"
         << "las relaciones que satisface: ";
    cin >> num1 >> num2;
    
    if (num1 == num2)
		cout << num1 << " es igual que " << num2 << endl;
	
	if (num1 != num2)
		cout << num1 << " no es igual que " << num2 << endl;
	
	if (num1 < num2)
		cout << num1 << " es menor que " << num2 <<endl;
	
	if (num1 > num2)
		cout << num1 << " es mayor que " << num2 << endl;
	
	return 0;
}
