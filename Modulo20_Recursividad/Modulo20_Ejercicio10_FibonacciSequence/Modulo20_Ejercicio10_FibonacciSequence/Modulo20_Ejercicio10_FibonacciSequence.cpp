#include <iostream>

using namespace std;

int fibonacci(int number)
{
    // Base cases.
    if (number == 0)
    {
        return 0;
    }

    if (number == 1)
    {
        return 1;
    }

    // Recursive case: sumamos los dos resultados anteriores.
    return fibonacci(number - 1) + fibonacci(number - 2);
}

int main()
{
    int fibo = fibonacci(10);

    cout << fibo << endl;

    return 0;
}

// Time complexity:
// O(2^n) aproximadamente
//
// Space complexity:
// O(n)