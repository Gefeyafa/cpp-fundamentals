#include <iostream>
#include <vector>

using namespace std;

// Construimos una vez el vector de sumas acumuladas.
vector<int> crearVectorPrefix(const vector<int>& numeros)
{
    vector<int> nuevoVector;

    nuevoVector.push_back(numeros[0]);

    for (int i = 1; i < numeros.size(); i++)
    {
        nuevoVector.push_back(numeros[i] + nuevoVector[i - 1]);
    }

    return nuevoVector;
}

// Cada consulta de rango se resuelve en O(1).
int sumarPrefix(const vector<int>& prefix, int inicio, int fin)
{
    int suma;

    if (inicio > 0)
    {
        suma = prefix[fin] - prefix[inicio - 1];
    }
    else
    {
        suma = prefix[fin];
    }

    return suma;
}

int main()
{
    vector<int> numeros = { 5, 2, 8, 3, 6, 1, 4 };
    vector<int> prefix = crearVectorPrefix(numeros);
    int inicio, fin;
    int consultas;

    cout << "Vector original: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Prefix: " << endl;
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl << endl;

    cout << "Ingrese la cantidad de consultas: ";
    cin >> consultas;
    cout << endl;

    for (int i = 0; i < consultas; i++)
    {
        cout << "Consulta " << i + 1 << ": " << endl;
        cout << "Ingrese el indice del inicio: ";
        cin >> inicio;
        cout << endl;

        cout << "Ingrese el indice del final: ";
        cin >> fin;
        cout << endl;

        int suma = sumarPrefix(prefix, inicio, fin);
        cout << "La suma es de: " << suma << endl << endl;
    }

    return 0;
}

// Complejidad temporal:
// Crear prefix: O(n)
// Cada consulta: O(1)
// q consultas: O(q)
// Total: O(n + q)
//
// Complejidad espacial:
// O(n)