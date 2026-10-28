#include <iostream>

using namespace std;

int main()
{
	int calificacion, suma = 0, materias, contador = 1;
	double promedio;

	cout << "Cuantas calificaciones va a ingresar: ";
	cin >> materias;
	cout << endl;

	while (contador <= materias)
	{
		cout << "Calificacion " << contador << ": ";
		cin >> calificacion;
		suma += calificacion;
		contador++;
	}

	cout << endl;
	promedio = (double)suma / materias; //convertimos suma en double para tener un promedio con decimales
	cout << "Promedio: " << promedio;

	return 0;
}
