#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int inicio = 0;
        int fin = nums.size() - 1;
        int medio;

        while (inicio <= fin)
        {
            // Calculamos el indice central del rango actual.
            medio = inicio + (fin - inicio) / 2;

            if (target == nums[medio])
            {
                return medio;
            }
            else if (target < nums[medio])
            {
                // Descartamos la mitad derecha.
                fin = medio - 1;
            }
            else
            {
                // Descartamos la mitad izquierda.
                inicio = medio + 1;
            }
        }

        return -1;
    }
};

int main()
{
    vector<int> nums = { -1, 0, 3, 5, 9, 12 };
    int target = 9;

    Solution solution;

    cout << "Vector: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Target: " << target << endl << endl;

    int index = solution.search(nums, target);

    cout << "Index of target: " << index << endl;

    return 0;
}

// Time complexity:
// O(log n)
//
// Space complexity:
// O(1)