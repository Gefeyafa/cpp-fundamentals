#include <iostream>

using namespace std;

int main()
{
	int edad;
	double altura;

	cout << "Ingresa tu edad: ";
	cin >> edad;
	cout << endl;

	cout << "Ingresa tu altura en metros: ";
	cin >> altura;
	cout << endl << endl;

	if (edad >= 12 && altura >= 1.40)
	{
		cout << "Puedes subir a la montana rusa.";
	}

	else 
	{
		cout << "No puede subir a la montana rusa.";
	}

	return 0;
}