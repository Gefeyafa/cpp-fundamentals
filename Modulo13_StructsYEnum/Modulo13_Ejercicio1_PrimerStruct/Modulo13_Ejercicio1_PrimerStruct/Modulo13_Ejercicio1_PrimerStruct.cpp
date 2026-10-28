#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double altura;
};

int main()
{
    Persona persona1;

    cout << "Ingrese su nombre: ";
    getline(cin, persona1.nombre);
    cout << "Ingrese su edad: ";
    cin >> persona1.edad;
    cout << "Ingrese su altura en metros: ";
    cin >> persona1.altura;

    cout << endl;

    cout << "===== DATOS DE LA PERSONA =====" << endl;
    cout << endl;
    cout << "Nombre: " << persona1.nombre << endl;
    cout << "Edad: " << persona1.edad << endl;
    cout << "Altura: " << persona1.altura << endl;

    return 0;
}