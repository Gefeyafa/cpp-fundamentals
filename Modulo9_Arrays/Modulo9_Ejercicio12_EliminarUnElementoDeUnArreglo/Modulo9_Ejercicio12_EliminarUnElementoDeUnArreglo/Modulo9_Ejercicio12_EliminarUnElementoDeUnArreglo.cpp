#include <iostream>

using namespace std;

int main()
{
	const int TAM = 5;
	int numeros[TAM];
	int eliminarPosicion;

	for (int i = 0; i < TAM; i++)
	{
		cout << "Digite el numero " << i + 1 << ": ";
		cin >> numeros[i];
	}

	cout << "Digite la posicion que quiere eliminar: ";
	cin >> eliminarPosicion;

	if (eliminarPosicion >= 0 && eliminarPosicion < TAM)
	{
		for (int i = eliminarPosicion; i < TAM - 1; i++)
		{
			numeros[i] = numeros[i + 1];

		}
	}
	else
	{
		cout << "Posicion no valida" << endl;
		return 0;
	}

	for (int i = 0; i < TAM - 1; i++)
	{
		cout << numeros[i];
		if (i < TAM - 2)
		{
			cout << ", ";
		}
	}

	return 0;
}

