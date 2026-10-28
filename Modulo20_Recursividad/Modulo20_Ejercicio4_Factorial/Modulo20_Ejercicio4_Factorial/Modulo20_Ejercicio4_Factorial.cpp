#include <iostream>

using namespace std;

int factorial(int number)
{
    // Base case: factorial de 1 es 1.
    if (number == 1)
    {
        return 1;
    }

    // Recursive case: number * factorial(number - 1)
    return number * factorial(number - 1);
}

int main()
{
    int fac = factorial(5);

    cout << fac << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)