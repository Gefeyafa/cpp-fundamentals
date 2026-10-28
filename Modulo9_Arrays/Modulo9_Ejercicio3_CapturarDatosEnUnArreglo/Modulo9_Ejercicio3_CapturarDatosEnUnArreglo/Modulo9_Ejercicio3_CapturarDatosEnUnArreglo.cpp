#include <iostream>

using namespace std;

int main()
{
    const int TAM = 5;
    int numero[TAM];

    for (int i = 0; i < TAM; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numero[i];
    }

    for (int i = 0; i < TAM; i++)
    {
        cout << "Numero " << i + 1 << ": " << numero[i] << endl;
    }

    return 0;
}
