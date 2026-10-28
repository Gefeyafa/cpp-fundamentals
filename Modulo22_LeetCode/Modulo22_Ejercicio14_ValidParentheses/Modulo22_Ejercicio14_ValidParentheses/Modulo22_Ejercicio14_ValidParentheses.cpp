#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s)
    {
        stack<char> stack;

        for (char character : s)
        {
            // Guardamos los simbolos de apertura.
            if (character == '(' || character == '[' || character == '{')
            {
                stack.push(character);
            }
            else if (character == ')')
            {
                // El cierre debe coincidir con el ultimo simbolo abierto.
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

        // Si quedan simbolos de apertura sin cerrar, no es valido.
        if (!stack.empty())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    string s = "{[()]}";

    Solution solution;

    if (solution.isValid(s))
    {
        cout << "Is valid" << endl;
    }
    else
    {
        cout << "Is not valid" << endl;
    }
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)