#include <iostream>
#include <vector>

using namespace std;

// Sliding Window: calculamos la primera ventana y despues
// la desplazamos quitando un elemento y agregando el siguiente.
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
    vector<int> numeros = { 2, 1, 5, 1, 3, 2 };
    int tamVentana = 3;
    int sumaMaxima = sumaMaximaVentana(numeros, tamVentana);

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Tamanio de la ventana: " << tamVentana << endl << endl;

    cout << "Suma maxima: " << sumaMaxima << endl;

    return 0;
}

// Complejidad temporal:
// O(n)
//
// Complejidad espacial:
// O(1)