#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double altura;
};

void llenarPersona(Persona& persona)
{
    cout << "Ingrese su nombre: ";
    getline(cin, persona.nombre);
    cout << "Ingrese su edad: ";
    cin >> persona.edad;
    cout << "Ingrese su altura en metros: ";
    cin >> persona.altura;
}

void mostrarPersona(const Persona& persona)
{
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Edad: " << persona.edad << endl;
    cout << "Altura: " << persona.altura << endl;
}

int main()
{
    Persona persona1;

    llenarPersona(persona1);
    cout << endl;
    mostrarPersona(persona1);

    return 0;
}
