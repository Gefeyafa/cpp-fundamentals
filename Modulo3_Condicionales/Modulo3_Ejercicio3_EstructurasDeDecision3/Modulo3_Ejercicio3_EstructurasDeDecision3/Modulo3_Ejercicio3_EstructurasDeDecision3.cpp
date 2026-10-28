#include <iostream>

using namespace std;

int main()
{
    int calificacion;

    cout << "Escribe tu calificacion: ";
    cin >> calificacion;
    cout << endl;

    if (calificacion < 70)
    {
        cout << "Reprobado";
    }
    else if (calificacion < 90)
    {
        cout << "Aprobado";
    }
    else
    {
        cout << "Excelente";
    }

    return 0;
}
