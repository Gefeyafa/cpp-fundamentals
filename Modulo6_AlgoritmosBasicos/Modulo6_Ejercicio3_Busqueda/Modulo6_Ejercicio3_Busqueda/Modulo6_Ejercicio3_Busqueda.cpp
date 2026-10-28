#include <iostream>

using namespace std;

int main()
{
    int cantidadNumeros, numero;
    bool hayNegativos = false;

    cout << "Cuantos numeros va a ingresar: ";
    cin >> cantidadNumeros;
    cout << endl;

    for (int i = 1; i <= cantidadNumeros; i++)
    {
        cout << "Numero " << i << ": ";
        cin >> numero;

        if (numero < 0)
        {
            hayNegativos = true;
        }

    }

    cout << endl;
    
    if (hayNegativos)
    {
        cout << "Si hay numeros negativos.";
    }
    else
    {
        cout << "No hay numeros negativos.";
    }

    return 0;
}