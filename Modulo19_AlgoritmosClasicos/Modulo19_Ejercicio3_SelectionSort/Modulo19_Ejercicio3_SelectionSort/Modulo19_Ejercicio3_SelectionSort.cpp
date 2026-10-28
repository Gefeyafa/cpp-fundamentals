#include <iostream>
#include <vector>

using namespace std;

// Selection Sort: busca el menor de la parte desordenada
// y lo coloca en la posicion correspondiente.
void selectionSort(vector<int>& numeros)
{
    for (int i = 0; i < numeros.size() - 1; i++)
    {
        int indiceMenor = i;

        for (int j = i + 1; j < numeros.size(); j++)
        {
            if (numeros[indiceMenor] > numeros[j])
            {
                indiceMenor = j;
            }
        }

        swap(numeros[i], numeros[indiceMenor]);
    }
}

int main()
{
    vector<int> numeros = { 5, 3, 8, 1, 4 };

    cout << "Vector original: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    selectionSort(numeros);

    cout << "Selection sort: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// Complejidad temporal:
// Mejor caso: O(n^2)
// Caso promedio: O(n^2)
// Peor caso: O(n^2)
//
// Complejidad espacial:
// O(1)