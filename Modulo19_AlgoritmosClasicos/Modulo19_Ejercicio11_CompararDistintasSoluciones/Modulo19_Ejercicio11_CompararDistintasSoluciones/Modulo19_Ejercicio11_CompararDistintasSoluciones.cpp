#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// Usamos hashing para recordar los numeros que ya aparecieron.
bool existeParHash(const vector<int>& numeros, int objetivo)
{
    unordered_set<int> vistos;
    int faltante;

    for (int numero : numeros)
    {
        faltante = objetivo - numero;

        // Si el numero que necesitamos ya aparecio, encontramos el par.
        if (vistos.find(faltante) != vistos.end())
        {
            return true;
        }
        else
        {
            vistos.insert(numero);
        }
    }

    return false;
}

int main()
{
    vector<int> numeros = { 3, 7, 1, 9, 4 };
    int objetivo;

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Ingrese el objetivo: ";
    cin >> objetivo;
    cout << endl;

    bool existePar = existeParHash(numeros, objetivo);

    if (existePar)
    {
        cout << "Si existen 2 numeros que sumado den el valor del objetivo" << endl;
    }
    else
    {
        cout << "No existen 2 numeros que sumado den el valor del objetivo" << endl;
    }

    return 0;
}

// Complejidad temporal:
// Promedio: O(n)
// Peor caso teorico: O(n^2)
//
// Complejidad espacial:
// O(n)