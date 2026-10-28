#include <iostream>

using namespace std;

void llenarArreglo(int arreglo[], int TAM)
{
        for (int i = 0; i < TAM; i++)
        {
            cout << "Ingrese el valor del indice " << i << ": ";
            cin >> arreglo[i];
        }
}

void copiarArreglo(int arregloOriginal[], int arregloCopia[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        arregloCopia[i] = arregloOriginal[i];
    }
}

int sumarArreglo(int arreglo[], int TAM)
{
    int suma = 0;

    for (int i = 0; i < TAM; i++)
    {
        suma += arreglo[i];
    }

    return suma;
}

int obtenerMayor(int arreglo[], int TAM)
{
    int mayor = arreglo[0];

    for (int i = 1; i < TAM; i++)
    {
        if (mayor < arreglo[i])
        {
            mayor = arreglo[i];
        }
    }

    return mayor;
}

int obtenerMenor(int arreglo[], int TAM)
{
    int menor = arreglo[0];

    for (int i = 1; i < TAM; i++)
    {
        if (menor > arreglo[i])
        {
            menor = arreglo[i];
        }
    }

    return menor;
}

int buscarPosicion(int arreglo[], int TAM, int numero)
{  
    for (int i = 0; i < TAM; i++)
    {
        if (numero == arreglo[i])
        {
            return i;
        }
    }

    return -1;
}

int contarOcurrencias(int arreglo[], int TAM, int numero)
{
    int contador = 0;

    for (int i = 0; i < TAM; i++)
    {
        if (numero == arreglo[i])
        {
            contador++;
        }
    }
    
    return contador;
}

void invertirArreglo(int arreglo[], int TAM)
{
    int temp;
    
    for (int i = 0; i < TAM / 2; i++)
    {
        temp = arreglo[i];
        arreglo[i] = arreglo[TAM - 1 - i];
        arreglo[TAM - 1 - i] = temp;
    }
}

void ordenarArregloMenorAMayor(int arreglo[], int TAM)
{
    int temp;

    for (int i = 0; i < TAM - 1; i++)
    {
        for (int j = 0; j < TAM - 1 - i; j++)
        {
            if (arreglo[j] > arreglo[j + 1])
            {
                temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
}

bool compararArreglos(int arregloOriginal[], int arregloActual[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        if (arregloActual[i] != arregloOriginal[i])
        {
            return false;
        }
    }

    return true;
}

void imprimirArreglo(int arreglo[], int TAM)
{
    for (int i = 0; i < TAM; i++)
    {
        cout << arreglo[i];

        if (i < TAM - 1)
        {
            cout << ", ";
        }
    }
    cout << endl;
}

int main()
{
    const int TAM = 5;
    int arregloOriginal[TAM];
    int arregloActual[TAM];
    int opcion;
    int suma;
    int mayor;
    int menor;
    int numero;
    int posicion;
    int ocurrencias;
    bool iguales;

    llenarArreglo(arregloOriginal, TAM);

    copiarArreglo(arregloOriginal, arregloActual, TAM);

    do
    {
        cout << endl;
        cout << "===== GESTOR DE ARREGLO ======" << endl;
        cout << endl;
        cout << "1. Mostrar arreglo actual" << endl;
        cout << "2. Mostrar suma" << endl;
        cout << "3. Mostrar numero mayor y menor" << endl;
        cout << "4. Buscar un numero" << endl;
        cout << "5. Contar ocurrencias de un numero" << endl;
        cout << "6. Invertir arreglo" << endl;
        cout << "7. Ordenar arreglo de menor a mayor" << endl;
        cout << "8. Comparar con el arreglo original" << endl;
        cout << "9. Restaurar arreglo original" << endl;
        cout << "0. Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion)
        {
            case 1:

                imprimirArreglo(arregloActual, TAM);
                break;

            case 2:

                suma = sumarArreglo(arregloActual, TAM);
                cout << "La suma es: " << suma << endl;
                break;

            case 3:

                mayor = obtenerMayor(arregloActual, TAM);
                menor = obtenerMenor(arregloActual, TAM);

                cout << "El numero mayor es: " << mayor << endl;
                cout << "El numero menor es: " << menor << endl;
                break;

            case 4:

                cout << "Ingrese el numero que desea buscar: ";
                cin >> numero;

                posicion = buscarPosicion(arregloActual, TAM, numero);
                if (posicion != -1)
                {
                    cout << "El numero se encontro en el indice: " << posicion << endl;
                }
                else
                {
                    cout << "No se encontro el numero en el arreglo" << endl;
                }
                break;

            case 5:

                cout << "Ingrese el numero que desea buscar: ";
                cin >> numero;

                ocurrencias = contarOcurrencias(arregloActual, TAM, numero);
                cout << "El numero aparece: " << ocurrencias << " veces" << endl;
                break;

            case 6:

                invertirArreglo(arregloActual, TAM);
                cout << "Se ha invertido el arreglo: " << endl;
                imprimirArreglo(arregloActual, TAM);
                break;

            case 7:

                ordenarArregloMenorAMayor(arregloActual, TAM);
                cout << "El arreglo se ha ordenado: " << endl;
                imprimirArreglo(arregloActual, TAM);
                break;

            case 8:

                iguales = compararArreglos(arregloOriginal, arregloActual, TAM);

                if (iguales)
                {
                    cout << "El arreglo actual es igual al original" << endl;
                }
                else
                {
                    cout << "El arreglo actual es diferente al original" << endl;
                }

                break;

            case 9:

                copiarArreglo(arregloOriginal, arregloActual, TAM);
                cout << "El arreglo se ha restaurado: " << endl;
                imprimirArreglo(arregloActual, TAM);
                break;

            case 0:

                cout << "Ha salido del programa" << endl;
                break;



            default:

                cout << "No se ingreso una opcion valida" << endl;
                break;
        }
      

    } while (opcion != 0);
    
    return 0;
}
