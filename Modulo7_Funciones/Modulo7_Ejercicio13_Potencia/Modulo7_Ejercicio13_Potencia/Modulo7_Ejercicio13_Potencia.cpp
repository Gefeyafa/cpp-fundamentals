#include <iostream>

using namespace std;

int potencia(int base, int exponente)
{
    int resultado = 1;

    for (int i = 1; i <= exponente; i++)
    {
        resultado *= base;
    }

    return resultado;
}

int main()
{
    int base;
    int exponente;

    cout << "Escriba el numero base: ";
    cin >> base;

    cout << "Escriba el exponente: ";
    cin >> exponente;

    cout << endl;

    int resultado = potencia(base, exponente);

    cout << "El resultado es: " << resultado;
}
