#include <iostream>
#include <string>

using namespace std;

int main()
{
    string texto;
    int numeroVocales = 0;

    cout << "Escribe un texto: ";
    getline(cin, texto);
    cout << endl;

    for (int i = 0; i < texto.size(); i++)
    {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u')
        {
            numeroVocales++;
        }
    }

    cout << "Cantidad de vocales: " << numeroVocales;

    return 0;
}
