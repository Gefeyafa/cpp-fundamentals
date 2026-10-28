#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    int contador = 0;

    cout << "Escriba un texto: ";
    getline(cin, texto);

    if (texto[0] != ' ')
    {
        contador++;
    }

    for (int i = 1; i < texto.size(); i++)
    {
        if (texto[i] == 0 && ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')))
        {
            contador++;
        }
        else if (texto[i - 1] == ' ' && ((texto[i] >= 'a' && texto[i] <= 'z') || (texto[i] >= 'A' && texto[i] <= 'Z')))
        {
            contador++;
        }
    }

    cout << "La cantidad de palabras es: " << contador;

    return 0;
}
