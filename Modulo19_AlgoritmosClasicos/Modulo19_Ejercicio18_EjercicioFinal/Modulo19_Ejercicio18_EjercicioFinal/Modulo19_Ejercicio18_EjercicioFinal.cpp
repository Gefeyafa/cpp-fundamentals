#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Hashing: guardamos cada numero junto con el indice donde aparecio.
vector<int> encontrarIndices(const vector<int>& numeros, int objetivo)
{
    unordered_map<int, int> vistos;

    for (int i = 0; i < numeros.size(); i++)
    {
        int faltante = objetivo - numeros[i];

        // Si el faltante ya aparecio, tenemos los dos indices.
        if (vistos.find(faltante) != vistos.end())
        {
            return { vistos[faltante], i };
        }
        else
        {
            vistos[numeros[i]] = i;
        }
    }

    return {};
}

int main()
{
    vector<int> numeros = { 2, 7, 11, 15 };
    int objetivo = 9;

    vector<int> indices = encontrarIndices(numeros, objetivo);

    cout << "Indices: " << endl;

    cout << "{";
    for (int i = 0; i < indices.size(); i++)
    {
        cout << indices[i];

        if (i < indices.size() - 1)
        {
            cout << ", ";
        }
    }
    cout << "}" << endl;

    return 0;
}

// Complejidad temporal:
// Promedio: O(n)
// Peor caso teorico: O(n^2)
//
// Complejidad espacial:
// O(n)