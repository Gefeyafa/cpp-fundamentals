#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numeros[TAM];
    int suma = 0;
    double promedio;

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    promedio = (double)suma / TAM;
    cout << endl;
    cout << "La suma es: " << suma << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
