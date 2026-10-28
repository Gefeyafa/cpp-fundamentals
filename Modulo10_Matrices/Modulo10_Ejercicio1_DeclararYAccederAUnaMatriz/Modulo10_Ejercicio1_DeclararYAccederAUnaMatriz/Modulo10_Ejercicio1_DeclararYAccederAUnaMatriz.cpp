#include <iostream>

using namespace std;

int main()
{
    const int FILAS = 2;
    const int COLUMNAS = 3;
    int matriz[FILAS][COLUMNAS];

    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;

    cout << "Primer elemento: " << matriz[0][0] << endl;
    cout << "Ultimo elemento: " << matriz[1][2] << endl;

    return 0;
}