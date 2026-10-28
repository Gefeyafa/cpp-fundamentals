#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(const string& bracket)
{
    stack<char> stack;

    for (char character : bracket)
    {
        // Los simbolos de apertura se guardan en la pila.
        if (character == '(' || character == '[' || character == '{')
        {
            stack.push(character);
        }
        else if (character == ')')
        {
            // Primero comprobamos empty() antes de usar top().
            if (stack.empty() || stack.top() != '(')
            {
                return false;
            }
            else
            {
                stack.pop();
            }
        }
        else if (character == ']')
        {
            if (stack.empty() || stack.top() != '[')
            {
                return false;
            }
            else
            {
                stack.pop();
            }
        }
        else if (character == '}')
        {
            if (stack.empty() || stack.top() != '{')
            {
                return false;
            }
            else
            {
                stack.pop();
            }
        }
    }

    // Si quedan aperturas sin cerrar, el string no es valido.
    if (!stack.empty())
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    string bracket = "{[()]}";

    for (char character : bracket)
    {
        cout << character;
    }
    cout << endl << endl;

    if (isValid(bracket))
    {
        cout << "Is correct!!" << endl;
    }
    else
    {
        cout << "Is not correct" << endl;
    }

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)