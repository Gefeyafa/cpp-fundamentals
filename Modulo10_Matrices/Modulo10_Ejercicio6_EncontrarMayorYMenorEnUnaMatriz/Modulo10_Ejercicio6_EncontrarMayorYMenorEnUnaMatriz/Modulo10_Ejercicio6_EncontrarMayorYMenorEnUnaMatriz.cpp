#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 3;
    const int COLUMNAS = 3;
    int matriz[FILAS][COLUMNAS];
    int mayor, menor;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Digite el valor de la fila " << i + 1 << ", columna" << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    mayor = matriz[0][0];
    menor = matriz[0][0];

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (matriz[i][j] > mayor)
            {
                mayor = matriz[i][j];
            }
            if (matriz[i][j] < menor)
            {
                menor = matriz[i][j];
            }
        }

    }

    cout << "El mayor valor es: " << mayor << endl;
    cout << "El menor valor es: " << menor << endl;

    return 0;
}