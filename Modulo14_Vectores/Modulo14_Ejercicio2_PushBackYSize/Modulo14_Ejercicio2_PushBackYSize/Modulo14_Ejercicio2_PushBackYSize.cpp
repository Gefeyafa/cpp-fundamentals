#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    int tam;
    int valor;

    cout << "Cuantos numeros desea ingresar: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << "Numero " << i + 1 << " : ";
        cin >> valor;
        numeros.push_back(valor);
    }

    cout << endl;
    cout << "Cantidad de elementos: " << numeros.size() << endl;

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i];
        if (i < numeros.size() - 1)
        {
            cout << ", ";
        }
    }

    return 0;
}