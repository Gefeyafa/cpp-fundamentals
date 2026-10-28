#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto, palabra, palabraNueva;
    size_t posicion;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    cout << "Escriba la palabra que desea reemplazar: ";
    getline(cin, palabra);

    cout << "Escriba la palabra que quiere agregar: ";
    getline(cin, palabraNueva);

    posicion = texto.find(palabra);

    if(posicion != string::npos)
    {
        texto.replace(posicion, palabra.size(), palabraNueva);

        cout << texto;
    }
    else
    {
        cout << "No se encontro la palabra: " << palabra;
    }

    return 0;
}
