#include <iostream>
#include <vector>

using namespace std;

// Brute Force: probamos todas las parejas posibles.
bool hasPairWithTargetSum(const vector<int>& numbers, int target)
{
    for (int i = 0; i < numbers.size() - 1; i++)
    {
        // j empieza despues de i para no repetir parejas
        // ni usar el mismo elemento dos veces.
        for (int j = i + 1; j < numbers.size(); j++)
        {
            if (numbers[i] + numbers[j] == target)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> numbers = { 4, 6, 2, 9, 1 };
    int target = 8;

    if (hasPairWithTargetSum(numbers, target))
    {
        cout << "Hay dos numeros en el vector que sumados dan " << target << endl;
    }
    else
    {
        cout << "No hay dos numeros en el vector que sumados den " << target << endl;
    }

    return 0;
}

// Time complexity:
// O(n^2)
//
// Space complexity:
// O(1)