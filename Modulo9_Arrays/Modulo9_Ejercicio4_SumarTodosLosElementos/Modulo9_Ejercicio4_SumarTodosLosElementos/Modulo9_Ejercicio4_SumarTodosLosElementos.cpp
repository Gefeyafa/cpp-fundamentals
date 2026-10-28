#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numeros[TAM];
    int suma = 0;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    cout << "La suma de todos los numeros ingresados es: " << suma;

    return 0;

}