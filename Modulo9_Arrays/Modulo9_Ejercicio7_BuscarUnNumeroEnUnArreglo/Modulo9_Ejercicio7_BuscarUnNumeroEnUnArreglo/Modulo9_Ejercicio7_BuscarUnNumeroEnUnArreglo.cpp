#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numeros[TAM];
    int buscarNumero;
    bool numeroEncontrado = false;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << endl;
    cout << "Numero a buscar: ";
    cin >> buscarNumero;

    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] == buscarNumero)
        {
            numeroEncontrado = true;
            break;
        }
    }

    if (numeroEncontrado)
    {
        cout << "El numero fue encontrado.";
    }
    else
    {
        cout << "El numero no fue encontrado.";
    }

    return 0;
}