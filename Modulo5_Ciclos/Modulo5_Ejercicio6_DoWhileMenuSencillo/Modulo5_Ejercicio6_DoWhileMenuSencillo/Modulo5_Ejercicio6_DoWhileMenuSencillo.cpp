#include <iostream>

using namespace std;

int main()
{
	int opcion = 0;

	do 
	{
		cout << endl;
		cout << "===== MENU =====" << endl << endl;

		cout << "1. Saludar" << endl;
		cout << "2. Mostrar mensaje" << endl;
		cout << "3. Salir" << endl;
		cout << endl;

		cout << "Elige una opcion: ";
		cin >> opcion;

		switch (opcion)
		{
			case 1:
				cout << "Hola usuario!" << endl;
				break;

			case 2:
				cout << "Estas aprendiendo C++." << endl;
				break;

			case 3:
				break;

			default:
				cout << "Opcion invalida" << endl;
		}

	}while(opcion != 3);

	return 0;

}

