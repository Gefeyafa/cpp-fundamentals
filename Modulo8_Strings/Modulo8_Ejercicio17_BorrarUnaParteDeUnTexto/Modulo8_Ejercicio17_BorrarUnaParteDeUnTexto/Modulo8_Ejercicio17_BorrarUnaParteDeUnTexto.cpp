#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    size_t posicionInicial, cantidad; //size_t es usado para tamaños e índices porque representan cantidades no negativas

    cout << "Escriba un texto: ";
    getline(cin, texto);

    cout << "Escriba la posicion inicial: ";
    cin >> posicionInicial;

    cout << "Escriba la cantidad de caracteres que desea borrar: ";
    cin >> cantidad;

    cout << endl;

    texto.erase(posicionInicial, cantidad);

    cout << "El texto con los caracteres borrados queda: " << texto;

    return 0;
}