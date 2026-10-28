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
        if (texto[i] == 'a' || texto[i] == 'A' || texto[i] == 'e' || texto[i] == 'E' || texto[i] == 'i' || texto[i] == 'I' || texto[i] == 'o' || texto[i] == 'O' || texto[i] == 'u' || texto[i] == 'U')
        {
            numeroVocales++;
        }
    }

    cout << "Cantidad de vocales: " << numeroVocales;

    return 0;
}