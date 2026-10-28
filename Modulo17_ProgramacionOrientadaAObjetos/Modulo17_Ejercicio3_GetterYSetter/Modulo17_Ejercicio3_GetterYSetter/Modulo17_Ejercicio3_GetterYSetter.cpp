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

    int obtenerPuntuacion() //getter
    {
        return puntuacion;
    }

    void establecerPuntuacion(int nuevaPuntuacion) // setter
    {
        if (nuevaPuntuacion >= 0)
        {
            puntuacion = nuevaPuntuacion;
        }
    }
};

int main()
{
    Jugador jugador1("Gerardo", 150);
    int nuevaPuntuacion;

    cout << "Ingrese la nueva puntuacion: ";
    cin >> nuevaPuntuacion;
    cout << endl;

    cout << "Jugador: " << jugador1.obtenerNombre() << endl;
    cout << endl;

    cout << "Puntuacion inicial: " << endl;
    cout << jugador1.obtenerPuntuacion() << endl;

    jugador1.establecerPuntuacion(nuevaPuntuacion);

    cout << "Nueva puntuacion: " << endl;
    cout << jugador1.obtenerPuntuacion();


    return 0;
}