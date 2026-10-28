#include <iostream>

using namespace std;

int pedirNumero()
{
    int numeroPedido;

    cout << "Ingresa un numero: ";
    cin >> numeroPedido;

    return numeroPedido;
}

void intercambiarNumeros(int& a, int& b)
{
    int temporal;

    temporal = a;
    a = b;
    b = temporal;
}

int main()
{
    int primerNumero = pedirNumero();
    int segundoNumero = pedirNumero();

    cout << "Antes: " << endl;
    cout << "Primer Numero: " << primerNumero << endl;
    cout << "Segundo Numero: " << segundoNumero <<endl;
    cout << endl;

    intercambiarNumeros(primerNumero, segundoNumero);

    cout << "Despues: " << endl;
    cout << "Primer Numero: " << primerNumero << endl;
    cout << "Segundo Numero: " << segundoNumero << endl;

    return 0;
}

