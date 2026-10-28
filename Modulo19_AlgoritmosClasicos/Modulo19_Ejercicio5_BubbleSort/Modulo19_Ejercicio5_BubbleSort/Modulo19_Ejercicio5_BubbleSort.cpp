#include <iostream>
#include <vector>

using namespace std;

// Bubble Sort compara elementos vecinos y los intercambia
// cuando estan en el orden incorrecto.
void bubbleSort(vector<int>& numeros)
{
    for (int i = 0; i < numeros.size(); i++)
    {
        for (int j = 0; j < numeros.size() - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                swap(numeros[j], numeros[j + 1]);
            }
        }
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

    bubbleSort(numeros);

    cout << "Bubble sort: " << endl;
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