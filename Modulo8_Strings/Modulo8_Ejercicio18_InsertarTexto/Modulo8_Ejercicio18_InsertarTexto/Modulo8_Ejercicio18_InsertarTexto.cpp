#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto, nuevoTexto;
    size_t posicion;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    cout << "Escriba una posicion: ";
    cin >> posicion;
    cin.ignore(); // Siempre llamar si hay un "cin" antes de un "getline"

    cout << "Escriba el nuevo texto: ";
    getline(cin, nuevoTexto);

    cout << endl;

    texto.insert(posicion, nuevoTexto);

    cout << texto;

    return 0;
}
