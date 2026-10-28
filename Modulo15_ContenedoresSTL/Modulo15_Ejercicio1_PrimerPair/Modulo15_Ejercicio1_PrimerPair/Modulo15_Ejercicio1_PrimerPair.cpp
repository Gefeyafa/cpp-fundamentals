#include <iostream>
#include <string>
#include <utility>

using namespace std;

int main()
{
    pair<string, int> jugador;

    cout << "Ingrese el nombre: ";
    getline(cin, jugador.first);

    cout << "Ingrese la vida: ";
    cin >> jugador.second;

    cout << endl;

    cout << "Nombre: " << jugador.first << endl;
    cout << "Vida: " << jugador.second << endl;

    return 0;
}
