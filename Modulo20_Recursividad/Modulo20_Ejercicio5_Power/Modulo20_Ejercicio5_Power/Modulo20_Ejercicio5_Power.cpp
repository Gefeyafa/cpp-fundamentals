#include <iostream>

using namespace std;

int power(int base, int exponent)
{
    // Base case: cualquier numero elevado a 0 es 1.
    if (exponent == 0)
    {
        return 1;
    }

    // Recursive case: multiplicamos la base por el resultado
    // de la misma potencia con un exponente menor.
    return base * power(base, exponent - 1);
}

int main()
{
    int potencia = power(2, 4);

    cout << potencia << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(n)