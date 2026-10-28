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

void copiarArreglo(int arreglo1[], int arreglo2[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        arreglo2[i] = arreglo1[i];
    }
}

void imprimirArreglo(int arreglo[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo[i];

        if (i < TAM - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}


int main()
{
    const int TAM = 5;
    int arreglo1[TAM];
    int arreglo2[TAM];

    llenarArreglo(arreglo1, TAM);

    copiarArreglo(arreglo1, arreglo2, TAM);

    cout << "Arreglo 1: " << endl;

    imprimirArreglo(arreglo1, TAM);

    cout << "Arreglo 2: " << endl;
    imprimirArreglo(arreglo2, TAM);

    return 0;
}