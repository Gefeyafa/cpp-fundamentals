#include <iostream>

using namespace std;

int fibonacci(int posicion)
{
    int numeroAnterior = 0;
    int numeroActual = 1;
    int resultado;

    if (posicion == 0)
    {
        resultado = 0;
    }
    else if (posicion == 1)
    {
        resultado = 1;
    }
    else
    {
        for (int i = 2; i <= posicion; i++)
        {
            resultado = numeroAnterior + numeroActual;
            numeroAnterior = numeroActual;
            numeroActual = resultado;
        }
        
    }

    return resultado;
}

int main()
{
    int posicion;

    cout << "Escribe la posicion: ";
    cin >> posicion;

    int valores = fibonacci(posicion);
    cout << "Fibonacci: " << valores;
}
