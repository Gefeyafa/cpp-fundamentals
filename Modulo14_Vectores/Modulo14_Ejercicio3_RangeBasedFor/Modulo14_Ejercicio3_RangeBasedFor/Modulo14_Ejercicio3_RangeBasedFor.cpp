#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    int tam;
    int valor;
    int suma = 0;

    cout << "Cuantos numeros desea ingresar: ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << "Numero " << i + 1 << " : ";
        cin >> valor;
        numeros.push_back(valor);
    }
    cout << endl;

    cout << "Numeros: ";
    for (int numero : numeros)
    {
        cout << numero << " ";
    }
    cout << endl;

    cout << "Suma total: ";
    for (int numero : numeros)
    {
        suma += numero;
    }
    cout << suma;

    return 0;
}