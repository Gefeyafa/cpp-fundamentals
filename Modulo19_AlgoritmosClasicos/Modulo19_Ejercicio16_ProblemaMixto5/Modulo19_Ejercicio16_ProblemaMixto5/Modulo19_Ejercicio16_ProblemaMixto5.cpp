#include <iostream>
#include <vector>

using namespace std;

// Busqueda binaria: descartamos aproximadamente la mitad
// del rango en cada iteracion.
int buscarNumero(const vector<int>& numeros, int buscado)
{
    int inicio = 0;
    int fin = numeros.size() - 1;
    int medio;

    while (inicio <= fin)
    {
        medio = inicio + (fin - inicio) / 2;

        if (buscado == numeros[medio])
        {
            return medio;
        }
        else if (buscado < numeros[medio])
        {
            fin = medio - 1;
        }
        else
        {
            inicio = medio + 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> numeros = { 2, 5, 8, 12, 16, 23, 38, 45, 67, 91 };
    int buscado;

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Digite el numero buscado: ";
    cin >> buscado;
    cout << endl;

    int numeroBuscado = buscarNumero(numeros, buscado);

    if (numeroBuscado != -1)
    {
        cout << "Numero encontrado en la posicion: " << numeroBuscado << endl;
    }
    else
    {
        cout << "Numero no encontrado" << endl;
    }

    return 0;
}

// Complejidad temporal:
// Mejor caso: O(1)
// Caso promedio: O(log n)
// Peor caso: O(log n)
//
// Complejidad espacial:
// O(1)