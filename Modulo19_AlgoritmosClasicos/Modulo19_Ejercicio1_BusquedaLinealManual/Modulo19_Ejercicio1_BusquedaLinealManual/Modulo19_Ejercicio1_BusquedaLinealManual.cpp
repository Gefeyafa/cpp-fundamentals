#include <iostream>
#include <vector>

using namespace std;

// Busqueda lineal: devuelve el indice si encuentra el valor, o -1 si no existe.
int buscarNumero(const vector<int>& numeros, int buscado)
{
    for (int i = 0; i < numeros.size(); i++)
    {
        if (buscado == numeros[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector <int> numeros = { 15, 8, 27, 4, 19 };
    int buscado;

    cout << "Ingrese el numero que desea buscar: ";
    cin >> buscado;

    // Evitamos ejecutar la busqueda mas de una vez.
    int posicion = buscarNumero(numeros, buscado);

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
// Peor caso: O(n)
//
// Complejidad espacial:
// O(1)