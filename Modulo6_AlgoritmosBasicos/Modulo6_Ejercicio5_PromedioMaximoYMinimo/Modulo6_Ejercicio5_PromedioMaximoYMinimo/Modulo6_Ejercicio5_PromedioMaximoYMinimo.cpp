#include <iostream>

using namespace std;

int main()
{
    double suma = 0;
    int mayor, menor, cantidadCalificaciones, calificacion;

    cout << "Ingrese la cantidad de calificaciones: ";
    cin >> cantidadCalificaciones;
    cout << endl;

    for (int i = 1; i <= cantidadCalificaciones; i++)
    {
        cout << "Calificacion " << i << ": ";
        cin >> calificacion;

        if (i == 1)
        {
            mayor = calificacion;
            menor = calificacion;
        }

        suma += calificacion;

        if (mayor < calificacion)
        {
            mayor = calificacion;
        }
        if (menor > calificacion)
        {
            menor = calificacion;
        }
    }

    cout << endl;

    cout << "Promedio: " << suma / cantidadCalificaciones << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}

