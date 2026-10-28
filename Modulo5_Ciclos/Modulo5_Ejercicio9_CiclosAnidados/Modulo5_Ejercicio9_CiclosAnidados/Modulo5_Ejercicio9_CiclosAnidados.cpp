#include <iostream>

using namespace std;

int main()
{
    int cuadrado;

    cout << "Ingresa el tamano del cuadrado: ";
    cin >> cuadrado;

    for (int i = 1; i <= cuadrado; i++)
    {

        for (int j = 1; j <= cuadrado; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
