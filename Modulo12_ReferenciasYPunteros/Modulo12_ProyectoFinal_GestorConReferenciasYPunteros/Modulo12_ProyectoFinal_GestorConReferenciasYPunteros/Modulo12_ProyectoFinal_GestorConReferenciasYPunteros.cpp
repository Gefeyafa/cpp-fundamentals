#include <iostream>

using namespace std;

void mostrarNumeros(const int& numero1, const int& numero2)
{
    cout << "Numero 1: " << numero1 << endl;
    cout << "Numero 2: " << numero2 << endl;
    cout << endl;
}

void intercambiarNumeros(int& numero1, int& numero2)
{
    int temp = numero1;
    numero1 = numero2;
    numero2 = temp;

    cout << "Se han intercambiado los numeros" << endl;
    cout << endl;
}

void duplicar(int* numero)
{
    *numero *= 2;

    cout << "Se ha duplicado el numero" << endl;
    cout << endl;
}

void triplicar(int* numero)
{
    *numero *= 3;

    cout << "Se ha triplicado el numero" << endl;
    cout << endl;
}

void mostrarDireccion(const int* numero)
{
    if (numero != nullptr)
    {
        cout << "Direccion: " << numero << endl;
        cout << "Valor: " << *numero << endl;
    }
    else
    {
        cout << "El puntero no apunta a ninguna variable" << endl;
    }
    cout << endl;
}

int obtenerMayor(const int& numero1, const int& numero2)
{
    if (numero1 > numero2)
    {
        return numero1;
    }
    else
    {
        return numero2;
    }
}

int main()
{
    int numero1;
    int numero2;
    int opcion;
    int mayor;

    cout << "Ingrese el valor del numero 1: ";
    cin >> numero1;
    cout << "Ingrese el valor del numero 2: ";
    cin >> numero2;

    do
    {
        cout << "===== GESTOR DE NUMEROS =====" << endl;
        cout << endl;
        cout << "1. Mostrar numeros" << endl;
        cout << "2. Intercambiar numeros" << endl;
        cout << "3. Duplicar numero 1" << endl;
        cout << "4. Triplicar numero 2" << endl;
        cout << "5. Mostrar direcciones de memoria" << endl;
        cout << "6. Mostrar numero mayor" << endl;
        cout << "0. Salir" << endl;
        cout << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion)
        {

            case 1:

                mostrarNumeros(numero1, numero2);
                break;
            
            case 2:

                intercambiarNumeros(numero1, numero2);
                break;
            
            case 3:

                duplicar(&numero1);
                break;
            
            case 4:

                triplicar(&numero2);
                break;
            
            case 5:

                cout << "Numero 1: " << endl;
                mostrarDireccion(&numero1);
                cout << "Numero 2: " << endl;
                mostrarDireccion(&numero2);
                break;
            
            case 6:

                mayor = obtenerMayor(numero1, numero2);
                cout << "El numero mayor es: " << mayor << endl;
                cout << endl;
                break;
            
            case 0:

                cout << "Ha salido del programa" << endl;
                break;
            
            default:

                cout << "No se ingreso una opcion valida" << endl;
                cout << endl;
                break;
        }
            

    } while (opcion != 0);

    return 0;
}