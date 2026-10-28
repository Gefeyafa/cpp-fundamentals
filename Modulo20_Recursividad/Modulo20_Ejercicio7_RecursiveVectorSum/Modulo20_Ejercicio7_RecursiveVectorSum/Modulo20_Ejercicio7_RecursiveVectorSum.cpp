#include <iostream>
#include <vector>

using namespace std;

int sumVector(const vector<int>& numbers, int index)
{
    // Base case: si llegamos al final del vector, ya no queda nada por sumar.
    if (index == numbers.size())
    {
        return 0;
    }

    // Recursive case: valor actual + suma del resto del vector.
    return numbers[index] + sumVector(numbers, index + 1);
}

int main()
{
    vector<int> numbers = { 10, 20, 30, 40, 50 };
    int sum = sumVector(numbers, 0);

    cout << sum << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)