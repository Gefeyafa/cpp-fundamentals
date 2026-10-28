#include <iostream>

using namespace std;

void countdown(int number)
{
    // Base case: detiene la recursion.
    if (number <= 0)
    {
        return;
    }

    cout << number << endl;

    // Recursive call: resolvemos el mismo problema con un numero menor.
    countdown(number - 1);
}

int main()
{
    countdown(5);

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)