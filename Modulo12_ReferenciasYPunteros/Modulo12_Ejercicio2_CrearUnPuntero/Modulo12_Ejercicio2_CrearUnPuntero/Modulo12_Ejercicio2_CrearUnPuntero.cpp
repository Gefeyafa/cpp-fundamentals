#include <iostream>

using namespace std;

int main()
{
    int numero = 50;
    int* puntero = &numero;

    cout << "Valor de numero: " << numero << endl;
    cout << "Direccion de numero: " << &numero << endl;
    cout << "Valor almacenado en el puntero: " << puntero << endl;


    return 0;
}
