#include <iostream>

using namespace std;

int contarDigitos(int a)
{
    int digitos = 0;

    if (a == 0)
    {
        return 1;
    }
    else
    {
        while (a != 0)
        {
            a /= 10;
            digitos++;
        }
    }
    return digitos;
}

int main()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    int resultado = contarDigitos(numero);

    cout << "La cantidad de digitos es: " << resultado;


    return 0;
}
