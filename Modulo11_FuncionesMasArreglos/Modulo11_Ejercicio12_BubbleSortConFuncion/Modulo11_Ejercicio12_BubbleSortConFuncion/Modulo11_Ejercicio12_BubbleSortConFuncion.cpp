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

void ordenarArreglo(int arreglo[], int TAM)
{
    int temp;

    for (int i = 0; i < TAM - 1; i++)
    {
        for (int j = 0; j < TAM - 1 - i; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
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
    int arreglo[TAM];

    llenarArreglo(arreglo, TAM);
    cout << endl;

    cout << "Arreglo ingresado: " << endl;
    imprimirArreglo(arreglo, TAM);
    cout << endl;

    ordenarArreglo(arreglo, TAM);

    cout << "Arreglo ordenado: " << endl;
    imprimirArreglo(arreglo, TAM);

    return 0;
}