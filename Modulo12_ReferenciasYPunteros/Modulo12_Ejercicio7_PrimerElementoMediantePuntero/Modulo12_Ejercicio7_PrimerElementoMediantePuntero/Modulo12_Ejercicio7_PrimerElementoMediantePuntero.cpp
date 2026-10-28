#include <iostream>

using namespace std;

int main()
{
    int numeros[5] = { 10, 20, 30, 40, 50 };

    cout << "Primer elemento con indice: " << numeros[0] << endl;
    cout << "Primer elemento con puntero: " << *numeros << endl;
    cout << endl;
    cout << "Direccion usando numeros: " << numeros << endl;
    cout << "Direccion usando &numeros[0]: " << &numeros[0] << endl;

    return 0;
}