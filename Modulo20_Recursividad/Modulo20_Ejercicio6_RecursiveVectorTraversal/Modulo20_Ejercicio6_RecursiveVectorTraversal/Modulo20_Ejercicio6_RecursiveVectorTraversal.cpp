#include <iostream>
#include <vector>

using namespace std;

// Recorremos el vector usando el indice actual.
void printVector(const vector<int>& numbers, int index)
{
    // Base case: si llegamos al final del vector, terminamos.
    if (index == numbers.size())
    {
        return;
    }

    cout << numbers[index] << " ";

    // Recursive call: avanzamos al siguiente indice.
    printVector(numbers, index + 1);
}

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50 };

    printVector(numbers, 0);

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)