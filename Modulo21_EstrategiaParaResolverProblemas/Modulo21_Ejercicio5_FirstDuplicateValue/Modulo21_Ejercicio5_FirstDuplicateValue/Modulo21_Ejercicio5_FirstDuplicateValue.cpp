#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int findFirstDuplicate(const vector<int>& numbers)
{
    // Guarda los numeros que ya hemos encontrado.
    unordered_set<int> seen;

    for (int number : numbers)
    {
        // find() devuelve end() cuando el valor NO existe.
        if (seen.find(number) != seen.end())
        {
            return number;
        }
        else
        {
            seen.insert(number);
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers = { 4, 7, 2, 7, 5, 4 };
    int duplicated = findFirstDuplicate(numbers);

    if (duplicated != -1)
    {
        cout << "El primer duplicado es: " << duplicated << endl;
    }
    else
    {
        cout << "No hay duplicados" << endl;
    }

    return 0;
}

// Time complexity:
// Average: O(n)
// Worst theoretical case: O(n^2)
//
// Space complexity:
// O(n)