#include <iostream>

using namespace std;

void modificarValor(int numero)
{
    numero = 100;
}

void modificarReferencia(int& numero)
{
    numero = 100;
}

void modificarPuntero(int* numero)
{
    *numero = 100;
}

int main()
{
    int numero1 = 10;
    int numero2 = 10;
    int numero3 = 10;

    modificarValor(numero1);
    cout << "Valor: " << numero1 << endl;

    modificarReferencia(numero2);
    cout << "Referencia: " << numero2 << endl;

    modificarPuntero(&numero3);
    cout << "Puntero: " << numero3 << endl;

    return 0;
}