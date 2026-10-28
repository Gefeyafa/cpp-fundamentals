#include <iostream>

using namespace std;

int main()
{
    int numero = 25;
    double decimal = 3.14;
    char letra = 'A';

    cout << "Valor de numero: " << numero << endl;
    cout << "Direccion de numero: " << &numero << endl;
    cout << endl;

    cout << "Valor de decimal: " << decimal << endl;
    cout << "Direccion de decimal: " << &decimal << endl;
    cout << endl;

    cout << "Valor de letra: " << letra << endl;
    cout << "Direccion de letra: " << &letra << endl;

    return 0;
}
