#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Hashing: guardamos los numeros que ya hemos visto.
bool tieneDuplicados(const vector<int>& numeros)
{
    unordered_set<int> vistos;

    for (int numero : numeros)
    {
        // Si ya existe en el set, encontramos un duplicado.
        if (vistos.find(numero) != vistos.end())
        {
            return true;
        }

        vistos.insert(numero);
    }

    return false;
}

int main()
{
    vector<int> numeros = { 5, 3, 8, 2, 3, 9 };

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    bool duplicados = tieneDuplicados(numeros);

    if (duplicados)
    {
        cout << "Existen duplicados" << endl;
    }
    else
    {
        cout << "No existen duplicados" << endl;
    }

    return 0;
}

// Complejidad temporal:
// Promedio: O(n)
// Peor caso teorico: O(n^2)
//
// Complejidad espacial:
// O(n)