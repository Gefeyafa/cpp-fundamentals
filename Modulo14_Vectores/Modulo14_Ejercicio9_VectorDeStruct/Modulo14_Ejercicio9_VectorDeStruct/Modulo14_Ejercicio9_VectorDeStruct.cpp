#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Jugador
{
    string nombre;
    int vida;
};

int main()
{
    vector<Jugador> jugadores;
    int cantidad;
    int nJugador = 1;

    cout << "Ingrese la cantidad de jugadores: ";
    cin >> cantidad;
    cin.ignore();

    for (int i = 0; i < cantidad; i++)
    {
        Jugador jugador;

        cout << "Nombre: ";
        getline(cin, jugador.nombre);

        cout << "Vida: ";
        cin >> jugador.vida;
        cin.ignore();

        jugadores.push_back(jugador);

        cout << endl;
    }

    for (const auto& jugador : jugadores)
    {
        cout << "Jugador " << nJugador << endl;
        cout << "Nombre: " << jugador.nombre << endl;
        cout << "Vida: " << jugador.vida << endl;
        nJugador++;
        cout << endl;
    }


    return 0;
}