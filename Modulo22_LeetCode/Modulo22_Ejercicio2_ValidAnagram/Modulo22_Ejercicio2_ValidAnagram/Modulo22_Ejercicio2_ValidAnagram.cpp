#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        // Si tienen distinto tamaño, no pueden ser anagramas.
        if (s.size() != t.size())
        {
            return false;
        }

        unordered_map<char, int> seen;

        // Sumamos las frecuencias de s.
        for (int i = 0; i < s.size(); i++)
        {
            seen[s[i]]++;
        }

        // Restamos las frecuencias de t.
        for (int i = 0; i < t.size(); i++)
        {
            seen[t[i]]--;
        }

        // Todas las frecuencias deben terminar en 0.
        for (const auto& pair : seen)
        {
            if (pair.second != 0)
            {
                return false;
            }
        }

        return true;
    }
};

int main()
{
    string s = "anagram";
    string t = "nagaram";
    Solution solution;

    if (solution.isAnagram(s, t))
    {
        cout << "Are anagrams!!" << endl;
    }
    else
    {
        cout << "Are not anagrams" << endl;
    }

    return 0;
}

// Time complexity:
// Average: O(n)
// Worst theoretical case: O(n^2)
//
// Space complexity:
// O(n)