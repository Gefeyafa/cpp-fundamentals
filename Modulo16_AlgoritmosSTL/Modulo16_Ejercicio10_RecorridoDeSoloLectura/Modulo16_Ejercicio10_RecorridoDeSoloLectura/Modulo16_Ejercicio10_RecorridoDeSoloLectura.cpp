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

    cout << "Vector original: " << endl;
    for (auto it = numeros.cbegin(); it != numeros.cend(); it++) //cbegin() y cend() es para constantes, no se pueden modificar los valores
    {
        cout << *it << " ";
    }
    cout << endl;

    return 0;
}