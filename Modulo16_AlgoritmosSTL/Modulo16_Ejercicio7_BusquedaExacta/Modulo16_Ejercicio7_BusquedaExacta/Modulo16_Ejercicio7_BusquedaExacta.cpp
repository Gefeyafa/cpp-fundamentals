#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cantidad;
    int numero;
    int buscado;
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
    for (int valor : numeros)
    {
        cout << valor << " ";
    }
    cout << endl << endl;

    sort(numeros.begin(), numeros.end());

    cout << "Vector ordenado : " << endl;
    for (int valor : numeros)
    {
        cout << valor << " ";
    }
    cout << endl << endl;

    cout << "Numero a buscar: ";
    cin >> buscado;
    cout << endl << endl;

    auto resultado = lower_bound(numeros.begin(), numeros.end(), buscado);

    if (resultado != numeros.end() && *resultado == buscado)
    {
        cout << "El numero existe" << endl;
    }
    else
    {
        cout << "El numero no existe" << endl;
    }

    return 0;
}