#include <iostream>

using namespace std;

int main()
{
    int cantidadNumeros, numero;
    int contadorPositivos = 0, contadorNegativos = 0, contadorCeros = 0;
    int mayor, menor;

    cout << "Cuantos numeros desea ingresar: ";
    cin >> cantidadNumeros;
    cout << endl;

    for (int i = 1; i <= cantidadNumeros; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (i == 1)
        {
            mayor = numero;
            menor = numero;
        }

        if (mayor < numero)
        {
            mayor = numero;
        }
        if (menor > numero)
        {
            menor = numero;
        }

        if (numero > 0)
        {
            contadorPositivos++;
        }
        else if (numero < 0)
        {
            contadorNegativos++;
        }
        else
        {
            contadorCeros++;
        }
    }
    cout << endl;

    cout << "Positivos: " << contadorPositivos << endl;
    cout << "Negativos: " << contadorNegativos << endl;
    cout << "Ceros: " << contadorCeros << endl;

    cout << endl;

    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;



    return 0;
}
