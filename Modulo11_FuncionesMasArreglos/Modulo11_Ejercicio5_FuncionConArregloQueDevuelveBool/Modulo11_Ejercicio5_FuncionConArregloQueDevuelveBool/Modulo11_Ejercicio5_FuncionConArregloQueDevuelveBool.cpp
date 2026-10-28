#include <iostream>

using namespace std;

void llenarArreglo(int numeros[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el valor del indice " << i << " : ";
        cin >> numeros[i];
    }
}

bool numeroExiste(int numeros[], int TAM, int buscarNumero)
{
    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] == buscarNumero)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    const int TAM = 5;
    int arreglo[TAM];
    int numeroBuscar;

    llenarArreglo(arreglo, TAM);
    cout << endl;
    cout << "Ingrese el numero que desea buscar: ";
    cin >> numeroBuscar;
    cout << endl;

    bool existe = numeroExiste(arreglo, TAM, numeroBuscar);

    if (existe)
    {
        cout << "El numero existe dentro del arreglo." << endl;
    }
    else
    {
        cout << "El numero no existe dentro del arreglo." << endl;
    }


    return 0;
}