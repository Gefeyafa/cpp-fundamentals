#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int arreglo1[TAM];
    int arreglo2[TAM];
    bool iguales = true;

    cout << "Ingrese los valores del primer arreglo: " << endl;

    for (int i = 0; i < TAM; i++)
    {
        cout << i + 1 << ". ";
        cin >> arreglo1[i];
    }

    cout << endl;

    cout << "Ingrese los valores del segundo arreglo: " << endl;

    for (int i = 0; i < TAM; i++)
    {
        cout << i + 1 << ". ";
        cin >> arreglo2[i];
    }

    for (int i = 0; i < TAM; i++)
    {
        if (arreglo1[i] != arreglo2[i])
        {
            iguales = false;
            break;
        }
    }

    if (iguales)
    {
        cout << "Los arreglos son iguales.";
    }
    else
    {
        cout << "Los arreglos son diferentes.";
    }

    return 0;
}
