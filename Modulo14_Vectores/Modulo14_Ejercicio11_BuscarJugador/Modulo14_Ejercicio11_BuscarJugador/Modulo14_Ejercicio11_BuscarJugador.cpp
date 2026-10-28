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

int buscarJugador(const vector<Jugador>& jugadores, const string& nombreBuscado)
{
    for (int i = 0; i < jugadores.size(); i++)
    {
        if (jugadores[i].nombre == nombreBuscado)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<Jugador> jugadores;
    int cantidad;
    string nombreBuscado;

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
    cout << endl;

    cout << "Nombre del jugador que desea buscar: ";
    getline(cin, nombreBuscado);
    cout << endl;

    int posicion = buscarJugador(jugadores, nombreBuscado);

    if (posicion != -1)
    {
        cout << "=== Jugador encontrado en el indice " << posicion << " ===" << endl;
        cout << "Jugador " << posicion + 1 << endl;
        cout << "Nombre: " << jugadores[posicion].nombre << endl;
        cout << "Vida: " << jugadores[posicion].vida << endl;
    }
    else
    {
        cout << "Jugador no encontrado" << endl;
    }

    return 0;
}