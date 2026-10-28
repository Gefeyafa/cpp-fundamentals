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

int main()
{
    int numero;

    cout << "Ingresa un numero: ";
    cin >> numero;

    int numeroInvertido = invertirNumero(numero);

    cout << "El numero invertido es: " << numeroInvertido;

    return 0;
}
