#include <iostream>

using namespace std;

int maximoTres(int n1, int n2, int n3)
{
    int maximo = n1;

    if (maximo < n2)
    {
        maximo = n2;
    }

    if (maximo < n3)
    {
        maximo = n3;
    }

    return maximo;
}

int main()
{
    int numero1, numero2, numero3;

    cout << " ===== Digite 3 numeros =====" << endl << endl;

    cout << "Numero1: ";
    cin >> numero1;

    cout << "Numero2: ";
    cin >> numero2;

    cout << "Numero3: ";
    cin >> numero3;

    int numeroMaximo = maximoTres(numero1, numero2, numero3);

    cout << "El numero maximo es: " << numeroMaximo;
}
