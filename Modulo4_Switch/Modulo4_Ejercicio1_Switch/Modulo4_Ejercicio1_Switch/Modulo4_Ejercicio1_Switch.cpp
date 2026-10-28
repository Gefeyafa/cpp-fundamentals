#include <iostream>

using namespace std;

int main()
{
	int opcion;

	cout << "===== MENU =====" << endl << endl;

	cout << "1. Sumar" << endl;
	cout << "2. Restar" << endl;
	cout << "3. Multiplicar" << endl;
	cout << "4. Dividir" << endl;
	cout << endl;

	cout << "Elige una opcion: ";
	cin >> opcion;
	cout << endl;

	switch (opcion)
	{
	case 1:
		cout << "Has elegido sumar.";
		break;
	case 2:
		cout << "Has elegido restar.";
		break;
	case 3:
		cout << "Has elegido multiplicar.";
		break;
	case 4:
		cout << "Has elegido dividir.";
		break;
	default:
		cout << "Opcion invalida.";
		break;
	}

	return 0;
}

