#include <iostream>

using namespace std;

int main()
{
    int cantidadNumeros, numero;
    int mayor;

    cout << "Cuantos numeros va a ingresar: ";
    cin >> cantidadNumeros;
    cout << endl;

    cout << "Numero 1: ";
    cin >> numero;
    cout << endl;
    mayor = numero;

    for (int i = 2; i <= cantidadNumeros; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (mayor < numero)
        {
            mayor = numero;
        }
    }

    cout << endl;
    cout << "El numero mayor es: " << mayor;

    return 0;
}