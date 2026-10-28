#include <iostream>

using namespace std;

int main()
{
    int contador = 1;
    int suma = 0;

    while (contador <= 10)
    {

        cout << "contador: " << contador << endl;
        cout << "suma: " << suma << endl;

        suma += contador;
        contador++;
    }

    cout << "La suma es: " << suma;

    return 0;
}