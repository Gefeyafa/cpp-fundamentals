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

bool compararArreglos(int arreglo1[], int arreglo2[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        if (arreglo1[i] != arreglo2[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    const int TAM = 5;
    int arreglo1[TAM];
    int arreglo2[TAM];

    cout << "Arreglo 1: " << endl;
    llenarArreglo(arreglo1, TAM);
    cout << endl;

    cout << "Arreglo 2: " << endl;
    llenarArreglo(arreglo2, TAM);
    cout << endl;

    bool iguales = compararArreglos(arreglo1, arreglo2, TAM);

    if (iguales)
    {
        cout << "Los arreglos son iguales." << endl;
    }
    else
    {
        cout << "Los arreglos son diferentes." << endl;
    }

    return 0;
}