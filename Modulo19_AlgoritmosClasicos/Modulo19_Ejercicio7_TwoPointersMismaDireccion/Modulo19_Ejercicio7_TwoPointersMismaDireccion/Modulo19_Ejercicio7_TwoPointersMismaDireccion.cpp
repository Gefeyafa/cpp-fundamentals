#include <iostream>
#include <vector>

using namespace std;

// Two Pointers: unico marca la ultima posicion con un valor distinto.
int eliminarDuplicados(vector<int>& numeros)
{
    int unico = 0;

    for (int i = 1; i < numeros.size(); i++)
    {
        int actual = i;

        if (numeros[unico] != numeros[actual])
        {
            unico++;
            numeros[unico] = numeros[actual];
        }
    }

    return unico + 1;
}

int main()
{
    vector<int> numeros = { 1, 1, 2, 2, 2, 4, 5, 5 };

    cout << "Vector original: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    int numUnicos = eliminarDuplicados(numeros);

    cout << "Numeros unicos: " << numUnicos << endl << endl;

    cout << "Vector sin duplicados: " << endl;
    for (int i = 0; i < numUnicos; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// Complejidad temporal:
// O(n)
//
// Complejidad espacial:
// O(1)