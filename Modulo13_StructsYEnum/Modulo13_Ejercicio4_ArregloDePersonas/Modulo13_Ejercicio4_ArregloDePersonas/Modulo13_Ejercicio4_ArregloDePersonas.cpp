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

void mostrarPersona(const Persona& persona)
{
    cout << "Nombre: " << persona.nombre << endl;
    cout << "Edad: " << persona.edad << endl;
    cout << "Altura: " << persona.altura << endl;
}

int main()
{
    const int TAM = 3;
    Persona personas[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "Persona " << i + 1 << ": " << endl;
        llenarPersona(personas[i]);
        cout << endl;
    }

    cout << "===== DATOS DE PERSONAS ======" << endl;
    cout << endl;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Persona " << i + 1 << ": " << endl;
        mostrarPersona(personas[i]);
        cout << endl;
    }

    return 0;
}