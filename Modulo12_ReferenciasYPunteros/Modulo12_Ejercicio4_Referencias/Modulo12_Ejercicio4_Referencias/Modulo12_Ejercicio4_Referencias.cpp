#include <iostream>

using namespace std;

int main()
{
    int numero = 50;
    int& referencia = numero;

    cout << "Valor de numero: " << numero << endl;
    cout << "Valor de referencia: " << referencia << endl;
    cout << endl;

    referencia = 200;

    cout << "Valor de numero: " << numero << endl;
    cout << "Valor de referencia: " << referencia << endl;

    return 0;
}

