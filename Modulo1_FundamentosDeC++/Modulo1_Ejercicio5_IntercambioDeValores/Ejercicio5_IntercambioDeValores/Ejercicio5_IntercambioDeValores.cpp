#include <iostream>

using namespace std;

int main()
{
	int a, b, temporal;

	cout << "Introduce el primer numero: ";
	cin >> a;

	cout << "Introduce el segundo numero: ";
	cin >> b;

	cout << "Antes:" << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl << endl;

	temporal = a;
	a = b;
	b = temporal;

	cout << "Despues: " << endl;
	cout << "A = " << a << endl;
	cout << "B = " << b << endl << endl;

	return 0;
	
}