#include <iostream>

using namespace std;

int pedirNumero()
{
    int numeroPedido;

    cout << "Ingresa un numero: ";
    cin >> numeroPedido;

    return numeroPedido;
}

int mayor(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else 
    {
        return b;
    }
}

int main()
{
    int primerNumero = pedirNumero();
    int segundoNumero = pedirNumero();

    int numeroMayor = mayor(primerNumero, segundoNumero);

    cout << "El numero mayor es: " << numeroMayor;

    return 0;
}
