#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Jugador
{
    string nombre;
    int vida;
};

void agregarJugador(vector<Jugador>& jugadores)
{
    Jugador jugador;

    cout << "Nombre: ";
    getline(cin, jugador.nombre);

    cout << "Vida: ";
    cin >> jugador.vida;
    cin.ignore();

    jugadores.push_back(jugador);
}

void mostrarJugadores(const vector<Jugador>& jugadores)
{
    int nJugador = 1;

    for (const auto& jugador : jugadores)
    {
        cout << "Jugador " << nJugador << endl;
        cout << "Nombre: " << jugador.nombre << endl;
        cout << "Vida: " << jugador.vida << endl;
        cout << endl;

        nJugador++;
    }
}

int main()
{
    vector<Jugador> jugadores;
    int cantidad;

    cout << "Ingrese la cantidad de jugadores: ";
    cin >> cantidad;
    cin.ignore();
    cout << endl;

    for (int i = 0; i < cantidad; i++)
    {
        cout << "Jugador " << i + 1 << endl;
        agregarJugador(jugadores);
        cout << endl;
    }

    cout << "===== JUGADORES =====" << endl;
    cout << endl;

    mostrarJugadores(jugadores);

    return 0;
}