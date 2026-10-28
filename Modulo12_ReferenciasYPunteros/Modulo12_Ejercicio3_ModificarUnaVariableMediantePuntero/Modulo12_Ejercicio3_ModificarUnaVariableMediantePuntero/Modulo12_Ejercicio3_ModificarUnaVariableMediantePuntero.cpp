#include <iostream>

using namespace std;

int main()
{
    int numero = 50;
    int* puntero = &numero;

    cout << "Valor original: " << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Valor mediante puntero: " << *puntero << endl;
    cout << endl;

    *puntero = 100;

    cout << "Valor modificado: " << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Valor mediante puntero: " << *puntero << endl;


    return 0;
}
