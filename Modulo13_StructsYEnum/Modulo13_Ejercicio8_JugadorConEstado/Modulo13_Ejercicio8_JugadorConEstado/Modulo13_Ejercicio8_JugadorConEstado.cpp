#include <iostream>
#include <string>

using namespace std;

enum Estado
{
    Vivo,
    Herido,
    Muerto
};

struct Jugador
{
    string nombre;
    int vida;
    Estado estado;
};

void mostrarJugador(Jugador& jugador)
{
    cout << "Nombre: " << jugador.nombre << endl;
    cout << "Vida: " << jugador.vida << endl;
    if (jugador.vida > 80)
    {
        jugador.estado = Vivo;
        cout << "Estado: Vivo" << endl;
    }
    else if (jugador.vida > 0)
    {
        jugador.estado = Herido;
        cout << "Estado: Herido" << endl;
    }
    else
    {
        jugador.estado = Muerto;
        cout << "Estado: Muerto" << endl;
    }
}

int main()
{
    Jugador jugador;

    cout << "Ingrese el nombre del jugador: ";
    getline(cin, jugador.nombre);

    cout << "Ingrese la cantidad de vida: ";
    cin >> jugador.vida;

    mostrarJugador(jugador);

    return 0;
}
