#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int arreglo1[TAM];
    int arreglo2[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> arreglo1[i];
    }

    for (int i = 0; i < TAM; i++)
    {
        arreglo2[i] = arreglo1[i];
    }

    cout << endl;

    cout << "Arreglo 1: ";
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo1[i];
        
        if (i < TAM - 1)
        {
            cout << ", ";
        }
    }

    cout << endl;

    cout << "Arreglo 2: ";
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo2[i];
        
        if (i < TAM - 1)
        {
            cout << ", ";
        }
    }

    return 0;
}