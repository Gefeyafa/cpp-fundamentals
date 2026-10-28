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
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] += 32;
        }
    }

    cout << texto;

    return 0;
}
