#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>

using namespace std;

void registrarTicket(unordered_set<string>& idRegistrados, queue<string>& tickets, unordered_map<string, string>& responsables)
{
    string id, responsable;

    cout << "Ingrese el ID del ticket: ";
    getline(cin, id);
    cout << endl;

    if (idRegistrados.find(id) != idRegistrados.end())
    {
        cout << "Ese ID ya esta registrado" << endl;
    }
    else
    {
        cout << "Ingrese al responsable: ";
        getline(cin, responsable);

        tickets.push(id);
        idRegistrados.insert(id);
        responsables[id] = responsable;
    }
}

void atenderSiguienteTicket(queue<string>& tickets, stack<string>& ticketsAtendidos)
{
    if (!tickets.empty())
    {
        ticketsAtendidos.push(tickets.front());

        cout << "El ticket " << tickets.front() << " fue atendido" << endl;

        tickets.pop();
    }
    else
    {
        cout << "No hay tickets pendientes" << endl;
    }
}

void mostrarSiguienteTicket(const queue<string>& tickets)
{
    if (!tickets.empty())
    {
        cout << "Siguiente ticket: " << tickets.front() << endl;
    }
    else
    {
        cout << "No hay tickets pendientes" << endl;
    }
}

void mostrarCantidadDeTicketsPendientes(const queue<string>& tickets)
{
    cout << "Tickets pendientes: " << tickets.size() << endl;
}

void mostrarUltimoTicketAtendido(const stack<string>& ticketsAtendidos)
{
    if (!ticketsAtendidos.empty())
    {
        cout << "Ultimo ticket atendido: " << ticketsAtendidos.top() << endl;
    }
    else
    {
        cout << "No se han atendido tickets" << endl;
    }
}

void buscarResponsableDeUnTicket(const unordered_map<string, string>& responsables)
{
    string id;

    cout << "Ingrese el ID del ticket: ";
    getline(cin, id);

    if (responsables.find(id) != responsables.end())
    {
        cout << "Responsable: " << responsables.at(id) << endl; // usar at() para acceder al valor sin intentar crear una clave nueva (puede usarse con const)
    }
    else
    {
        cout << "No existe ese ticket" << endl;
    }
}

int main()
{
    int opcion;

    queue<string> tickets;
    stack<string> ticketsAtendidos;
    unordered_set<string> idRegistrados;
    unordered_map<string, string> responsables; //< id, responsable >

    do
    {
        cout << "===== SISTEMA DE SOPORTE =====" << endl;
        cout << endl;
        cout << "1. Registrar ticket" << endl;
        cout << "2. Atender siguiente ticket" << endl;
        cout << "3. Mostrar siguiente ticket" << endl;
        cout << "4. Mostrar cantidad de tickets pendientes" << endl;
        cout << "5. Mostrar ultimo ticket atendido" << endl;
        cout << "6. Buscar responsable de un ticket" << endl;
        cout << "7. Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();
        cout << endl;

        switch (opcion)
        {
            case 1:

                registrarTicket(idRegistrados, tickets, responsables);
                break;

            case 2:

                atenderSiguienteTicket(tickets, ticketsAtendidos);
                break;

            case 3:

                mostrarSiguienteTicket(tickets);
                break;

            case 4:

                mostrarCantidadDeTicketsPendientes(tickets);
                break;

            case 5:

                mostrarUltimoTicketAtendido(ticketsAtendidos);
                break;

            case 6:

                buscarResponsableDeUnTicket(responsables);
                break;

            case 7:

                cout << "Ha salido del programa" << endl;
                return 0;

            default:

                cout << "Opcion no valida" << endl;
                break;
        }
        cout << endl;

    } while (opcion != 7);

    return 0;
}