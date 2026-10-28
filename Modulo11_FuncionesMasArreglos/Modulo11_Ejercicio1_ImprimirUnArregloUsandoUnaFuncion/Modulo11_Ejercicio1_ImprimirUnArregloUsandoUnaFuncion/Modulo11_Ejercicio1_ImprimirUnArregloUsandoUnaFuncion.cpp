#include <iostream>

using namespace std;

void imprimirArreglo(int numeros[], int TAM )
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

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el valor del indice " << i << " : ";
        cin >> arreglo[i];
    }

    imprimirArreglo(arreglo, TAM);

    return 0;
}
