#include <iostream>

using namespace std;

int pedirCantidad()
{
    int cantidadIngresada;

    cout << "Cuantos numeros quiere ingresar: ";
    cin >> cantidadIngresada;

    return cantidadIngresada;
}

int contarPositivos(int repetirCiclo)
{
    int contadorPositivo = 0;
    int numeroIngresado;

    for (int i = 1; i <= repetirCiclo; i++)
    {
        cout << "Ingresa el numero " << i << ": ";
        cin >> numeroIngresado;

        if (numeroIngresado > 0)
        {
            contadorPositivo++;
        }
    }

    return contadorPositivo;
}

int main()
{
    int cantidad = pedirCantidad();
    int numerosPositivos = contarPositivos(cantidad);

    cout << "Numeros positivos: " << numerosPositivos;

    return 0;
}