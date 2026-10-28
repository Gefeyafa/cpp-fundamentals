#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string cleaned;

        // Conservamos solo letras y numeros.
        for (int i = 0; i < s.size(); i++)
        {
            if (((s[i] >= 65) && (s[i] <= 90) || (s[i] >= 97) && (s[i] <= 122)) || ((s[i] >= 48) && (s[i] <= 57)))
            {
                // Convertimos las mayusculas a minusculas.
                if ((s[i] >= 65) && (s[i] <= 90))
                {
                    cleaned.push_back(s[i] + 32);
                }
                else
                {
                    cleaned.push_back(s[i]);
                }
            }
        }

        if (cleaned.empty())
        {
            return true;
        }

        int leftPointer = 0;
        int rightPointer = cleaned.size() - 1;

        // Two Pointers: comparamos desde los extremos hacia el centro.
        while (leftPointer < rightPointer)
        {
            if (cleaned[leftPointer] == cleaned[rightPointer])
            {
                leftPointer++;
                rightPointer--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s = "A man, a plan, a canal: Panama";
    Solution solution;

    if (solution.isPalindrome(s))
    {
        cout << "Is palindrome!!!" << endl;
    }
    else
    {
        cout << "Is not palindrome" << endl;
    }

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)