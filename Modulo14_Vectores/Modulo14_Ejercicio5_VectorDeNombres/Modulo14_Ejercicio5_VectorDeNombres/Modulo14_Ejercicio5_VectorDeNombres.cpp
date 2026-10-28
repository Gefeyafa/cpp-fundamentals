#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> nombres;
    string nombre;
    int tam;
    cout << "Ingrese la cantidad de nombres: ";
    cin >> tam;
    cin.ignore();

    cout << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << "Nombre " << i + 1 << ": ";
        getline(cin, nombre);
        nombres.push_back(nombre);
    }
    cout << endl;

    cout << "Nombres: " << endl;
    for (const string& nombre : nombres)
    {
        cout << nombre << endl;
    }

    return 0;
}