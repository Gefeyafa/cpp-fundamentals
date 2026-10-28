#include <iostream>

using namespace std;

bool esPrimo(int a)
{
    bool primo = true;

    if (a < 2)
    {
        primo = false;
    }
    else
    {
        for (int i = 2; i <= (a - 1); i++)
        {
            if (a % i == 0)
            {
                primo = false;
                break;
            }
        }
    }
    return primo;
}

int main()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    bool primo = esPrimo(numero);

    if (primo)
    {
        cout << "Es primo";
    }
    else
    { 
        cout << "No es primo";
    }
}
