#include <iostream>
#include <vector>

using namespace std;

void printReverse(const vector<int>& numbers, int index)
{
    // Base case: si llegamos al final del vector, terminamos.
    if (index == numbers.size())
    {
        return;
    }

    // Bajamos primero hasta el final del vector.
    printReverse(numbers, index + 1);

    // Se ejecuta al regresar, por eso imprime en orden inverso.
    cout << numbers[index] << " ";
}

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50 };

    printReverse(numbers, 0);

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)