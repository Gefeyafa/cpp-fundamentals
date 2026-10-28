#include <iostream>
#include <queue>
#include <string>

using namespace std;

struct Cliente
{
    string nombre;
    int numeroTurno;
};

int main()
{
    queue<Cliente> clientes;
    int cantidadClientes;

    cout << "Ingrese la cantidad de clientes: ";
    cin >> cantidadClientes;
    cin.ignore();
    cout << endl;

    cout << "Ingrese el nombre de los clientes: " << endl;
    for (int i = 0; i < cantidadClientes; i++)
    {
        Cliente cliente;

        cout << i + 1 << ". ";
        getline(cin, cliente.nombre);

        cliente.numeroTurno = i + 1;
        
        clientes.push(cliente);
    }
    cout << endl;

    while (!clientes.empty())
    {
        cout << "Atendiendo turno " << clientes.front().numeroTurno << ": " << clientes.front().nombre << endl;

        clientes.pop();

    }


    return 0;
}