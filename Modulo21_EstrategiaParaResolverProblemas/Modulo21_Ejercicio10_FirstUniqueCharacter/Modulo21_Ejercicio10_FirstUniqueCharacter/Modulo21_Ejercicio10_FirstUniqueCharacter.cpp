#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int findFirstUniqueCharacter(const string& text)
{
    unordered_map<char, int> frequencies;

    // Contamos cuantas veces aparece cada caracter.
    for (char character : text)
    {
        frequencies[character]++;
    }

    // Recorremos el string original para conservar su orden.
    for (int i = 0; i < text.size(); i++)
    {
        if (frequencies[text[i]] == 1)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string text = "swiss";
    int firstUniqueCharacter = findFirstUniqueCharacter(text);

    cout << "The position of the first unique character is: " << firstUniqueCharacter << endl;

    return 0;
}

// Time complexity:
// Average: O(n)
// Worst theoretical case: O(n^2)
//
// Space complexity:
// O(n)