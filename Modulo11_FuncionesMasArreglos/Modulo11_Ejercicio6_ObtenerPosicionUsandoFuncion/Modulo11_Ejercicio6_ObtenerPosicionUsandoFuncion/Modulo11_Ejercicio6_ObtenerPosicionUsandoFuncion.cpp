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

int buscarNumero(int numeros[], int TAM, int numeroBuscado)
{
    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] == numeroBuscado)
        {
            return i;
        }
    }
    return -1;
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

    int posicionNumero = buscarNumero(arreglo, TAM, numeroBuscar);

    if (posicionNumero >= 0)
    {
        cout << "El numero se encuentra en el indice: " << posicionNumero << ". " << endl;
    }
    else
    {
        cout << "El numero no se encuentra en el arreglo." << endl;

    }


    return 0;
}