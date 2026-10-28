#include <iostream>
#include <vector>

using namespace std;

// Recursive Binary Search: reducimos el rango a la mitad en cada llamada.
int binarySearch(const vector<int>& numbers, int target, int start, int end)
{
    // Base case: ya no queda un rango valido donde buscar.
    if (start > end)
    {
        return -1;
    }

    int middle = start + (end - start) / 2;

    if (target == numbers[middle])
    {
        return middle;
    }
    else if (target < numbers[middle])
    {
        // Buscar en la mitad izquierda.
        return binarySearch(numbers, target, start, middle - 1);
    }
    else
    {
        // Buscar en la mitad derecha.
        return binarySearch(numbers, target, middle + 1, end);
    }
}

int main()
{
    vector<int> numbers = { 5, 10, 20, 30, 40, 50, 70, 90 };
    int target = 70;
    int start = 0;
    int end = numbers.size() - 1;

    int index = binarySearch(numbers, target, start, end);

    if (index != -1)
    {
        cout << "Numero encontrado en el indice: " << index << endl;
    }
    else
    {
        cout << "Numero no encontrado" << endl;
    }

    return 0;
}

// Time complexity:
// Best case: O(1)
// Average case: O(log n)
// Worst case: O(log n)
//
// Space complexity:
// O(log n)