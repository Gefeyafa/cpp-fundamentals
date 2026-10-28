#include <iostream>
#include <string>

using namespace std;

enum class Estado
{
    Vivo,
    Herido,
    Muerto
};

struct Posicion
{
    int x;
    int y;
};

struct Jugador
{
    string nombre;
    int vida;
    Estado estado;
    Posicion posicion;
};

void actualizarEstado(Jugador& jugador)
{
    if (jugador.vida > 80)
    {
        jugador.estado = Estado::Vivo;
    }
    else if (jugador.vida > 0)
    {
        jugador.estado = Estado::Herido;
    }
    else
    {
        jugador.estado = Estado::Muerto;
    }
}

void ingresarJugadores(Jugador& jugador)
{
    cout << "Nombre: ";
    getline(cin, jugador.nombre);
    cout << "Vida: ";
    cin >> jugador.vida;
    cout << "Posicion X: ";
    cin >> jugador.posicion.x;
    cout << "Posicion Y: ";
    cin >> jugador.posicion.y;

    cin.ignore();
}

void mostrarJugadores(const Jugador& jugador)
{
    cout << "Nombre: " << jugador.nombre << endl;
    cout << "Vida: " << jugador.vida << endl;
    if (jugador.estado == Estado::Vivo)
    {
        cout << "Estado: Vivo" << endl;
    }
    else if (jugador.estado == Estado::Herido)
    {
        cout << "Estado: Herido" << endl;
    }
    else
    {
        cout << "Estado: Muerto" << endl;
    }
    cout << "Posicion: (" << jugador.posicion.x << ", " << jugador.posicion.y << ")" << endl;
}

int buscarJugador(const Jugador jugadores[], int TAM, const string& nombre)
{
    for (int i = 0; i < TAM; i++)
    {
        if (jugadores[i].nombre == nombre)
        {
            return i;
        }   
    }

    return -1;
}

void modificarVida(Jugador jugadores[], int TAM)
{
    string nombre;

    cout << "Escriba el nombre del jugador: ";
    getline(cin, nombre);
    int posicion = buscarJugador(jugadores, TAM, nombre);

    if (posicion == -1)
    {
        cout << "Jugador no encontrado" << endl;
    }
    else
    {
        cout << "Ingrese la cantidad de vida: ";
        cin >> jugadores[posicion].vida;

        actualizarEstado(jugadores[posicion]);

        cout << endl;
        cout << "Vida modificada correctamente" << endl;
    }


    cout << endl;
}

int main()
{
    const int TAM = 3;
    Jugador jugadores[TAM];
    int opcion;
    string buscarNombre;
    int posicion;
    bool jugadoresIngresados = false;

    do 
    {
        cout << "--- GESTOR DE JUGADORES ---" << endl;
        cout << endl;
        cout << "1. Ingresar jugadores" << endl;
        cout << "2. Mostrar jugadores" << endl;
        cout << "3. Buscar jugadores" << endl;
        cout << "4. Modificar vida de un jugador" << endl;
        cout << "5. Salir" << endl;
        cout << endl;

        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();
        cout << endl;

        switch (opcion)
        {
            case 1:

                for (int i = 0; i < TAM; i++)
                {
                    cout << "Jugador " << i + 1 << ": " << endl;
                    ingresarJugadores(jugadores[i]);
                    actualizarEstado(jugadores[i]);
                    cout << endl;
                }

                jugadoresIngresados = true;

                break;

            case 2:

                if (!jugadoresIngresados)
                {
                    cout << "Primero debe ingresar los jugadores." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "===== JUGADORES =====" << endl;
                    cout << endl;

                    for (int i = 0; i < TAM; i++)
                    {
                        mostrarJugadores(jugadores[i]);
                        cout << endl;
                    }

                    break;
                }

            case 3:
                
                if (!jugadoresIngresados)
                {
                    cout << "Primero debe ingresar los jugadores." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    cout << "Escriba el nombre que desea buscar: ";
                    getline(cin, buscarNombre);
                    posicion = buscarJugador(jugadores, TAM, buscarNombre);

                    cout << endl;

                    if (posicion != -1)
                    {
                        cout << "Jugador encontrado" << endl;
                        mostrarJugadores(jugadores[posicion]);
                    }
                    else
                    {
                        cout << "Jugador no encontrado" << endl;
                    }
                    cout << endl;

                    break;
                }

            case 4:

                if (!jugadoresIngresados)
                {
                    cout << "Primero debe ingresar los jugadores." << endl;
                    cout << endl;
                    break;
                }
                else
                {
                    modificarVida(jugadores, TAM);
                    break;
                }

            case 5:

                cout << "Ha salido del programa" << endl;
                return 0;

            default:

                cout << "Opcion no valida" << endl;
                break;

        }

    } while (opcion != 5);

    return 0;
}