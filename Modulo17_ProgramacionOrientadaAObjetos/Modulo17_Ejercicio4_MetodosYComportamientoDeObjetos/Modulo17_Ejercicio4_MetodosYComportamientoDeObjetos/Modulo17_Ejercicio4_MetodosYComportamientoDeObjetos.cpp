#include <iostream>
#include <string>

using namespace std;

class Jugador
{
private:

    string nombre;
    int puntuacion;

public:

    Jugador(string nombreInicial, int puntuacionInicial)
        : nombre(nombreInicial), puntuacion(puntuacionInicial)
    {
    }

    string obtenerNombre()
    {
        return nombre;
    }

    int obtenerPuntuacion()
    {
        return puntuacion;
    }

    void sumarPuntos(int puntos)
    {
        puntuacion += puntos;
    }
};

int main()
{
    Jugador jugador1("Gerardo", 150);

    cout << "Jugador: " << jugador1.obtenerNombre() << endl;
    cout << endl;

    cout << "Puntuacion inicial: " << endl;
    cout << jugador1.obtenerPuntuacion() << endl;

    jugador1.sumarPuntos(50);

    cout << "Nueva puntuacion: " << endl;
    cout << jugador1.obtenerPuntuacion();


    return 0;
}