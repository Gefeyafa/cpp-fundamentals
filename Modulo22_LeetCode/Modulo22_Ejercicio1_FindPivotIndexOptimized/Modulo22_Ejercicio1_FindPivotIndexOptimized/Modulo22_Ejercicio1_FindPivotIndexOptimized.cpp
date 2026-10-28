#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(const vector<int>& nums)
{
    int totalSum = 0;
    int leftSum = 0;
    int rightSum;

    // Primero obtenemos la suma total del vector.
    for (int i = 0; i < nums.size(); i++)
    {
        totalSum += nums[i];
    }

    for (int i = 0; i < nums.size(); i++)
    {
        // Lo que queda despues de quitar izquierda y elemento actual
        // corresponde a la suma de la derecha.
        rightSum = totalSum - leftSum - nums[i];

        if (leftSum == rightSum)
        {
            return i;
        }

        leftSum += nums[i];
    }

    return -1;
}

int main()
{
    vector<int> nums = { 1, 7, 3, 6, 5, 6 };
    int index = pivotIndex(nums);

    if (index != -1)
    {
        cout << "Index: " << index << endl;
    }
    else
    {
        cout << "No available index" << endl;
    }

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)