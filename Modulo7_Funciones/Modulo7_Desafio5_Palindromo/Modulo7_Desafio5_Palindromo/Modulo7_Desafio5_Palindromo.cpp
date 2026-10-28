#include <iostream>

using namespace std;

int invertirNumero(int numero)
{
    int ultimoDigito;
    int nuevoNumero = 0;

    while (numero != 0)
    {
        ultimoDigito = numero % 10;

        nuevoNumero *= 10;
        nuevoNumero += ultimoDigito;

        numero /= 10;

    }

    return nuevoNumero;
}

bool esPalindromo(int numero)
{
    if (numero < 0)
    {
        return false;
    }

    int numeroInvertido = invertirNumero(numero);

    return numero == numeroInvertido;
}

int main()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    bool palindromo = esPalindromo(numero);

    cout << boolalpha;

    cout << "Es palindromo?: " << palindromo;

    return 0;
}
