#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;

    cout << "Escribe un texto: " << endl;
    getline(cin, texto);
    cout << endl;

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] >= 'a' && texto[i] <= 'z')
        {
            texto[i] -= 32;
        }
    }

    cout << texto;

    return 0;
}
