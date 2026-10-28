#include <iostream>

using namespace std;

int pedirNumero() 
{
    int numeroPedido;

    cout << "Ingresar Numero: ";
    cin >> numeroPedido;

    return numeroPedido;
}

int Suma(int a, int b)
{
    return a + b;
}
int Resta(int a, int b)
{
    return a - b;
}
int Multiplicacion(int a, int b)
{
    return a * b;
}
double Division(int a, int b)
{
    return (double) a / b;
}

int main()
{
    int opcion;
    double resultado;
    int primerNumero = pedirNumero();
    int segundoNumero = pedirNumero();

    cout << endl;

    cout << "===== CALCULADORA =====" << endl << endl;

    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;

    cout << endl;

    cout << "Elige una opcion: ";
    cin >> opcion;

    switch (opcion)
    {

        case 1:

            resultado = Suma(primerNumero, segundoNumero);
            break;

        case 2:

            resultado = Resta(primerNumero, segundoNumero);
            break;

        case 3:

            resultado = Multiplicacion(primerNumero, segundoNumero);
            break;

        case 4:

            resultado = Division(primerNumero, segundoNumero);
            break;

        default:

            cout << "Opcion invalida";
            return 0;

    }

    cout << "Resultado: " << resultado;

    return 0;

}

