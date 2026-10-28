#include <iostream>
#include <vector>

using namespace std;

// Busqueda binaria: en cada iteracion descartamos aproximadamente la mitad del vector.
// El vector debe estar ordenado.
int busquedaBinaria(const vector<int>& numeros, int buscado)
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
    vector <int> numeros = { 5, 10, 20, 30, 40, 50, 70, 90 };
    int posicion;
    int buscado;

    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscado;

    posicion = busquedaBinaria(numeros, buscado);

    if (posicion != -1)
    {
        cout << "Numero encontrado en la posicion: " << posicion << endl;
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