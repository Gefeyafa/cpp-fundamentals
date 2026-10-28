#include <iostream>
#include <vector>

using namespace std;

// Sliding Window: calculamos una ventana inicial
// y despues la desplazamos quitando un valor y agregando otro.
int sumaMaximaVentana(const vector<int>& numeros, int tamVentana)
{
    int suma = 0;
    int sumaMaxima;

    for (int i = 0; i < tamVentana; i++)
    {
        suma += numeros[i];
    }

    sumaMaxima = suma;

    for (int i = tamVentana; i < numeros.size(); i++)
    {
        suma -= numeros[i - tamVentana];
        suma += numeros[i];

        if (suma > sumaMaxima)
        {
            sumaMaxima = suma;
        }
    }

    return sumaMaxima;
}

int main()
{
    vector<int> numeros = { 4, 2, 1, 7, 8, 1, 2, 8, 1, 0 };
    int tamVentana = 4;

    int sumaMaxima = sumaMaximaVentana(numeros, tamVentana);

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "La suma maxima es: " << sumaMaxima << endl;

    return 0;
}

// Complejidad temporal:
// O(n)
//
// Complejidad espacial:
// O(1)