#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 3;
    const int COLUMNAS = 3;
    int matriz[FILAS][COLUMNAS];
    int buscarNumero;
    int contador = 0;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Digite el valor de la fila " << i + 1 << ", columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

    cout << endl;
    cout << "Ingrese el numero que quiere buscar: ";
    cin >> buscarNumero;
    cout << endl;

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            if (matriz[i][j] == buscarNumero)
            {
                contador++;
            }
        }

    }

    if (contador > 0)
    {
        cout << "El numero aparece " << contador << " veces.";
    }
    else
    {
        cout << "El numero no fue encontrado.";
    }

    return 0;
}