#include <iostream>
#include <vector>

using namespace std;

// Cuenta cuantas veces un valor es mayor que el valor anterior.
int countIncreases(const vector<int>& numbers)
{
    int count = 0;

    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] > numbers[i - 1])
        {
            count++;
        }
    }

    return count;
}

int main()
{
    vector<int> numbers = { 3, 8, 8, 2, 5, 9, 4 };
    int cuenta = countIncreases(numbers);

    cout << "Las veces que el elemento del vector es mayor que el elemento anterior es de: " << cuenta << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)