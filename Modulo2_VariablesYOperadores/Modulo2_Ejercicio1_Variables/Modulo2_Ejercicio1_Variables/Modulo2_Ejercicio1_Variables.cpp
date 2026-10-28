#include <iostream>

using namespace std;

int main()
{
	string nombre;
	int edad;
	double altura;
	char inicial;
	bool licencia;

	cout << "Escribe tu nombre: ";
	cin >> nombre;

	cout << "Escribe tu edad: ";
	cin >> edad;

	cout << "Escribe tu altura en metros: ";
	cin >> altura;

	cout << "Escribe la inicial de tu apellido: ";
	cin >> inicial;

	cout << "Tienes licencia de conducir? (Escribe '1' si si y '0' si no): ";
	cin >> licencia;

	cout << endl << endl;

	cout << "Datos:" << endl << endl;

	cout << "Nombre: " << nombre << endl;
	cout << "Edad: " << edad << endl;
	cout << "Altura: " << altura << endl;
	cout << "Inicial: " << inicial << endl;
	cout << "Tiene licencia: " << licencia << endl;

	return 0;
}
