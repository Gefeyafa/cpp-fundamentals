#include <iostream>

using namespace std;

void imprimirArreglo(const int* arreglo, int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << *(arreglo + i) << endl;
    }
}

int main()
{
    const int TAM = 5;
    int numeros[TAM] = { 10, 20, 30, 40, 50 };

    imprimirArreglo(numeros, TAM);

    return 0;
}