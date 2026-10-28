#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 3;
    const int COLUMNAS = 3;
    int matrizA[FILAS][COLUMNAS];
    int matrizB[FILAS][COLUMNAS];
    int matrizResultado[FILAS][COLUMNAS];

    cout << "Matriz A: " << endl;

    for (int i = 0; i < FILAS; i++)// ingresa valores para la matriz A
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Ingrese el valor de la fila " << i << " columna " << j << ": ";
            cin >> matrizA[i][j];
        }
    }

    cout << endl;
    cout << "Matriz B: " << endl;

    for (int i = 0; i < FILAS; i++)// ingresa valores para la matriz B
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << "Ingrese el valor de la fila " << i << " columna " << j << ": ";
            cin >> matrizB[i][j];
        }
    }

    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            matrizResultado[i][j] = 0; // IMPORTANTE inicializar en 0 (si no, arroja numeros basura)

            for (int k = 0; k < COLUMNAS; k++)
            {
                matrizResultado[i][j] += matrizA[i][k] * matrizB[k][j]; // se suma los resultado de la multiplicacion de las matrices
            }
        }
    }

    cout << endl;

    for (int i = 0; i < FILAS; i++) // imprime el resultado
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            cout << matrizResultado[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}