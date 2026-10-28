#include <iostream>
#include <vector>

using namespace std;

// Sliding Window: calculamos la primera ventana y luego
// la desplazamos quitando un valor y agregando el siguiente.
int maxSumSubarray(const vector<int>& numbers, int windowSize)
{
    int suma = 0;

    for (int i = 0; i < windowSize; i++)
    {
        suma += numbers[i];
    }

    int sumaMaxima = suma;

    for (int i = windowSize; i < numbers.size(); i++)
    {
        suma -= numbers[i - windowSize];
        suma += numbers[i];

        if (suma > sumaMaxima)
        {
            sumaMaxima = suma;
        }
    }

    return sumaMaxima;
}

int main()
{
    vector<int> numbers = { 2, 1, 5, 1, 3, 2 };
    int windowSize = 3;

    int maxSum = maxSumSubarray(numbers, windowSize);

    cout << "La suma maxima es: " << maxSum << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)