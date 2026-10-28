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

int sumarArreglo(int numeros[], int TAM)
{
    int sumaFuncion = 0;

    for (int i = 0; i < TAM; i++)
    {
        sumaFuncion += numeros[i];
    }

    return sumaFuncion;
}

int main()
{
    const int TAM = 5;
    int arreglo[TAM];

    llenarArreglo(arreglo, TAM);

    int suma = sumarArreglo(arreglo, TAM);
    cout << "La suma es: " << suma;

    return 0;
}
