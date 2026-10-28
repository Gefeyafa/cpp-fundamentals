#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palabra1, palabra2;

    cout << "Escriba la primera palabra: ";
    getline(cin, palabra1);

    cout << "Escriba la segunda palabra: ";
    getline(cin, palabra2);

    int resultado = palabra1.compare(palabra2);

    if (resultado == 0)
    {
        cout << "Las palabras son iguales";
    }
    else if (resultado > 0)
    {
        cout << "La primera palabra va despues alfabeticamente";
    }
    else
    {
        cout << "La primera palabra va antes alfabeticamente";
    }

    return 0;
}
