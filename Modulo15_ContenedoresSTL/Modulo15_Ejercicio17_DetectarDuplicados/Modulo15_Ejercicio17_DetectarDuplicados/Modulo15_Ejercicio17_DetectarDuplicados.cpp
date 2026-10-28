#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
	int cantidad;
	int numeroIngresado;
	vector<int> numeros;
	unordered_set<int> vistos;
	bool duplicado = false;

	cout << "Ingrese la cantidad de numeros: ";
	cin >> cantidad;
	cout << endl;

	cout << "Ingrese los numeros: " << endl;
	for (int i = 0; i < cantidad; i++)
	{
		cout << i + 1 << ". ";
		cin >> numeroIngresado;

		numeros.push_back(numeroIngresado);
	}
	cout << endl;

	for (int numero : numeros)
	{
		if (vistos.find(numero) != vistos.end())
		{
			duplicado = true;
			break;
		}
		else
		{

			vistos.insert(numero);
		}
	}

	if (duplicado)
	{
		cout << "Hay numeros duplicados" << endl;
	}
	else
	{
		cout << "No hay numeros duplicados" << endl;
	}

	return 0;
}