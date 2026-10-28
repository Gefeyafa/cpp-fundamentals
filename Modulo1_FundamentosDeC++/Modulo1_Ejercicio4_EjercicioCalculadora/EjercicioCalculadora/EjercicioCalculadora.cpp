#include <iostream>
#include <string>

using namespace std;

int main()
{
	int num1, num2;
	int suma, resta, multi, divi;

	cout << "Escribe el primer numero: ";
	cin >> num1;

	cout << "Escribe el segundo numero: ";
	cin >> num2;

	suma = num1 + num2;
	resta = num1 - num2;
	multi = num1 * num2;
	divi = num1 / num2;

	cout << "Primer numero: " << num1 << endl;
	cout << "Segundo numero: " << num2 << endl;

	cout << "Suma: " << suma << endl;
	cout << "Resta: " << resta << endl;
	cout << "Multiplicacion: " << multi << endl;
	cout << "Division: " << divi << endl;

	return 0;

}
