#include <iostream>
#include <string>

using namespace std;

class Jugador
{
public:
    string nombre;
    int puntuacion;
};

int main()
{
    Jugador jugador1;
    Jugador jugador2;

    jugador1.nombre = "Gerardo";
    jugador1.puntuacion = 150;

    jugador2.nombre = "Carlos";
    jugador2.puntuacion = 200;

    cout << jugador1.nombre << " -> " << jugador1.puntuacion << endl;
    cout << jugador2.nombre << " -> " << jugador2.puntuacion << endl;

    return 0;
}
