#include <iostream>

using namespace std;

int main()
{
    double saldo, retiro;

    cout << "Ingrese su saldo: ";
    cin >> saldo;
    cout << "Cuanto desea retirar: ";
    cin >> retiro;

    if (saldo >= retiro)
    {
        saldo -= retiro;
        cout << "Retiro realizado con exito." << endl;
    }
    else 
    {
        cout << "Fondos insuficientes." << endl;
    }

    cout << "Saldo restante: " << saldo;

    return 0;
}
