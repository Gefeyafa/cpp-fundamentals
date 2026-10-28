#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numeros[TAM];
    int buscarNumero;
    int contador = 0;

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
            contador++;
        }
    }

    if (contador > 0)
    {
        cout << "El numero fue encontrado: " << contador << " veces";
    }
    else
    {
        cout << "El numero no fue encontrado.";
    }

    return 0;
}