#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    int tam;
    int valor;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << "Numero " << i + 1 << " : ";
        cin >> valor;
        numeros.push_back(valor);
    }
    cout << endl;

    cout << "Numeros originales: " << endl;
    for (int numero : numeros)
    {
        cout << numero << " ";
    }
    cout << endl;

    for (int& numero : numeros)
    {
        numero *= 2;
    }

    cout << "Numeros duplicados: " << endl;
    for (int& numero : numeros)
    {
        cout << numero << " ";
    }

    return 0;
}
