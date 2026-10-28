#include <iostream>
#include <string>

using namespace std;

class Posicion
{
private:

    int x;
    int y;

public:

    Posicion(int xInicial, int yInicial) : x(xInicial), y(yInicial)
    {

    }

    void mostrarPosicion() const
    {
        cout << "Posicion: (" << x << ", " << y << ")" << endl;
    }

    int obtenerX() const
    {
        return x;
    }

    int obtenerY() const
    {
        return y;
    }
};

class Personaje
{
protected:

    string nombre;
    int vida;
    Posicion posicion;

    static int cantidadPersonajes;

public:

    Personaje(string nombreInicial, int vidaInicial, int x, int y) : nombre(nombreInicial), vida(vidaInicial), posicion(x, y)
    {
        cantidadPersonajes++;

        if (vidaInicial < 0)
        {
            vida = 0;
        }
    }

    static int obtenerCantidadPersonajes()
    {
        return cantidadPersonajes;
    }

    //Getters
    string obtenerNombre() const
    {
        return nombre;
    }

    int obtenerVida() const
    {
        return vida;
    }

    //Setters
    void establecerVida(int vida)
    {
        if (vida < 0)
        {
            vida = 0;
        }

        this->vida = vida;

    }

    void recibirDanio(int danio)
    {
        if (danio > 0)
        {
            establecerVida(vida - danio);
        }
    }

    /*------------------------------------*/

    virtual void mostrarTipo() const
    {
        cout << "-Soy un personaje-" << endl;
    }

    virtual void mostrarInformacion() const
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Vida: " << vida << endl;
        posicion.mostrarPosicion();
    }

    //Destructor
    virtual ~Personaje()
    {

    }

};

class Jugador : public Personaje
{
private:

    int puntuacion;

public:

    Jugador(string nombreInicial, int vidaInicial, int x, int y, int puntuacionInicial) : Personaje(nombreInicial, vidaInicial, x, y), puntuacion(puntuacionInicial)
    {

    }

    void sumarPuntos(int puntos)
    {
        if (puntos > 0)
        {
            puntuacion += puntos;
        }
    }

    int obtenerPuntuacion() const
    {
        return puntuacion;
    }

    void mostrarTipo() const override
    {
        cout << "-Soy un jugador-" << endl;
    }

    void mostrarInformacion() const override
    {
        Personaje::mostrarInformacion();
        cout << "Puntuacion: " << puntuacion << endl;
    }

};

class Enemigo : public Personaje
{
private:

    int danio;

public:

    Enemigo(string nombreInicial, int vidaInicial, int x, int y, int danioInicial) : Personaje(nombreInicial, vidaInicial, x, y), danio(danioInicial)
    {

    }

    int obtenerDanio() const
    {
        return danio;
    }

    void mostrarTipo() const override
    {
        cout << "-Soy un enemigo-" << endl;
    }

    void mostrarInformacion() const override
    {
        Personaje::mostrarInformacion();
        cout << "Danio: " << danio << endl;
    }

};

int Personaje::cantidadPersonajes = 0;

int main()
{
    Jugador jugador1("Gerardo", 100, 10, 5, 500);
    Enemigo enemigo1("Goblin", 60, 20, 10, 15);
    Enemigo enemigo2("Orco", 150, 30, 25, 30);

    Personaje* personaje1 = &jugador1;
    Personaje* personaje2 = &enemigo1;
    Personaje* personaje3 = &enemigo2;

    cout << "Datos Iniciales: " << endl << endl;

    cout << "Cantidad de personajes: " << Personaje::obtenerCantidadPersonajes() << endl;
    cout << endl;


    cout << "=== JUGADOR ===" << endl;
    personaje1->mostrarTipo();
    personaje1->mostrarInformacion();
    cout << endl;

    cout << "=== ENEMIGO ===" << endl;
    personaje2->mostrarTipo();
    personaje2->mostrarInformacion();
    cout << endl;

    cout << "=== ENEMIGO ===" << endl;
    personaje3->mostrarTipo();
    personaje3->mostrarInformacion();
    cout << endl;

    cout << "----------------------------------------------" << endl;

    cout << jugador1.obtenerNombre() << " recibe 50 puntos" << endl << endl;
    jugador1.sumarPuntos(50);
    personaje1->mostrarInformacion();
    cout << endl;

    cout << jugador1.obtenerNombre() << " recibe 30 de danio" << endl << endl;
    jugador1.recibirDanio(30);
    personaje1->mostrarInformacion();
    cout << endl;

    cout << enemigo1.obtenerNombre() << " recibe 20 de danio" << endl << endl;
    enemigo1.recibirDanio(20);
    personaje2->mostrarInformacion();
    cout << endl;

    cout << enemigo2.obtenerNombre() << " recibe 200 de danio" << endl << endl;
    enemigo2.recibirDanio(200);
    personaje3->mostrarInformacion();

    return 0;
}
