#include <iostream>
#include <string>

using namespace std;

int main()
{
	string texto;
	int numConsonantes = 0;

	cout << "Escribe un texto: ";
	getline(cin, texto);
	cout << endl;

	for (int i = 0; i < texto.size(); i++)
	{
		if (texto[i] >= 'a' && texto[i] <= 'z' ||
			texto[i] >= 'A' && texto[i] <= 'Z')
		{
			if (texto[i] != 'a' && texto[i] != 'A' &&
				texto[i] != 'e' && texto[i] != 'E' &&
				texto[i] != 'i' && texto[i] != 'I' &&
				texto[i] != 'o' && texto[i] != 'O' &&
				texto[i] != 'u' && texto[i] != 'U')
			{
				numConsonantes++;
			}
		}
	}

	cout << "Cantidad de consonantes: " << numConsonantes;

	return 0;
}