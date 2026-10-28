#include <iostream>

using namespace std;

bool esPar(int dato)
{
    return dato % 2 == 0;
}

int main()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    bool resultado = esPar(numero);

    cout << boolalpha;
    cout << "Es par: " << resultado;
}