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

void imprimirArreglo(int numeros[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << "El valor de indice " << i << " es: " << numeros[i] << endl;
    }
}

int main()
{
    const int TAM = 5;
    int arreglo[TAM];

    llenarArreglo(arreglo, TAM);

    imprimirArreglo(arreglo, TAM);

    return 0;
}
