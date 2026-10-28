#include <iostream>
#include <vector>

using namespace std;

bool containsNumber(const vector<int>& numbers, int target, int index)
{
    // Base case: llegamos al final sin encontrar el numero.
    if (index == numbers.size())
    {
        return false;
    }

    // Si encontramos el objetivo, terminamos inmediatamente.
    if (numbers[index] == target)
    {
        return true;
    }

    // Recursive call: seguimos buscando en la siguiente posicion.
    return containsNumber(numbers, target, index + 1);
}

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50 };
    int target = 40;
    int index = 0;

    if (containsNumber(numbers, target, index))
    {
        cout << "Contiene el numero" << endl;
    }
    else
    {
        cout << "No contiene el numero" << endl;
    }

    return 0;
}

// Time complexity:
// Best case: O(1)
// Worst case: O(n)
//
// Space complexity:
// Best case: O(1)
// Worst case: O(n)