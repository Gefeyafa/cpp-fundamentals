#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cantidad;
    int buscar;
    vector<int> numeros;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        int numero;

        cout << i + 1 << ". ";
        cin >> numero;

        numeros.push_back(numero);
    }
    cout << endl;

    cout << "Numero que desea buscar: ";
    cin >> buscar;
    cout << endl;

    cout << "----------------------------------------------------" << endl;

    cout << "Vector: " << endl;
    for (auto numero : numeros)
    {
        cout << numero << " ";
    }
    cout << endl << endl;

    cout << "Buscar: " << buscar << endl;
    cout << endl;

    auto resultado = find(numeros.cbegin(), numeros.cend(), buscar);

    if (resultado != numeros.cend())
    {
        cout << "El numero esta en el indice: " << resultado - numeros.cbegin() << endl;
    }
    else
    {
        cout << "El numero no existe" << endl;
    }

    return 0;
}
