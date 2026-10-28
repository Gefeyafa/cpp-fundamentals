#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    char letraTemp;

    cout << "Escribe un texto: " << endl << endl;
    getline(cin, texto);

    for (int i = 0; i < texto.size() / 2; i++)
    {
        letraTemp = texto[i];
        texto[i] = texto[texto.size() - 1 - i];
        texto[texto.size() - 1 - i] = letraTemp;
    }

    cout << texto;

    return 0;

}

