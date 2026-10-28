#include <iostream>
#include <vector>

using namespace std;

// Insertion Sort: cada elemento se mueve hacia la izquierda
// hasta quedar en su posicion correcta.
void insertionSort(vector<int>& numeros)
{
    for (int i = 1; i < numeros.size(); i++)
    {
        int actual = i;
        int anterior = i - 1;

        while (anterior >= 0 && numeros[anterior] > numeros[actual])
        {
            swap(numeros[actual], numeros[anterior]);

            actual -= 1;
            anterior -= 1;
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

    insertionSort(numeros);

    cout << "Insertion sort: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// Complejidad temporal:
// Mejor caso: O(n)
// Caso promedio: O(n^2)
// Peor caso: O(n^2)
//
// Complejidad espacial:
// O(1)