#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main()
{
    queue<string> personas;
    string nombre;
    int cantidad;

    cout << "Ingrese la cantidad de personas: ";
    cin >> cantidad;
    cin.ignore();
    cout << endl;

    cout << "Ingrese los nombres de las personas: " << endl;
    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". ";
        getline(cin, nombre);
        personas.push(nombre);
    }
    cout << endl;

    while (!personas.empty())
    {
        cout << "Atendiendo a : " << personas.front() << endl;
        personas.pop();
    }

    return 0;
}