#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;

    cout << "Escribe un texto: " << endl;
    getline(cin, texto);
    cout << endl;

    if (!texto.empty())
    {

        if (texto[0] >= 'a' && texto[0] <= 'z')
        {
            texto[0] -= 32; //Consultar tabla de caracteres ASCII
        }
    }

    cout << texto;

    return 0;
}