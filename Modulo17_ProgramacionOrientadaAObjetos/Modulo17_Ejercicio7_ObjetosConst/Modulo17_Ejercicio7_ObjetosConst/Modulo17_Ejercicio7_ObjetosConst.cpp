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

    cout << "Jugador: " << endl;
    cout << endl;
    jugador1.mostrarInformacion();


    return 0;
}