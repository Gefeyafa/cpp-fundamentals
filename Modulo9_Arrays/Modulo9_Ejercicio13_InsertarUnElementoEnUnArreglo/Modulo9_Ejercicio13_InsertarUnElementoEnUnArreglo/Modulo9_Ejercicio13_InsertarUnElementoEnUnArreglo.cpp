#include <iostream>

using namespace std;

int main()
{
    const int TAM = 6;
    int numeros[TAM];
    int nuevoNumero, posicion;

    for (int i = 0; i < TAM - 1; i++)
    {
        cout << "Ingrese el numero de la posicion " << i << ": ";
        cin >> numeros[i];
    }

    cout << endl;
    cout << "Ingrese el numero que quiere insertar: ";
    cin >> nuevoNumero;
    cout << "Ingrese la posicion: ";
    cin >> posicion;
    cout << endl;

    for (int i = TAM - 1; i > posicion; i--)//Version corregida
    {
        numeros[i] = numeros[i - 1];
    }

    /*for (int i = 0; i < TAM - posicion; i++) //Mi version
    {
        numeros[TAM - i] = numeros[TAM - 1 - i];
    }*/


    numeros[posicion] = nuevoNumero;

    for (int i = 0; i < TAM; i++)
    {
        cout << numeros[i];
        if (i < TAM - 1)
        {
            cout << ", ";
        }
    }

    return 0;
}