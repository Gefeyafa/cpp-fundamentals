#include <iostream>
#include <string>

using namespace std;

class Jugador
{
public:
    string nombre;
    int puntuacion;
    
    Jugador(string nombreInicial, int puntuacionInicial)
    {
        nombre = nombreInicial;
        puntuacion = puntuacionInicial;
    }
};

int main()
{
    Jugador jugador1("Gerardo", 150);
    Jugador jugador2("Carlos", 200);

    cout << jugador1.nombre << " -> " << jugador1.puntuacion << endl;
    cout << jugador2.nombre << " -> " << jugador2.puntuacion << endl;

    return 0;
}