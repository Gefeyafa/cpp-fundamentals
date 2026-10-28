#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<string> historial;
    string accion;

    cout << "Escriba 4 acciones: " << endl;

    for (int i = 0; i < 4; i++)
    {
        cout << "Accion " << i + 1 << ": ";
        getline(cin, accion);

        historial.push(accion);
    }
    cout << endl;

    cout << "Ultima accion: " << historial.top() << endl;

    historial.pop();

    if (!historial.empty())
    {
        cout << "Nueva ultima accion: " << historial.top() << endl;
    }
    else
    {
        cout << "No quedan acciones" << endl;
    }

    return 0;
}