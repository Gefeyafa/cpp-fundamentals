#include <iostream>

using namespace std;

int main()
{
	int limite = 0, suma = 0;

	cout << "Ingresa el limite: ";
	cin >> limite;
	cout << endl;

	for (int i = 1; i <= limite; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			suma += i;
		}
	}

	cout << endl;
	cout << "Resultado: " << suma;
}

