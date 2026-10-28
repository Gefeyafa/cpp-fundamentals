#include <iostream>
#include <vector>

using namespace std;

// Busca el indice del primer numero negativo.
int findFirstNegative(const vector<int>& numbers)
{
    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] < 0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    vector<int> numbers = { 4, 7, -2, 8, -5 };
    int index = findFirstNegative(numbers);

    if (index != -1)
    {
        cout << "El indice del primer numero negativo es: " << index << endl;
    }
    else
    {
        cout << "No se encontraron numeros negativos" << endl;
    }

    return 0;
}

// Time complexity:
// Best case: O(1)
// Worst case: O(n)
//
// Space complexity:
// O(1)