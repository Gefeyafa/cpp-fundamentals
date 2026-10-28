#include <iostream>

using namespace std;

int main()
{
    int numero, resultado;

    cout << "Escribe un numero: ";
    cin >> numero;

    resultado = numero;
    
    cout << endl << endl;

    cout << "Numero original: " << numero << endl;

    resultado *= 2;

    cout << "Doble: " << resultado << endl;

    resultado = numero;
    resultado *= 3;

    cout << "Triple: " << resultado << endl;

    resultado = numero;
    resultado %= 2;

    cout << "Residuo entre 2: " << resultado << endl;

    resultado = numero;
    resultado %= 5;

    cout << "Residuo entre 5: " << resultado << endl;

    return 0;
    
}