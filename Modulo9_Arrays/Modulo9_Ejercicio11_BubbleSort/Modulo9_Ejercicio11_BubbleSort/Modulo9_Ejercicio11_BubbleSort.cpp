#include <iostream>

using namespace std;

int main()
{
	const int TAM = 5;
	int numeros[TAM];
	int temp;

	for (int i = 0; i < TAM; i++) //Ingresar valores
	{
		cout << "Ingrese el numero " << i + 1 << ": ";
		cin >> numeros[i];
	}

	for (int i = 0; i < TAM - 1; i++) //Pasadas
	{
		for (int j = 0; j < TAM - 1 - i; j++) // Comparaciones
		{
			if (numeros[j] > numeros[j + 1])
			{
				temp = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < TAM; i++) //Imprimir Valores
	{
		cout << numeros[i];
		
		if (i < TAM - 1)
		{
			cout << ", ";
		} 
	}

	return 0;
}
