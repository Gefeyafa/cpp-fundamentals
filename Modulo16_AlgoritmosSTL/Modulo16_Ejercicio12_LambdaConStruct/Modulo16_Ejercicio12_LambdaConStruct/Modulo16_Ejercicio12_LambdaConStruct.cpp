#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Jugador
{
    string nombre;
    int puntuacion;
};

int main()
{
    vector<Jugador> jugadores
    {
        {"Gerardo", 150},
        {"Carlos", 200},
        {"Ana", 175},
        {"Luis", 120},
        {"Maria", 250},
    };

    cout << "Vector original: " << endl << endl;
    for (auto jugador : jugadores)
    {
        cout << jugador.nombre << " -> " << jugador.puntuacion << endl;
    }
    cout << endl << endl;

    sort(jugadores.begin(), jugadores.end(),
        [](const Jugador& a, const Jugador& b)
        {
            return a.puntuacion > b.puntuacion;
        });

    cout << "Vector ordenado: " << endl << endl;
    for (auto jugador : jugadores)
    {
        cout << jugador.nombre << " -> " << jugador.puntuacion << endl;
    }

    return 0;
}