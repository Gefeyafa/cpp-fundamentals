#include <iostream>
#include <string>

using namespace std;

enum class Estado
{
    Vivo,
    Herido,
    Muerto
};

struct Posicion
{
    int x;
    int y;
};

struct Jugador
{
    string nombre;
    int vida;
    Estado estado;
    Posicion posicion;
};

void actualizarEstado(Jugador &jugador)
{
    if (jugador.vida > 80)
    {
        jugador.estado = Estado::Vivo;
    }
    else if (jugador.vida > 0)
    {
        jugador.estado = Estado::Herido;
    }
    else
    {
        jugador.estado = Estado::Muerto;
    }
}

void mostrarJugador(const Jugador& jugador)
{

    cout << "Nombre: " << jugador.nombre << endl;
    cout << "Vida: " << jugador.vida << endl;
    if (jugador.estado == Estado::Vivo)
    {
        cout << "Estado: Vivo" << endl;
    }
    else if (jugador.estado == Estado::Herido)
    {
        cout << "Estado: Herido" << endl;
    }
    else
    {
        cout << "Estado: Muerto" << endl;
    }
    cout << "Posicion: (" << jugador.posicion.x << ", " << jugador.posicion.y << ")" << endl;
}

int main()
{
    Jugador jugador;

    cout << "Ingrese el nombre: ";
    getline(cin, jugador.nombre);

    cout << "Ingrese la vida: ";
    cin >> jugador.vida;

    cout << "Ingrese la posicion X: ";
    cin >> jugador.posicion.x;

    cout << "Ingrese la posicion Y: ";
    cin >> jugador.posicion.y;

    cout << endl;

    actualizarEstado(jugador);
    mostrarJugador(jugador);

    return 0;
}