#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
    unordered_map<string, int> puntuaciones;
    string nombre;
    
    puntuaciones["Carlos"] = 1500;
    puntuaciones["Ana"] = 2200;
    puntuaciones["Pedro"] = 900;
    puntuaciones["Gerardo"] = 1800;

    cout << "Ingrese un nombre: ";
    getline(cin, nombre);
    cout << endl;

    if (puntuaciones.find(nombre) != puntuaciones.end())
    {
        cout << "La puntuacion es de: " << puntuaciones[nombre] << endl;
    }
    else
    {
        cout << "Jugador no encontrado" << endl;
    }
    cout << endl;

    cout << "=== Todos los jugadores ===" << endl;
    cout << endl;
    for (const auto& jugador : puntuaciones)
    {
        cout << jugador.first << " -> " << jugador.second << endl;
    }

    return 0;
}
