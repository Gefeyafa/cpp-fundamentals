#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    int cantidad;
    int numeroIngresado;
    vector<int> numeros;
    map<int, int> frecuencias;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;
    cout << endl;

    cout << "Ingrese los numeros: " << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ": ";
        cin >> numeroIngresado;

        numeros.push_back(numeroIngresado);
    }
    cout << endl;

    for (int numero : numeros)
    {
        frecuencias[numero]++;
    }

    for (const auto& elemento : frecuencias)
    {
        cout << "El numero " << elemento.first << " aparece " << elemento.second;
        if (elemento.second > 1)
        {
            cout << " veces" << endl;
        }
        else
        {
            cout << " vez" << endl;
        }
    }

    return 0;
}