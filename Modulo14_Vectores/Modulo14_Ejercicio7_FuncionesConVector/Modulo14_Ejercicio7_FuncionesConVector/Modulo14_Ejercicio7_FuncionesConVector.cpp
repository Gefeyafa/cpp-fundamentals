#include <iostream>
#include <vector>

using namespace std;

void agregarNumero(vector<int>& numeros, int numero)
{
    numeros.push_back(numero);
}

void mostrarNumeros(const vector<int>& numeros)
{
    for (const auto& numero : numeros)
    {
        cout << numero << " ";
    }
}

int main()
{
    vector<int> numeros;
    int numero;
    int cantidad;

    cout << "Cuantos numeros desea agregar: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numero;
        agregarNumero(numeros, numero);
    }
    cout << endl;
    
    mostrarNumeros(numeros);

    return 0;
}