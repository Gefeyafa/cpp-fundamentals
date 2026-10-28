#include <iostream>

using namespace std;

void duplicar(int& numero)
{
    numero *= 2;
}

int main()
{
    int numero = 10;

    cout << "Antes: " << numero << endl;
    
    duplicar(numero);

    cout << "Despues: " << numero << endl;

    return 0;
}