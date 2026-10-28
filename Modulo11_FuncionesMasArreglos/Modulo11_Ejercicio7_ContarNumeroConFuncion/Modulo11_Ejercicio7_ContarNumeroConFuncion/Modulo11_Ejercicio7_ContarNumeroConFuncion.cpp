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

int contarNumero(int numeros[], int TAM, int numeroBuscado)
{
    int contador = 0;

    for (int i = 0; i < TAM; i++)
    {
        if (numeros[i] == numeroBuscado)
        {
            contador++;
        }
    }

    return contador;
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

    int vecesEncontrado = contarNumero(arreglo, TAM, numeroBuscar);

    if (vecesEncontrado > 0)
    {
        cout << "Cantidad encontrada: " << vecesEncontrado << endl;
    }
    else
    {
        cout << "El numero no se encuentra en el arreglo." << endl;

    }


    return 0;
}