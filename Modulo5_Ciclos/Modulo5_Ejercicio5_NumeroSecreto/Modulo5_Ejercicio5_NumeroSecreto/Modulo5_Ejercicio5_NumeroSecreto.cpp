#include <iostream>

using namespace std;

int main()
{
	int numeroElegido = 0;
	int numeroSecreto = 5;

	while (numeroElegido != numeroSecreto)
	{
		cout << "Adivina el numero: ";
		cin >> numeroElegido;
		if (numeroElegido != numeroSecreto)
		{
			cout << "Incorrecto" << endl << endl;
		}
	}

	cout << "Correcto";

	return 0;

}

