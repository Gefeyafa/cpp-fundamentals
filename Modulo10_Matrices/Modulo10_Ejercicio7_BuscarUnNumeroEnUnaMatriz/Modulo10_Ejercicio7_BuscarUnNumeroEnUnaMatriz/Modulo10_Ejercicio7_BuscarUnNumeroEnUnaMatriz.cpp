#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 3;
    const int COLUMNAS = 3;
    int matriz[FILAS][COLUMNAS];
    int buscarNumero;
    int filaEncontrada = -1;
    int columnaEncontrada = -1;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Digite el valor de la fila " << i << ", columna " << j << ": ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;
    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscarNumero;
    cout << endl;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (matriz[i][j] == buscarNumero)
            {
                filaEncontrada = i;
                columnaEncontrada = j;
            }
        }

    }

    if (filaEncontrada != -1 && columnaEncontrada != -1)
    {
        cout << "Numero encontrado en fila: " << filaEncontrada << " columna: " << columnaEncontrada;
    }
    else
    {
        cout << "No se ha encontrado el numero";
    }

    return 0;
}