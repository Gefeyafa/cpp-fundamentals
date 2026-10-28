#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Jugador
{
    string nombre;
    int vida;
};

void agregarJugador(vector<Jugador>& jugadores)
{
    Jugador jugador;

    cout << "Nombre: ";
    getline(cin, jugador.nombre);
    cout << "Vida: ";
    cin >> jugador.vida;
    cin.ignore();
    cout << endl;

    jugadores.push_back(jugador);
}

void mostrarJugador(const Jugador& jugador)
{
    cout << "Nombre: " << jugador.nombre << endl;
    cout << "Vida: " << jugador.vida << endl;
    cout << endl;
}

void mostrarJugadores(const vector<Jugador>& jugadores)
{
    int nJugador = 1;

    cout << "=== JUGADORES ===" << endl;
    cout << endl;
    for (const auto& jugador : jugadores)
    {
        cout << "Jugador " << nJugador << ": " << endl;
        mostrarJugador(jugador);

        nJugador++;
    }
}

int buscarJugador(const vector<Jugador>& jugadores, const string& nombreBuscado)
{
    for (int i = 0; i < jugadores.size(); i++)
    {
        if (jugadores[i].nombre == nombreBuscado)
        {
            return i;
        }
    }

    return -1;
}

void modificarVida(vector<Jugador>& jugadores, int posicion)
{
    cout << "Vida actual: " << jugadores[posicion].vida << endl;
    cout << endl;
    cout << "Nueva vida: ";
    cin >> jugadores[posicion].vida;
    cin.ignore();
    cout << endl;
}

void eliminarUltimoJugador(vector<Jugador>& jugadores)
{
    jugadores.pop_back();

    cout << "Ultimo jugador eliminado con exito" << endl;
    cout << endl;
}

void mostrarCantidad(const vector<Jugador>& jugadores)
{
    cout << "Cantidad de jugadores: " << jugadores.size() << endl;
    cout << endl;
}

int main()
{
    vector<Jugador> jugadores;
    string nombreBuscado;
    int opcion;
    int posicion;


    do
    {
        cout << "===== GESTOR DE JUGADORES =====" << endl;
        cout << endl;
        cout << "1. Agregar jugador" << endl;
        cout << "2. Mostrar jugadores" << endl;
        cout << "3. Buscar jugador" << endl;
        cout << "4. Modificar vida" << endl;
        cout << "5. Eliminar ultimo jugador" << endl;
        cout << "6. Mostrar cantidad de jugadores" << endl;
        cout << "7. Salir" << endl;
        cout << endl;
        cout << "Selecione una opcion: ";
        cin >> opcion;
        cin.ignore();
        cout << endl;

        switch (opcion)
        {
            case 1:

                agregarJugador(jugadores);

                break;

            case 2:

                if (!jugadores.empty())
                {
                    mostrarJugadores(jugadores);
                }
                else
                {
                    cout << "No hay jugadores registrados" << endl;
                    cout << endl;
                }

                break;

            case 3:

                cout << "Escriba el nombre del jugador: ";
                getline(cin, nombreBuscado);
                cout << endl;
                
                posicion = buscarJugador(jugadores, nombreBuscado);

                if (posicion != -1)
                {
                    cout << "Jugador encontrado en el indice: " << posicion << endl;
                    cout << endl;
                    cout << "Jugador " << posicion + 1 << endl;
                    mostrarJugador(jugadores[posicion]);
                }
                else
                {
                    cout << "Jugador no encontrado" << endl;
                    cout << endl;
                }

                break;

            case 4:
               
                cout << "Escriba el nombre del jugador: ";
                getline(cin, nombreBuscado);
                cout << endl;

                posicion = buscarJugador(jugadores, nombreBuscado);

                if (posicion != -1)
                {
                    modificarVida(jugadores, posicion);
                    cout << "Vida modificada con exito" << endl;
                    cout << endl;
                }
                else
                {
                    cout << "Jugador no encontrado" << endl;
                    cout << endl;
                }

                break;

            case 5:

                if (!jugadores.empty())
                {
                    eliminarUltimoJugador(jugadores);
                }
                else
                {
                    cout << "No hay jugadores registrados" << endl;
                    cout << endl;
                }

                break;

            case 6:

                mostrarCantidad(jugadores);
                break;

            case 7:

                cout << "Ha salido del programa" << endl;
                return 0;

            default:
                cout << "Opcion no valida" << endl;
                break;
        }


    } while (opcion != 7);

    return 0;
}