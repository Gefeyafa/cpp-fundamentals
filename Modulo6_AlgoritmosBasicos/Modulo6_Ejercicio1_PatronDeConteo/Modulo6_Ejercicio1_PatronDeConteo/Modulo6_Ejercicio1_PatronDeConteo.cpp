#include <iostream>

using namespace std;

int main()
{
    int contador = 0;
    int cantidadNumeros, numero;

    cout << "Cuantos numeros va a ingresar: ";
    cin >> cantidadNumeros;

    for (int i = 1; i <= cantidadNumeros; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (numero > 0)
        {
            contador++;
        }
    }

    cout << endl;
    cout << "Cantidad de numeros positivos: " << contador;

    return 0;
}
