#include <iostream>
#include <vector>

using namespace std;

int findMaximum(const vector<int>& numbers, int index)
{
    // Base case: si estamos en el ultimo elemento,
    // ese valor es el maximo de lo que queda.
    if (index == numbers.size() - 1)
    {
        return numbers[index];
    }

    // Guardamos el maximo encontrado en el resto del vector.
    int maximumOfRest = findMaximum(numbers, index + 1);

    // Comparamos el valor actual contra el maximo del resto.
    if (numbers[index] > maximumOfRest)
    {
        return numbers[index];
    }

    return maximumOfRest;
}

int main()
{
    vector<int> numbers = { 8, 3, 15, 6, 11, 4 };
    int max = findMaximum(numbers, 0);

    cout << "El numero maximo es: " << max << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)