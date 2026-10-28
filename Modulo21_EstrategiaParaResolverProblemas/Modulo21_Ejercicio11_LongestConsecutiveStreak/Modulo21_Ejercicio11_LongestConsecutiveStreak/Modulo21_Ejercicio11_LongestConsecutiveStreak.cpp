#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int longestConsecutive(const vector<int>& numbers)
{
    if (numbers.empty())
    {
        return 0;
    }

    unordered_set<int> numbersSet;
    int maxStreak = 1;

    // Guardamos los numeros para poder buscarlos rapidamente.
    for (int i = 0; i < numbers.size(); i++)
    {
        numbersSet.insert(numbers[i]);
    }

    for (int number : numbersSet)
    {
        // Si no existe number - 1, este numero puede iniciar una racha.
        if (numbersSet.find(number - 1) == numbersSet.end())
        {
            int currentNumber = number;
            int streak = 1;

            // Extendemos la racha mientras exista el siguiente numero.
            while (numbersSet.find(currentNumber + 1) != numbersSet.end())
            {
                currentNumber++;
                streak++;
            }

            if (streak > maxStreak)
            {
                maxStreak = streak;
            }
        }
    }

    return maxStreak;
}

int main()
{
    vector<int> numbers = { 100, 4, 200, 1, 3, 2 };
    int highStreak = longestConsecutive(numbers);

    cout << "Vector: " << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    cout << "The maximum streak is: " << highStreak << endl;

    return 0;
}

// Time complexity:
// Average: O(n)
// Worst theoretical case: O(n^2)
//
// Space complexity:
// O(n)