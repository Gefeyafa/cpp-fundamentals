#include <iostream>

using namespace std;

int main()
{
    int* puntero = nullptr;
    int numero = 50;

    if (puntero == nullptr)
    {
        cout << "El puntero no apunta a ninguna variable." << endl;
    }

    puntero = &numero;

    if (puntero != nullptr)
    {
        cout << "Valor: " << *puntero << endl;
    }

    return 0;
}