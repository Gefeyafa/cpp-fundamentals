#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero <= 10)
    {
        cout << numero << endl;
        numero++;
    }

    return 0;
}
