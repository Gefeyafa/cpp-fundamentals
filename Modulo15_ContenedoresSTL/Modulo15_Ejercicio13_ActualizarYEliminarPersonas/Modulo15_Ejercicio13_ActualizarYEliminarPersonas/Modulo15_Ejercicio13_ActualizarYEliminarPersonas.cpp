#include <iostream>
#include <string>
#include <map>

using namespace std;

void mostrarPersonas(const map<string, int>& personas)
{
    if (!personas.empty())
    {
        for (const auto& elemento : personas)
        {
            cout << elemento.first << ": " << elemento.second << endl;
        }
    }
    else
    {
        cout << "No hay personas registradas" << endl;
    }
}

void modificarEdad(map<string, int>& personas)
{
    int nuevaEdad;
    string nombre;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    if (personas.find(nombre) != personas.end())
    {
        cout << "Ingrese la nueva edad: ";
        cin >> nuevaEdad;
        cin.ignore();
        cout << endl;
        
        personas[nombre] = nuevaEdad;

        cout << "La edad de " << nombre << " ha sido actualizada a " << nuevaEdad << endl;
    }
    else
    {
        cout << "Persona no encontrada" << endl;
    }
}

void eliminarPersona(map<string, int>& personas)
{
    string nombre;

    cout << "Ingrese el nombre: ";
    getline(cin, nombre);

    if (personas.find(nombre) != personas.end())
    {
        personas.erase(nombre);
        cout << "Persona eliminada con exito" << endl;
    }
    else
    {
        cout << "Persona no encontrada" << endl;
    }
}

void mostrarCantidad(const map<string, int>& personas)
{
    cout << "Hay un total de " << personas.size() << " personas registradas" << endl;
}

int main()
{
    map<string, int> edades;
    int opcion;

    edades["Carlos"] = 25;
    edades["Ana"] = 30;
    edades["Pedro"] = 40;

    do
    {
        cout << "=== Menu ===" << endl;
        cout << endl;
        cout << "1. Mostrar personas" << endl;
        cout << "2. Modificar edad" << endl;
        cout << "3. Eliminar persona" << endl;
        cout << "4. Mostrar cantidad" << endl;
        cout << "5. Salir" << endl;
        cout << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        cin.ignore();
        cout << endl;

        switch (opcion)
        {
            case 1:

                mostrarPersonas(edades);
                break;

            case 2:

                modificarEdad(edades);
                break;

            case 3:

                eliminarPersona(edades);
                break;

            case 4:

                mostrarCantidad(edades);
                break;

            case 5:

                cout << "Ha salido del programa" << endl;
                return 0;

            default:

                cout << "Opcion no valida" << endl;
                break;
        }

        cout << endl;

    } while (opcion != 5);

    return 0;
}