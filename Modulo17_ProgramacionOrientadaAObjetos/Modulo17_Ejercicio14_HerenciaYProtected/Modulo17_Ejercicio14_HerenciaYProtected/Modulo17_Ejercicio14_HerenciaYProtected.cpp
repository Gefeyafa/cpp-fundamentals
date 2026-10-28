#include <iostream>
#include <string>

using namespace std;

class Personaje
{
protected:

    string nombre;
    int vida;

public:

    Personaje(string nombreInicial, int vidaInicial) : nombre(nombreInicial), vida(vidaInicial)
    {

    }
};

class Jugador : public Personaje
{
private:

    int puntuacion;

public:

    Jugador(string nombreInicial, int vidaInicial, int puntuacionInicial) : Personaje(nombreInicial, vidaInicial), puntuacion(puntuacionInicial)
    {

    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Vida: " << vida << endl;
        cout << "Puntuacion: " << puntuacion << endl;
    }

};

int main()
{
    Jugador jugador1("Gerardo", 100, 500);

    jugador1.mostrarInformacion();

    return 0;
}
