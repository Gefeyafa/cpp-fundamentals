#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(const string& text, int left, int right)
{
    // Base case: si los indices se encuentran o se cruzan,
    // todo lo anterior ya coincidio.
    if (left >= right)
    {
        return true;
    }

    // Si ambos caracteres coinciden, seguimos hacia el centro.
    if (text[left] == text[right])
    {
        return isPalindrome(text, left + 1, right - 1);
    }
    else
    {
        return false;
    }
}

int main()
{
    string text;
    int left = 0;

    cout << "Introduzca un texto: ";
    getline(cin, text);

    int right = text.length() - 1;

    if (isPalindrome(text, left, right))
    {
        cout << "Es palindromo!!" << endl;
    }
    else
    {
        cout << "No es palindromo" << endl;
    }

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)