#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cantidad, numero;
    vector<int> numeros;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cin >> numero;

        numeros.push_back(numero);
    }
    cout << endl;

    cout << "Orden original: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    sort(numeros.begin(), numeros.end()); //Ordena de menor a mayor

    cout << "Ordenado de menor a mayor: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    reverse(numeros.begin(), numeros.end()); //Invierte el orden sin ordenar

    cout << "Ordenado de mayor a menor: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}