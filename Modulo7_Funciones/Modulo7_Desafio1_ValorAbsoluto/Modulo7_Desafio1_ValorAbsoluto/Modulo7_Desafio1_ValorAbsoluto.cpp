#include <iostream>

using namespace std;

int valorAbsoluto(int valor)
{
    if (valor < 0)
    {
        valor *= -1;
    }

    return valor;
}

int main()
{
    int valor;

    cout << "Ingresa un numero positivo o negativo: ";
    cin >> valor;

    int resultado = valorAbsoluto(valor);

    cout << "El valor absoluto es: " << resultado;


}
