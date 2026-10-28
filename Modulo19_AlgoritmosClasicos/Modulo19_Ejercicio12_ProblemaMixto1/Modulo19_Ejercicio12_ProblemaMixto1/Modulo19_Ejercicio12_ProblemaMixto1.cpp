#include <iostream>
#include <vector>

using namespace std;

// Two Pointers: comparamos los cuadrados de ambos extremos
// y colocamos el mayor desde el final del vector resultado.
vector<int> cuadradosOrdenados(const vector<int>& numeros)
{
    vector<int> resultados(numeros.size());

    int izquierda = 0;
    int derecha = numeros.size() - 1;
    int posicion = numeros.size() - 1;
    int cuadradoIzquierda;
    int cuadradoDerecha;

    while (izquierda <= derecha)
    {
        cuadradoIzquierda = numeros[izquierda] * numeros[izquierda];
        cuadradoDerecha = numeros[derecha] * numeros[derecha];

        if (cuadradoDerecha > cuadradoIzquierda)
        {
            resultados[posicion] = cuadradoDerecha;
            derecha--;
        }
        else if (cuadradoDerecha < cuadradoIzquierda)
        {
            resultados[posicion] = cuadradoIzquierda;
            izquierda++;
        }
        else if (cuadradoDerecha == cuadradoIzquierda)
        {
            resultados[posicion] = cuadradoDerecha;
            derecha--;
        }

        // Llenamos el vector resultado de derecha a izquierda.
        posicion--;
    }

    return resultados;
}

int main()
{
    vector<int> numeros = { -7, -3, 2, 3, 11 };
    vector<int> cuadrados = cuadradosOrdenados(numeros);

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Cuadrados: " << endl;
    for (int i = 0; i < cuadrados.size(); i++)
    {
        cout << cuadrados[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// Complejidad temporal:
// O(n)
//
// Complejidad espacial:
// O(n)