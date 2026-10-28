#include <iostream>
#include <string>

using namespace std;

int main()
{
    int edad;
    string nombre;

    cout << "Escriba su edad: ";
    cin >> edad;
    cin.ignore();

    cout << "Escriba su nombre: ";
    getline(cin, nombre);
    cout << endl;

    cout << "Edad: " << edad << endl;
    cout << "Nombre: " << nombre << endl;

    return 0;
}

