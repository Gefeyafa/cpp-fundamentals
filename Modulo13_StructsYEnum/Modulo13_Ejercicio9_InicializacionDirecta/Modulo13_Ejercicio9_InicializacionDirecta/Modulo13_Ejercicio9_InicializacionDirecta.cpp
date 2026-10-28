#include <iostream>
#include <string>

using namespace std;

struct Persona
{
    string nombre;
    int edad;
    double altura;
};

void mostrarPersona(const Persona& persona)
{
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Edad: " << persona.edad << endl;
    cout << "Altura: " << persona.altura << endl;
}

int main()
{
    Persona persona1 = { "Gerardo Cervantes", 28, 1.80 };
    Persona persona2 = { "Machine Gun Kelly", 38, 1.92 };

    cout << "Persona 1:" << endl;
    cout << endl;
    mostrarPersona(persona1);

    cout << endl;

    cout << "Persona 2:" << endl;
    cout << endl;
    mostrarPersona(persona2);


    return 0;
}