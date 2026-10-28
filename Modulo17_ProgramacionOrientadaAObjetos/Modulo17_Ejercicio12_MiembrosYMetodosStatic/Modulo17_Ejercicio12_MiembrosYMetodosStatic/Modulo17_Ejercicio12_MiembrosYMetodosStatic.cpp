#include <iostream>
#include <string>

using namespace std;

class Jugador
{
private:

    string nombre;
    int puntuacion;

    static int cantidadJugadores;

public:

    Jugador() : nombre("Desconocido"), puntuacion(0)
    {
        cantidadJugadores++;
    }

    Jugador(string nombreInicial, int puntuacionInicial) : nombre(nombreInicial), puntuacion(puntuacionInicial)
    {
        cantidadJugadores++;

        if (puntuacionInicial < 0)
        {
            puntuacion = 0;
        }
    }

    ~Jugador()
    {
        cout << "Destruyendo a " << nombre << endl;
    }

    string obtenerNombre() const
    {
        return nombre;
    }

    int obtenerPuntuacion() const
    {
        return puntuacion;
    }

    static int obtenerCantidadDeJugadores()
    {
        return cantidadJugadores;
    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Puntuacion: " << puntuacion << endl;
    }
    void establecerPuntuacion(int puntuacion)
    {
        if (puntuacion >= 0)
        {
            this->puntuacion = puntuacion;
        }
    }
};

int Jugador::cantidadJugadores = 0; //Se declara fuera de la clase y fuera del main

int main()
{
    Jugador jugador1;
    Jugador jugador2("Gerardo", 150);
    Jugador jugador3("Carlos", 300);


    cout << "Jugador 1: " << endl;
    jugador1.establecerPuntuacion(300);
    jugador1.mostrarInformacion();

    cout << endl;

    cout << "Jugador 2: " << endl;
    jugador2.establecerPuntuacion(-50);
    jugador2.mostrarInformacion();

    cout << endl;

    cout << "Jugador 3: " << endl;
    jugador3.establecerPuntuacion(100);
    jugador3.mostrarInformacion();

    cout << endl;

    cout << "Cantidad de jugadores: " << Jugador::obtenerCantidadDeJugadores() << endl;
    cout << endl;


    return 0;
}