#include <iostream>
#include <vector>

using namespace std;

void mostrarPrimerElemento(const vector<int>& numeros)
{
    cout << "Primer elemento: " << numeros.front() << endl;
}

void mostrarUltimoElemento(const vector<int>& numeros)
{
    cout << "Ultimo elemento: " << numeros.back() << endl;
}

void mostrarCantidadElementos(const vector<int>& numeros)
{
    cout << "Cantidad de elementos: " << numeros.size() << endl;
}

void eliminarUltimoElemento(vector<int>& numeros)
{
    numeros.pop_back();
    cout << "Ultimo elemento eliminado" << endl;
}

void mostrarVector(const vector<int>& numeros)
{
    cout << "Vector: ";
    for (auto numero : numeros)
    {
        cout << numero << " ";
    }
}

void vaciarVector(vector<int>& numeros)
{
    numeros.clear();
}

bool comprobarVectorVacio(const vector<int>& numeros)
{
    return numeros.empty();
}

int main()
{
    vector<int> numeros = { 10, 20, 30, 40, 50 };
    int opcion;

    do
    {
        cout << "===== OPERACIONES BASICAS DE VECTOR =====" << endl;
        cout << endl;
        cout << "1. Mostrar el primer elemento usando front()" << endl;
        cout << "2. Mostrar el ultimo elemento usando back()" << endl;
        cout << "3. Mostrar la cantidad de elementos usando size()" << endl;
        cout << "4. Eliminar el ultimo elemento usando pop_back()" << endl;
        cout << "5. Mostrar nuevamente todo el vector" << endl;
        cout << "6. Vaciar completamente el vector usando clear()" << endl;
        cout << "7. Usar empty() para comprobar si quedo vacio" << endl;
        cout << "0. Salir" << endl;
        cout << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;
        cout << endl;

        switch (opcion)
        {
            case 1:

                if (!comprobarVectorVacio(numeros))
                {
                    mostrarPrimerElemento(numeros);
                }
                else
                {
                    cout << "El vector esta vacio" << endl;
                }
                break;

            case 2:

                if (!comprobarVectorVacio(numeros))
                {
                    mostrarUltimoElemento(numeros);
                }
                else
                {
                    cout << "El vector esta vacio" << endl;
                }
                break;

            case 3:

                 mostrarCantidadElementos(numeros);
                 break;              

            case 4:

                if (!comprobarVectorVacio(numeros))
                {
                    eliminarUltimoElemento(numeros);
                }
                else
                {
                    cout << "El vector esta vacio" << endl;
                }
                break;

            case 5:

                if (!comprobarVectorVacio(numeros))
                {
                    mostrarVector(numeros);
                }
                else
                {
                    cout << "El vector esta vacio" << endl;
                }
                break;

            case 6:

                vaciarVector(numeros);
                cout << "Se ha vaciado el vector" << endl;
                break;

            case 7:

                if (comprobarVectorVacio(numeros))
                {
                    cout << "El vector esta vacio" << endl;
                }
                else
                {
                    cout << "El vector no esta vacio" << endl;
                    mostrarVector(numeros);
                    cout << endl;
                }
                break;

            case 0:
                
                cout << "Ha salido del programa" << endl;
                return 0;

            default:

                cout << "Opcion no valida" << endl;
                break;
        }

        cout << endl;
    } while (opcion != 0);

    return 0;
}