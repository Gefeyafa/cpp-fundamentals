#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int left = 0;
        int maxLength = 0;
        unordered_set<char> seen;

        // right expande la ventana hacia la derecha.
        for (int right = 0; right < s.size(); right++)
        {
            // Si el caracter actual ya existe en la ventana,
            // quitamos caracteres desde la izquierda hasta eliminar el duplicado.
            while (seen.find(s[right]) != seen.end())
            {
                seen.erase(s[left]);
                left++;
            }

            seen.insert(s[right]);

            int currentLength = right - left + 1;

            if (currentLength > maxLength)
            {
                maxLength = currentLength;
            }
        }

        return maxLength;
    }
};


int main()
{
    string s = "abcabcbb";
    Solution solution;

    cout << "Max length: " << solution.lengthOfLongestSubstring(s) << endl;

    return 0;
}

// Time complexity:
// Average: O(n)
//
// Space complexity:
// O(n)