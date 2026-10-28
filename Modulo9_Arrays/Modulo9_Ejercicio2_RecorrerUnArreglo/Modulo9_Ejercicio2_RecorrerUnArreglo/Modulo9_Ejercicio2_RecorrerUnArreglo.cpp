#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numero[TAM];

    numero[0] = 15;
    numero[1] = 20;
    numero[2] = 35;
    numero[3] = 40;
    numero[4] = 50;

    for (int i = 0; i < TAM; i++)
    {
        cout << numero[i] << endl;
    }

    return 0;
}