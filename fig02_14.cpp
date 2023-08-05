//Fig. 2.14: fig02_14.cpp (pag. 100)
//Preincremento y posincremento.
#include <iostream>

using std::cout;
using std::endl;

//la funcion main comienza
int main()
{
	int c;
	
	// posincremento
	c = 5;
	cout << c << endl;			// despliega 5
	cout << c++ << endl;		// despliega 5 y despues porsincrementa
	cout << c << endl << endl;	// despliega 6
	
	// preincremento
	c = 5;
	cout << c << endl;			// despliega 5
	cout << ++c << endl;		// despliega 6
	cout << c << endl;			// despliega 6
	
	return 0;

}
