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

    if (!numeros.empty())
    {
        cout << "Minimo: " << *min_element(numeros.begin(), numeros.end()) << endl; //Busca el elemento de menor valor
        cout << "Maximo: " << *max_element(numeros.begin(), numeros.end()) << endl; //Busca el elemento de mayor valor
    }
    else
    {
        cout << "El vector esta vacio" << endl;
    }

    return 0;
}