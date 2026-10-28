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

int obtenerMenor(int numeros[], int TAM)
{
    int menorFuncion = numeros[0];

    for (int i = 1; i < TAM; i++)
    {
        if (menorFuncion > numeros[i])
        {
            menorFuncion = numeros[i];
        }
    }

    return menorFuncion;
}

int main()
{
    const int TAM = 5;
    int arreglo[TAM];

    llenarArreglo(arreglo, TAM);

    int menor = obtenerMenor(arreglo, TAM);
    cout << "El menor es: " << menor << endl;

    return 0;
}