#include <iostream>

using namespace std;

int main()
{
	int edad;

	cout << "Escribe tu edad: ";
	cin >> edad;

	if (edad >= 18)
	{
		cout << "Puedes votar.";
	}
	else
	{
		cout << "Aun no puedes votar.";
	}

	return 0;
}