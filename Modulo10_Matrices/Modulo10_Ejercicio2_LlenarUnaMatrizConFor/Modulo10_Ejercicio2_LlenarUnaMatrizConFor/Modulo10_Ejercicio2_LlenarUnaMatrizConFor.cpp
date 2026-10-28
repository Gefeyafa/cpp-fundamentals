#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 3;
    const int COLUMNAS = 3;
    int matriz[FILAS][COLUMNAS];

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Digite el valor de la fila " << i + 1 << ", columna" << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << matriz[i][j] << " ";
        }

        cout << endl;

    }

    return 0;
}