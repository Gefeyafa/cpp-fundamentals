#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int edad;

    cout << "Cual es tu nombre? "; cin >> nombre; cout << endl;
    cout << "Cual es tu edad? "; cin >> edad; cout << endl;

    cout << "Hola " << nombre << "." << endl;
	cout << "Tienes " << edad << " anos." << endl;
    cout << "Bienvenido a C++." << endl;

    return 0;
}
