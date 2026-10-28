#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 3;
    const int COLUMNAS = 3;
    int matriz[FILAS][COLUMNAS];
    int transpuesta[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Ingrese el valor de la fila " << i << " columna " << j << ": ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << transpuesta[i][j] << " ";
        }

        cout << endl;
    }



    return 0;
}