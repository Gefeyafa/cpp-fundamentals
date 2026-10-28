#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;

    cout << "Escribe un texto: ";
    getline(cin, texto);

    for (int i = 0; i < texto.size(); i++)
    {
        cout << texto[i] << endl;
    }

    return 0;
}

