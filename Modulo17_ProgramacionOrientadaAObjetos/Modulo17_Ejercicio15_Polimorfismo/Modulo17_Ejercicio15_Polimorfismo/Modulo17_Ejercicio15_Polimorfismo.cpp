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

    virtual void mostrarTipo() const
    {
        cout << "Soy un personaje" << endl;
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

    void mostrarTipo() const override
    {
        cout << "Soy un jugador" << endl;
    }

};

class Enemigo : public Personaje
{

public:
    
    Enemigo(string nombreInicial, int vidaInicial) : Personaje(nombreInicial, vidaInicial)
    {

    }

    void mostrarTipo() const override
    {
        cout << "Soy un enemigo" << endl;
    }
};

int main()
{
    Jugador jugador1("Gerardo", 100, 500);
    Enemigo enemigo1("Enemigo", 100);

    Personaje* personaje1 = &jugador1;
    Personaje* personaje2 = &enemigo1;

    personaje1->mostrarTipo();
    personaje2->mostrarTipo();

    return 0;
}
