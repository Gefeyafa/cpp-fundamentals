#include <iostream>

using namespace std;

int sumNumbers(int number)
{
    // Base case: aqui termina la recursion.
    if (number == 1)
    {
        return 1;
    }

    // Recursive case: sumamos el numero actual
    // con el resultado de la siguiente llamada.
    return number + sumNumbers(number - 1);
}

int main()
{
    int sum = sumNumbers(5);

    cout << sum;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)