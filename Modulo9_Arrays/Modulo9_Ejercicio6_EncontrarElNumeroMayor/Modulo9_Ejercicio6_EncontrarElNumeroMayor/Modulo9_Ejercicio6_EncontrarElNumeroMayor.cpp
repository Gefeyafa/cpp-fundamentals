#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numeros[TAM];
    int mayor, menor;

    for (int i = 0; i < TAM; i++) //Pedir valores
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < TAM; i++) //Comparar valores
    {
        if (mayor < numeros[i])
        {
            mayor = numeros[i];
        }
        if (menor > numeros[i])
        {
            menor = numeros[i];
        }
    }

    cout << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}