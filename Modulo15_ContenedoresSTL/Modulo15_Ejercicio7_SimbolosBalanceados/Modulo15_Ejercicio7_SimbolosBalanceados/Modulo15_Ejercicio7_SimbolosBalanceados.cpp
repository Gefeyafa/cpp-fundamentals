#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    stack<char> pila;
    string expresion;
    bool correcto = true;

    cout << "Ingrese una expresion: ";
    getline(cin, expresion);

    for (char caracter : expresion)
    {
        if (caracter == '(' || caracter == '[' || caracter == '{')
        {
            pila.push(caracter);
        }
        else if (caracter == ')')
        {
            if (pila.empty() || pila.top() != '(')
            {
                correcto = false;
                break;
            }
            else
            {
                pila.pop();
            }
        }
        else if (caracter == ']')
        {
            if (pila.empty() || pila.top() != '[')
            {
                correcto = false;
                break;
            }
            else
            {
                pila.pop();
            }
        }
        else if (caracter == '}')
        {
            if (pila.empty() || pila.top() != '{')
            {
                correcto = false;
                break;
            }
            else
            {
                pila.pop();
            }
        }
    }

    if (!pila.empty())
    {
        correcto = false;
    }

    cout << endl;

    if (correcto)
    {
        cout << "El resultado es: Balanceado" << endl;
    }
    else
    {
        cout << "El resultado es: No balanceado" << endl;
    }

    return 0;
}