#include <iostream>
#include <vector>

using namespace std;

bool findSecondLargest(const vector<int>& numbers)
{
    // Evita acceder a numbers[0] si el vector esta vacio.
    if (numbers.empty())
    {
        return false;
    }

    int largest = numbers[0];
    int secondLargest;
    bool hasSecondLargest = false;

    for (int i = 1; i < numbers.size(); i++)
    {
        if (numbers[i] > largest)
        {
            // El antiguo mayor pasa a ser el segundo mayor.
            secondLargest = largest;
            largest = numbers[i];

            hasSecondLargest = true;
        }
        else if (largest > numbers[i] && (!hasSecondLargest || numbers[i] > secondLargest))
        {
            secondLargest = numbers[i];

            hasSecondLargest = true;
        }
    }

    if (hasSecondLargest)
    {
        cout << "El segundo mayor es: " << secondLargest << endl;
    }

    return hasSecondLargest;
}

int main()
{
    vector<int> numbers = { 8, 3, 10, 10, 5, 8 };

    cout << "Vector: " << endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl << endl;

    if (findSecondLargest(numbers))
    {
        cout << "Tiene segundo mayor!!" << endl;
    }
    else
    {
        cout << "No tiene segundo mayor" << endl;
    }

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)