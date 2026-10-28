#include <iostream>

using namespace std;

int pedirCantidad()
{
    int cantidadNumeros;

    cout << "Cuantos numeros quiere ingresar: ";
    cin >> cantidadNumeros;

    return cantidadNumeros;
}

void analizarNumeros(int cantidad, int& positivos, int& negativos, int& ceros)
{
    int numeroIngresado;

    for (int i = 1; i <= cantidad; i++)
    {
        cout << "Ingresa el numero " << i << ": ";
        cin >> numeroIngresado;

        if (numeroIngresado > 0)
        {
            positivos++;
        }
        else if (numeroIngresado < 0)
        {
            negativos++;
        }
        else
        {
            ceros++;
        }
    }
}

int main()
{
    int contadorPositivos = 0;
    int contadorNegativos = 0;
    int contadorCeros = 0;

    int cantidad = pedirCantidad();
    analizarNumeros(cantidad, contadorPositivos, contadorNegativos, contadorCeros);

    cout << "Postivos: " << contadorPositivos << endl;
    cout << "Negativos: " << contadorNegativos << endl;
    cout << "Ceros: " << contadorCeros << endl;
    
}
