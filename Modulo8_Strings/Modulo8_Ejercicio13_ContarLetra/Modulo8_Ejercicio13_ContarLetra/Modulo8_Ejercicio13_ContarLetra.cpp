#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    char letra;
    int contador = 0;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    cout << "Escriba una letra: ";
    cin >> letra;

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == letra)
        {
            contador++;
        }
    }

    cout << "La cantidad de esa letra en el texto es: " << contador;

    return 0;
}