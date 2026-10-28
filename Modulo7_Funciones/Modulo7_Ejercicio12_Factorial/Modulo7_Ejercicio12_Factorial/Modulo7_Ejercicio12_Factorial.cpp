#include <iostream>

using namespace std;

int factorial(int a)
{
    int resultado = 1;

    for (int i = 2; i <= a; i++)
    {
        resultado *= i;
    }

    return resultado;

} //Forma corregida

/*int factorial(int a)
{
    int resultado = 1;
    if (a == 1 || a == 0)
    {
        resultado = 1;
    }
    else if (a > 1)
    {
        for (int i = 1; i <= a; i++)
        {
            resultado = resultado * (i + 1);
            if (i == a - 1)
            {
                break;
            }
        }
    }
    

    return resultado;

}*///Mi manera


int main()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    int resultadoFactorial = factorial(numero);

    cout << endl;
    cout << "El factorial es: " << resultadoFactorial;
}

