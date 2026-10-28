#include <iostream>
#include <vector>

using namespace std;

int pivotIndex(const vector<int>& nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int leftSum = 0;
        int rightSum = 0;

        // Sumamos todos los elementos a la izquierda de i.
        for (int j = i - 1; j >= 0; j--)
        {
            leftSum += nums[j];
        }

        // Sumamos todos los elementos a la derecha de i.
        for (int j = i + 1; j < nums.size(); j++)
        {
            rightSum += nums[j];
        }

        if (leftSum == rightSum)
        {
            return i;
        }
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
// O(n^2)
//
// Space complexity:
// O(1)