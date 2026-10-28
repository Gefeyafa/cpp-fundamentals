#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Jugador
{
    string nombre;
    int puntuacion;
};

void mostrarJugadores(const vector<Jugador>& jugadores)
{
    cout << "=== Jugadores ===" << endl << endl;

    for (auto jugador : jugadores)
    {
        cout << jugador.nombre << " -> " << jugador.puntuacion << endl;
    }
    cout << endl;
}

void ordenarPorPuntuacion(vector<Jugador>& jugadores)
{
    sort(jugadores.begin(), jugadores.end(),
        [](const Jugador& a, const Jugador& b)
        {
            return a.puntuacion > b.puntuacion;
        });

    cout << "Los jugadores han sido ordenados de mayor a menor puntaje" << endl << endl;
}

void buscarJugador(const vector<Jugador>& jugadores)
{
    string buscar;

    cout << "Ingrese el nombre: ";
    getline(cin, buscar);
    cout << endl;

    auto busqueda = find_if(jugadores.begin(), jugadores.end(),
                        [buscar](const Jugador& jugador)
                        {
                            return jugador.nombre == buscar;
                        });

    if (busqueda != jugadores.end())
    {
        cout << "Jugador encontrado:" << endl;
        cout << "Nombre: " << busqueda->nombre << endl;
        cout << "Puntuacion: " << busqueda->puntuacion << endl;
    }
    else
    {
        cout << "Jugador no encontrado" << endl;
    }
    cout << endl;
}

void mostrarMejorPuntuacion(const vector<Jugador>& jugadores)
{
    auto mejorPuntuacion = max_element(jugadores.begin(), jugadores.end(),
        [](const Jugador& a, const Jugador& b)
        {
            return a.puntuacion < b.puntuacion;
        });

    cout << "Jugador con mejor puntuacion: " << endl;
    cout << "Nombre: " << mejorPuntuacion->nombre << endl;
    cout << "Puntuacion: " << mejorPuntuacion->puntuacion << endl;
    cout << endl;
}

void mostrarPeorPuntuacion(const vector<Jugador>& jugadores)
{
    auto peorPuntuacion = min_element(jugadores.begin(), jugadores.end(),
        [](const Jugador& a, const Jugador& b)
        {
            return a.puntuacion < b.puntuacion;
        });

    cout << "Jugador con peor puntuacion: " << endl;
    cout << "Nombre: " << peorPuntuacion->nombre << endl;
    cout << "Puntuacion: " << peorPuntuacion->puntuacion << endl;
    cout << endl;
}

void contarJugadoresConUnaPuntuacion(const vector<Jugador>& jugadores)
{
    int buscarPuntuacion, cuenta;
    cout << "Ingrese una puntuacion: ";
    cin >> buscarPuntuacion;
    cin.ignore();
    cout << endl;

    cuenta = count_if(jugadores.begin(), jugadores.end(), 
        [buscarPuntuacion](const Jugador& jugador)
        {
            return jugador.puntuacion == buscarPuntuacion;
        });

    if (cuenta == 1)
    {
        cout << "Hay " << cuenta << " jugador con esa puntuacion" << endl;
    }
    else
    {
        cout << "Hay " << cuenta << " jugadores con esa puntuacion" << endl;
    }
    cout << endl;
}

int main()
{
    int opcion;
    vector<Jugador> jugadores
    {
        {"Gerardo", 150}, 
        {"Carlos", 200}, 
        {"Ana", 175}, 
        {"Luis", 120}, 
        {"Maria", 250},
        {"Karla", 200}
    };

    do
    {
        cout << "===== RANKING DE JUGADORES =====" << endl;
        cout << endl;
        cout << "1. Mostrar jugadores" << endl;
        cout << "2. Ordenar por puntuacion" << endl;
        cout << "3. Buscar jugador" << endl;
        cout << "4. Mostrar mejor puntuacion" << endl;
        cout << "5. Mostrar peor puntuacion" << endl;
        cout << "6. Contar jugadores con una puntuacion" << endl;
        cout << "0. Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();
        cout << endl;

        switch (opcion)
        {
            case 1:

                mostrarJugadores(jugadores);
                break;

            case 2:

                ordenarPorPuntuacion(jugadores);
                break;

            case 3:

                buscarJugador(jugadores);
                break;

            case 4:

                mostrarMejorPuntuacion(jugadores);
                break;

            case 5:

                mostrarPeorPuntuacion(jugadores);
                break;

            case 6:

                contarJugadoresConUnaPuntuacion(jugadores);
                break;

            case 0:

                cout << "Ha salido del programa" << endl;
                return 0;

            default:

                cout << "Opcion no valida" << endl << endl;
                break;
        }

    } while (opcion != 0);

    return 0;
}
