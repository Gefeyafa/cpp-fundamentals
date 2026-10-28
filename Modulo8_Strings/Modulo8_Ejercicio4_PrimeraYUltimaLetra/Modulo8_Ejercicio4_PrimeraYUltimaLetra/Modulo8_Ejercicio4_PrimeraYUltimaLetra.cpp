#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;

    cout << "Escribe tu nombre: ";
    getline(cin, nombre);

    cout << "Primera letra: " << nombre[0] << endl;
    cout << "Ultima letra: " << nombre[nombre.length() - 1] << endl;

    return 0;
}
