#include <iostream>

using namespace std;

void llenarArreglo(int numeros[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el valor del indice " << i << " : ";
        cin >> numeros[i];
    }
}

int obtenerMayor(int numeros[], int TAM)
{
    int mayorFuncion = numeros[0];

    for (int i = 1; i < TAM; i++)
    {
        if (mayorFuncion < numeros[i])
        {
            mayorFuncion = numeros[i];
        }
    }

    return mayorFuncion;
}

int main()
{
    const int TAM = 5;
    int arreglo[TAM];

    llenarArreglo(arreglo, TAM);

    int mayor = obtenerMayor(arreglo, TAM);
    cout << "El mayor es: " << mayor << endl;

    return 0;
}