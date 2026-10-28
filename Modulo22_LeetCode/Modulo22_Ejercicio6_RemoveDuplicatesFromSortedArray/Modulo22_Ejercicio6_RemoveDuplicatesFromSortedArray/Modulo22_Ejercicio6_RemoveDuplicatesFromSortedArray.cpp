#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        // k representa el indice del ultimo elemento unico guardado.
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            // Como el vector esta ordenado, un valor diferente
            // significa que encontramos un nuevo elemento unico.
            if (nums[k] != nums[i])
            {
                nums[k + 1] = nums[i];
                k++;
            }
        }

        // k es un indice, por eso regresamos k + 1 como cantidad.
        return k + 1;
    }
};

int main()
{
    vector<int> nums = { 0, 0, 1, 1, 1, 2, 2, 3, 3, 4 };
    Solution solution;

    cout << "Vector: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl << endl;

    cout << "Unique elements: " << solution.removeDuplicates(nums);

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)