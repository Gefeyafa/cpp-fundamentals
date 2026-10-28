#include <iostream>

using namespace std;

int main()
{
    int numero = 50;
    int* puntero = &numero;
    int** doblePuntero = &puntero;

    cout << "Antes: " << endl;
    cout << "Valor directo: " << numero << endl;
    cout << "Valor mediante puntero: " << *puntero << endl;
    cout << "Valor mediante doble puntero: " << **doblePuntero << endl;
    cout << endl;

    **doblePuntero = 100;

    cout << "Despues: " << endl;
    cout << "Valor directo: " << numero << endl;
    cout << "Valor mediante puntero: " << *puntero << endl;
    cout << "Valor mediante doble puntero: " << **doblePuntero << endl;

    return 0;
}