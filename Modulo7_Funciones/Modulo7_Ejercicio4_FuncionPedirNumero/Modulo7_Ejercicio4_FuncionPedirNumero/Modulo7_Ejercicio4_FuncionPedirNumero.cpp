#include <iostream>

using namespace std;

int pedirNumero()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    return numero;
}

int main()
{
    int resultado = pedirNumero();

    cout << endl;

    cout << "El numero es: " << resultado;

    return 0;
}
