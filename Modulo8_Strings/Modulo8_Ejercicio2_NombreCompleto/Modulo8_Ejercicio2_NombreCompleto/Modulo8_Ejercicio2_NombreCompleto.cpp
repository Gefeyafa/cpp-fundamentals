#include <iostream>
#include <string>

using namespace std;

int main()
{
	string nombre;

	cout << "Escribe tu nombre completo: ";
	getline(cin, nombre);
	cout << endl;

	cout << "Hola " << nombre;
	return 0;
}
