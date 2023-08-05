//Figura 1.6: fig01_06.cpp (pag. 26)
//Programa de suma

#include <iostream>

int main()
{
    int entero1;
    int entero2;
    int suma;

    std::cout << "Digite el primer entero: ";
    std::cin >> entero1;

    std::cout << "Digite el segundo entero: ";
    std::cin >> entero2;

    suma = entero1 + entero2;

    std::cout << "La suma es: " << suma << std::endl;

    return 0;
}