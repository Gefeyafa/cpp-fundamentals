#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Construimos una tabla de frecuencias con todos los valores del vector.
int contarFrecuencia(const vector<int>& numeros, int buscado)
{
    unordered_map<int, int> frecuencia;

    for (int i = 0; i < numeros.size(); i++)
    {
        frecuencia[numeros[i]]++;
    }

    return frecuencia[buscado];
}

int main()
{
    vector<int> numeros = { 4, 2, 4, 3, 2, 4 };
    int buscado;

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Ingrese el numero a buscar: ";
    cin >> buscado;
    cout << endl;

    int frecuencias = contarFrecuencia(numeros, buscado);

    cout << "El numero aparece un total de " << frecuencias;
    if (frecuencias == 1)
    {
        cout << " vez" << endl;
    }
    else
    {
        cout << " veces" << endl;
    }

    return 0;
}

// Complejidad temporal:
// Promedio: O(n)
// Peor caso teorico: O(n^2)
//
// Complejidad espacial:
// O(n)