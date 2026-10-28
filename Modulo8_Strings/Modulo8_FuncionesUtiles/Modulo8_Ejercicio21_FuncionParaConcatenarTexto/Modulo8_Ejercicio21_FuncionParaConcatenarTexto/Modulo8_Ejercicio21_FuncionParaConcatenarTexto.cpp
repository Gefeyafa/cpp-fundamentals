#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre, apellido;

    cout << "Escriba un nombre: ";
    getline(cin, nombre);
    nombre.append(" ");

    cout << "Escriba un apellido: ";
    getline(cin, apellido);
    nombre.append(apellido);

    cout << endl;

    cout << "Nombre completo: " << nombre;

    return 0;
}
