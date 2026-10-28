#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto, palabra, nuevaPalabra;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    cout << "Escriba la palabra que desea cambiar: ";
    getline(cin,palabra);
    size_t posicion = texto.find(palabra);

    if (posicion != string::npos)
    {
        texto.erase(posicion, palabra.size());

        cout << "Escriba la nueva palabra: ";
        getline(cin, nuevaPalabra);
        texto.insert(posicion, nuevaPalabra);

        cout << texto;
    }
    else
    {
        cout << "La palabra no fue encontrada";
    }

    return 0;
}
