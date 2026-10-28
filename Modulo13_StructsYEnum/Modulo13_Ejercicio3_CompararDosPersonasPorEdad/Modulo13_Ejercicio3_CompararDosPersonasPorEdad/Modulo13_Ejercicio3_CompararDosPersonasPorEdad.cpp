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
    cin.ignore();
}

void mostrarMayorEdad(const Persona& persona1, const Persona& persona2)
{
    if (persona1.edad > persona2.edad)
    {
        cout << persona1.nombre << " tiene mayor edad." << endl;
    }
    else if (persona1.edad < persona2.edad)
    {
        cout << persona2.nombre << " tiene mayor edad." << endl;
    }
    else
    {
        cout << "Ambas personas tienen la misma edad." << endl;
    }
}

int main()
{
    Persona persona1;
    Persona persona2;

    cout << "Persona 1: " << endl;
    llenarPersona(persona1);
    cout << endl;
    cout << "Persona 2: " << endl;
    llenarPersona(persona2);
    cout << endl;

    mostrarMayorEdad(persona1, persona2);

    return 0;
}