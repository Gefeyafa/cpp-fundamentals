#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> numeros;
    int valor;

    cout << "Ingrese el primer numero: ";
    cin >> valor;
    numeros.push_back(valor);

    cout << "Ingrese el segundo numero: ";
    cin >> valor;
    numeros.push_back(valor);

    cout << "Ingrese el tercer numero: ";
    cin >> valor;
    numeros.push_back(valor);

    cout << numeros[0] << ", " << numeros[1] << ", " << numeros[2];

    return 0;
}