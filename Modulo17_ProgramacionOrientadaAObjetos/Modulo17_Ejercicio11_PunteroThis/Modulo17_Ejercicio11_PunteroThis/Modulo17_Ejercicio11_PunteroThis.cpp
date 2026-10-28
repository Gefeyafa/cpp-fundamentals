#include <iostream>
#include <string>

using namespace std;

class Jugador
{
private:

    string nombre;
    int puntuacion;

public:

    Jugador() : nombre("Desconocido"), puntuacion(0)
    {

    }

    Jugador(string nombreInicial, int puntuacionInicial) : nombre(nombreInicial), puntuacion(puntuacionInicial)
    {
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

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Puntuacion: " << puntuacion << endl;
    }
    void establecerPuntuacion(int puntuacion) //Puntero this
    {
        if (puntuacion >= 0)
        {
            this->puntuacion = puntuacion;
        }
    }
};

int main()
{
    Jugador jugador1;
    Jugador jugador2("Gerardo", 150);

    cout << "Jugador 1: " << endl;
    jugador1.establecerPuntuacion(300);
    jugador1.mostrarInformacion();

    cout << endl;

    cout << "Jugador 2: " << endl;
    jugador2.establecerPuntuacion(-50);
    jugador2.mostrarInformacion();

    cout << endl;

    return 0;
}