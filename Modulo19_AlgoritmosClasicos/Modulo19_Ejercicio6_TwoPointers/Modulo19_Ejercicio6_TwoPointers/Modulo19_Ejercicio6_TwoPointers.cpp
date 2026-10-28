#include <iostream>
#include <vector>

using namespace std;

// Two Pointers: aprovechamos que el vector esta ordenado
// para buscar un par sin probar todas las combinaciones.
bool existeParConSuma(const vector<int>& numeros, const int objetivo)
{
    int izquierda = 0;
    int derecha = numeros.size() - 1;

    while (izquierda < derecha)
    {
        int suma = numeros[izquierda] + numeros[derecha];

        if (suma == objetivo)
        {
            return true;
        }
        else if (suma < objetivo)
        {
            izquierda++;
        }
        else if (suma > objetivo)
        {
            derecha--;
        }
    }

    return false;
}

int main()
{
    vector<int> numeros = { 1, 2, 4, 6, 8, 10 };
    int objetivo;

    cout << "Vector: " << endl;
    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl << endl;

    cout << "Ingrese el objetivo: ";
    cin >> objetivo;
    cout << endl;

    if (existeParConSuma(numeros, objetivo))
    {
        cout << "Existe un par que suma el objetivo" << endl;
    }
    else
    {
        cout << "No existe un par que sume el objetivo" << endl;
    }

    return 0;
}

// Complejidad temporal:
// O(n)
//
// Complejidad espacial:
// O(1)
//
// Requisito importante:
// El vector debe estar ordenado.