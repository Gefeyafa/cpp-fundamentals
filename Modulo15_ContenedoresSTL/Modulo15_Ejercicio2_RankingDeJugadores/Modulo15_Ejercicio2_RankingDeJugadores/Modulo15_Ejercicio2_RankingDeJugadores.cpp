#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<pair<string, int>> jugadores;
    pair <string, int> jugador;
    int nJugadores;

    cout << "Ingrese la cantidad de jugadores: ";
    cin >> nJugadores;
    cin.ignore();

    for (int i = 0; i < nJugadores; i++)
    {
        cout << "Jugador " << i + 1 << ": " << endl;
        cout << "Ingrese el nombre: ";
        getline(cin, jugador.first);
        cout << "Ingrese el puntaje: ";
        cin >> jugador.second;
        cin.ignore();
        cout << endl;

        jugadores.push_back(jugador);
    }

    for (int i = 0; i < nJugadores - 1; i++)
    {
        for (int j = 0; j < nJugadores - i - 1; j++)
        {

            if (jugadores[j].second < jugadores[j + 1].second)
            {
                jugador = jugadores[j];
                jugadores[j] = jugadores[j + 1];
                jugadores[j + 1] = jugador;
            }
        }
    }

    cout << "===== LEADERBOARD =====" << endl;
    cout << endl;
    for (int i = 0; i < nJugadores; i++)
    {
        cout << i + 1 << ". " << jugadores[i].first << " -> " << jugadores[i].second << endl;
    }


    return 0;
}
