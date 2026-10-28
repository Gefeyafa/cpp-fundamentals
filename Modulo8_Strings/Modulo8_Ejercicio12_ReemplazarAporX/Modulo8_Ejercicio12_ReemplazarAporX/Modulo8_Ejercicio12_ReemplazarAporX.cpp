#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;

    cout << "Escriba un texto: ";
    getline(cin, texto);
    cout << endl;

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'a')
        {
            texto[i] = 'x';
        }
    }

    cout << texto;

    return 0;
}