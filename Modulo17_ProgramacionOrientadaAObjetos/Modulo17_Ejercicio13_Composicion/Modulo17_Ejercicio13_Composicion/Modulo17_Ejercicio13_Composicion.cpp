#include <iostream>
#include <string>

using namespace std;

class Posicion 
{

public:

    int x;
    int y;

    Posicion(int xInicial, int yInicial) : x(xInicial), y(yInicial)
    {

    }
};

class Jugador
{
private:

    string nombre;
    Posicion posicion; //clase dentro de otra clase

public:

    Jugador(string nombreInicial, int x, int y) : nombre(nombreInicial), posicion(x, y)
    {

    }

    void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Posicion: (" << posicion.x << ", " << posicion.y << ")" << endl;
    }
};

int main()
{
    Jugador jugador1("Gerardo", 1, 2);

    jugador1.mostrarInformacion();

    return 0;
}