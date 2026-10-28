#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numeros[TAM];
    int temp;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    for (int i = 0; i < TAM / 2; i++)
    {
        temp = numeros[i];
        numeros[i] = numeros[TAM - 1 - i];
        numeros[TAM - 1 - i] = temp;
    }

    cout << "El arreglo invertido es: " << endl;

    for (int i = 0; i < TAM; i++)
    {
        cout << numeros[i] << endl;
    }

    return 0;
}