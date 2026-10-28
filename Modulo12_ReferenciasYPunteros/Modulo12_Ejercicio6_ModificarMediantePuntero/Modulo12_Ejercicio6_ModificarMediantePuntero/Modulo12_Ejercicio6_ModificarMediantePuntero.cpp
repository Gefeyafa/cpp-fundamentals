#include <iostream>

using namespace std;

void triplicar(int* numero)
{
    *numero *= 3;
}

int main()
{
    int numero = 10;

    cout << "Antes: " << numero << endl;

    triplicar(&numero);

    cout << "Despues: " << numero << endl;

    return 0;
}