#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int cantidad, numero, buscado, repetido;
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

    repetido = count(numeros.begin(), numeros.end(), buscado);

    cout << "El numero " << buscado << " aparece " << repetido;
    if (repetido == 1)
    {
        cout << " vez";
    }
    else
    {
        cout << " veces";
    }
    cout << endl;

    return 0;
}