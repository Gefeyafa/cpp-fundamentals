#include <iostream>

using namespace std;

int main()
{
	int numTabla;
	
	cout << "Ingresa el numero de la tabla: ";
	cin >> numTabla;
	cout << endl;

	for (int i = 1; i <= 10; i++)
	{
		cout << numTabla << " x " << i << " = " << numTabla * i << endl;
	}

	return 0;
}
