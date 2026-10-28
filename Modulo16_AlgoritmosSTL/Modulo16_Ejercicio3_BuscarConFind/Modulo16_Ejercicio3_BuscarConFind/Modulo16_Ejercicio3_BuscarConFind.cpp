#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cantidad, numero, buscado;
    vector<int> numeros;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cin >> numero;

        numeros.push_back(numero);
    }
    cout << endl;

    cout << "Numero que desea buscar: ";
    cin >> buscado;
    cout << endl;

    if (find(numeros.begin(), numeros.end(), buscado) != numeros.end()) //Busca dentro de todo el vector, y si devuelve algo distinto de "numeros.end()" significa que encontro el valor
    {
        cout << "Numero encontrado" << endl;
    }
    else
    {
        cout << "Numero no encontrado" << endl;
    }

    return 0;
}