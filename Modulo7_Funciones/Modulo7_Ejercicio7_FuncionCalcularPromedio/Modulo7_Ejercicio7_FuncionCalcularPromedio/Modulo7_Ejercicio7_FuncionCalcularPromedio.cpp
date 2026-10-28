#include <iostream>

using namespace std;

int pedirNumero() 
{
    int numeroPedido;

    cout << "Ingrese un numero: ";
    cin >> numeroPedido;

    return numeroPedido;
}

double calcularPromedio(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}

int main()
{
    int primerNumero = pedirNumero();
    int segundoNumero = pedirNumero();
    int tercerNumero = pedirNumero();

    double promedio = calcularPromedio(primerNumero, segundoNumero, tercerNumero);

    cout << "El promedio es: " << promedio;

    return 0;
}

