#include <iostream>
#include <string>

using namespace std;

int main()
{
	string texto;
	int posicionInicial, cantidadCaracteres;

	cout << "Escriba un texto: ";
	getline(cin, texto);

	cout << "Escriba la posicion: ";
	cin >> posicionInicial;

	cout << "Escriba la cantidad de caracteres: ";
	cin >> cantidadCaracteres;

	cout << endl;

	cout << "Texto: " << texto.substr(posicionInicial, cantidadCaracteres); //extrae el texto (posicion inicial, cantidad de caracteres)

	return 0;
}
