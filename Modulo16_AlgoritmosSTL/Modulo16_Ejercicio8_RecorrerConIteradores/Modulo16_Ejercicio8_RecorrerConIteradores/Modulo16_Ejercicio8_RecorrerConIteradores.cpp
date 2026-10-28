#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int cantidad;
    int numero;
    vector<int> numeros;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cin >> numero;

        numeros.push_back(numero);
    }
    cout << endl;

    cout << "Vector: " << endl;
    for (auto it = numeros.begin(); it != numeros.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << endl;

    return 0;
}