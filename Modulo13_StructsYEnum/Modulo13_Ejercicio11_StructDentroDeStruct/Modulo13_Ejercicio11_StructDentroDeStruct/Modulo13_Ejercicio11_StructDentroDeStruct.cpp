#include <iostream>
#include <string>

using namespace std;

struct Posicion
{
    int x;
    int y;
};

struct Jugador
{
    string nombre;
    int vida;
    Posicion posicion;
};

void ingresarDatos(Jugador& jugador)
{
    cout << "Ingrese el nombre: ";
    getline(cin, jugador.nombre);

    cout << "Ingrese la vida: ";
    cin >> jugador.vida;

    cout << "Ingrese la posicion x: ";
    cin >> jugador.posicion.x;

    cout << "Ingrese la posicion y: ";
    cin >> jugador.posicion.y;
}

void imprimirDatos(const Jugador& jugador)
{
    cout << "Nombre: " << jugador.nombre << endl;
    cout << "Vida: " << jugador.vida << endl;
    cout << "Posicion x: " << jugador.posicion.x << " y: " << jugador.posicion.y << endl;
}

int main()
{
    Jugador jugador;

    ingresarDatos(jugador);
    cout << endl;
    imprimirDatos(jugador);

    return 0;
}