#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	map<string, int> edades;
	string nombre;

	edades["Carlos"] = 25;
	edades["Ana"] = 30;
	edades["Pedro"] = 40;

	cout << "Ingrese el nombre que desea buscar: ";
	getline(cin, nombre);
	cout << endl;
	
	if (edades.find(nombre) != edades.end())
	{
		cout << nombre << ": " << edades[nombre] << endl;
	}
	else
	{
		cout << "Persona no encontrada" << endl;
	}


	return 0;
}
