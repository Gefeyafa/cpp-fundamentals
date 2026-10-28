#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int cantidad;
    int numero;
    int contador = 1;
    stack<int> numeros;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++)
    {
        cout << i + 1 << ". ";
        cin >> numero;

        numeros.push(numero);
    }

    cout << endl;

    while(!numeros.empty())
    {
        cout << contador << ". " << numeros.top() << endl;

        numeros.pop();
        contador++;
    }

    return 0;
}
