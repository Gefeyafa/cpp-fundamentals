#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end)
        {
            // Buscamos el punto medio del rango actual.
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }

        // Si target no existe, start queda en su posicion de insercion.
        return start;
    }
};

int main()
{
    vector<int> nums = { 1, 3, 5, 6 };
    int target = 5;

    Solution solution;

    cout << "Output: " << solution.searchInsert(nums, target) << endl;

    return 0;
}

// Time complexity:
// O(log n)
//
// Space complexity:
// O(1)