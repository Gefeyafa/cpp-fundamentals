#include <iostream>
#include <vector>

using namespace std;

// Construye el vector de sumas acumuladas.
vector<int> crearPrefix(const vector<int>& numeros)
{
    vector<int> prefix;

    // Insertamos el primer valor
    prefix.push_back(numeros[0]);

    // Cada posicion contiene la suma de todos los valores anteriores.
    for (int i = 1; i < numeros.size(); i++)
    {
        prefix.push_back(numeros[i] + prefix[i - 1]);
    }

    return prefix;
}

// Calcula la suma de un rango usando el prefix ya construido.
int prefixSum(const vector<int>& prefix, int inicio, int fin)
{
    int suma = 0;

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
    vector<int> numeros = { 2, 4, 1, 7, 3 };
    vector<int> prefix = crearPrefix(numeros);
    int inicio, fin;

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Ingrese el inicio de la suma: ";
    cin >> inicio;
    cout << endl;

    cout << "Ingrese el fin de la suma: ";
    cin >> fin;
    cout << endl;

    // Imprimimos prefix para ver los valores
    cout << "Prefix: " << endl;
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl << endl;

    int suma = prefixSum(prefix, inicio, fin);

    cout << "La suma es: " << suma << endl;

    return 0;
}

// Crear Prefix:
// Complejidad temporal: O(n)
// Complejidad espacial: O(n)
//
// Cada consulta de rango:
// Complejidad temporal: O(1)
// Complejidad espacial: O(1)