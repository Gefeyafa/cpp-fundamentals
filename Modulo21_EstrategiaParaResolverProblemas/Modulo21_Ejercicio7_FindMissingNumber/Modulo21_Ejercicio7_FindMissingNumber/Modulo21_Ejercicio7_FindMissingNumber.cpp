#include <iostream>
#include <vector>

using namespace std;

int findMissingNumber(const vector<int>& numbers)
{
    int vectorSum = 0;
    int iSum = 0;

    for (int i = 0; i < numbers.size(); i++)
    {
        // Suma los valores reales del vector.
        vectorSum += numbers[i];

        // Suma los valores que deberian existir: 1, 2, ..., n.
        iSum += i + 1;
    }

    int result = iSum - vectorSum;

    return result;
}

int main()
{
    vector<int> numbers = { 4, 1, 5, 2, 0 };
    int missingNumber = findMissingNumber(numbers);

    cout << "Vector: " << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)