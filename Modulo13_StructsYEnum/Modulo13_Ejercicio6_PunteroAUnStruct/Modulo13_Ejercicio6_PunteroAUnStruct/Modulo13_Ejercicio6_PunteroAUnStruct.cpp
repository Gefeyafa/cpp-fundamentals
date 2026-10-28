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

    persona1.nombre = "Gerardo";
    persona1.edad = 28;
    persona1.altura = 1.80;

    Persona* puntero = &persona1;

    cout << "Nombre: " << puntero->nombre << endl;
    cout << "Edad: " << puntero->edad << endl;
    cout << "Altura: " << puntero->altura << endl;

    return 0;
}