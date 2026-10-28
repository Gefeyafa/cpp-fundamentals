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

void invertirArreglo(int arreglo[], int TAM)
{
    int temp;

    for (int i = 0; i < TAM / 2; i++)
    {
        temp = arreglo[i];
        arreglo[i] = arreglo[TAM - 1 - i];
        arreglo[TAM - 1 - i] = temp;
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

    cout << "Arreglo original: " << endl;
    imprimirArreglo(arreglo, TAM);
    cout << endl;

    invertirArreglo(arreglo, TAM);

    cout << "Arreglo invertido: " << endl;
    imprimirArreglo(arreglo, TAM);

    return 0;
}