#include <iostream>

using namespace std;

int pedirNumero()
{
    int numeroPedido;

    cout << "Ingresa un numero: ";
    cin >> numeroPedido;

    return numeroPedido;
}

int sumar(int a, int b)
{
    return a + b;
}

int main()
{
    int resultado;
    int primerNumero, segundoNumero;

    primerNumero = pedirNumero();
    segundoNumero = pedirNumero();

    resultado = sumar(primerNumero, segundoNumero);


    cout << "El resultado de la suma es: " << resultado;

    return 0;
}

/*#include <iostream>

using namespace std;

int pedirNumero()
{
    int numeroPedido;

    cout << "Ingresa un numero: ";
    cin >> numeroPedido;

    return numeroPedido;
}

int sumar(int a = pedirNumero(), int b = pedirNumero())
{
    return a + b;
}

int main()
{
    int resultado = sumar();

    cout << "El resultado de la suma es: " << resultado;

    return 0;
}
*///Otra forma de resolverlo pero no cumple el objetivo del ejercicio
