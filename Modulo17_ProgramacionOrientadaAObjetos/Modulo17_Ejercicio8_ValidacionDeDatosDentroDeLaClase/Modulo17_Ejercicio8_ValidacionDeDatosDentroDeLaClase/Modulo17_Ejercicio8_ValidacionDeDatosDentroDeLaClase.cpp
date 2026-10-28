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
        if (puntuacionInicial < 0)
        {
            puntuacion = 0;
        }
    }

    string obtenerNombre() const
    {
        return nombre;
    }

    int obtenerPuntuacion() const
    {
        return puntuacion;
    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Puntuacion: " << puntuacion << endl;
    }
};

int main()
{
    const Jugador jugador1("Gerardo", 150);
    const Jugador jugador2("Carlos", -50);

    cout << "Jugador 1: " << endl;
    jugador1.mostrarInformacion();

    cout << endl;

    cout << "Jugador 2: " << endl;
    jugador2.mostrarInformacion();


    return 0;
}