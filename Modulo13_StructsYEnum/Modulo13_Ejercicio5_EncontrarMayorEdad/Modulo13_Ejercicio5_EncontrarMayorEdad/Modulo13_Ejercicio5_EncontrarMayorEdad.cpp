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

Persona obtenerPersonaMayor(const Persona personas[], int TAM)
{
    Persona mayor = personas[0];

    for (int i = 1; i < TAM; i++)
    {
        if (personas[i].edad > mayor.edad)
        {
            mayor = personas[i];
        }
    }
    
    return mayor;
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

    Persona personaMayor = obtenerPersonaMayor(personas, TAM);

    cout << "===== Persona mayor ======" << endl;
    cout << endl;

    mostrarPersona(personaMayor);

    return 0;
}