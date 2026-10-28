#include <iostream>
#include <vector>

using namespace std;

// Two Pointers: aprovechamos que el vector esta ordenado
// para acercarnos desde ambos extremos.
bool existeSuma(const vector<int>& numeros, int objetivo)
{
    int izquierda = 0;
    int derecha = numeros.size() - 1;

    while (izquierda < derecha)
    {
        int suma = numeros[izquierda] + numeros[derecha];

        if (suma == objetivo)
        {
            return true;
        }
        else if (suma < objetivo)
        {
            izquierda++;
        }
        else if (suma > objetivo)
        {
            derecha--;
        }
    }

    return false;
}

int main()
{
    vector<int> numeros = { -10, -3, 1, 4, 6, 8, 12 };
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

    if (existeSuma(numeros, objetivo))
    {
        cout << "Existen dos elementos que suman el valor del objetivo" << endl;
    }
    else
    {
        cout << "No existen dos elementos que sumen el valor del objetivo" << endl;
    }

    return 0;
}

// Complejidad temporal:
// O(n)
//
// Complejidad espacial:
// O(1)
//
// Requisito:
// El vector debe estar ordenado.