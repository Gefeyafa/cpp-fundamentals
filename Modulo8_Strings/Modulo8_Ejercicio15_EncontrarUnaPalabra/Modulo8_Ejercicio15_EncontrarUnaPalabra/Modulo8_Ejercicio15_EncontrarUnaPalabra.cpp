#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    string palabra;
    int posicion;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    cout << "Escriba la palabra que desea buscar: ";
    getline(cin, palabra);

    posicion = texto.find(palabra); //Devuelve el indice de cuando empieza la palabra

    if (posicion != string::npos)
    {
        cout << "La palabra comienza en la posicion: " << posicion;
    }
    else
    {
        cout << "La palabra no fue encontrada";
    }

    return 0;
}
