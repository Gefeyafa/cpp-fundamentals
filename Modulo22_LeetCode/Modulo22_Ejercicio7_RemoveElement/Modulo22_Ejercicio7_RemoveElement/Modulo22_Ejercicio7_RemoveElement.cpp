#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        // k indica la siguiente posicion donde guardar
        // un elemento diferente de val.
        int k = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                nums[k] = nums[i];
                k++;
            }
        }

        // k representa la cantidad de elementos validos.
        return k;
    }
};

int main()
{
    vector<int> nums = { 0,1,2,2,3,0,4,2 };
    int val = 2;
    Solution solution;

    cout << "Vector: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl << endl;

    cout << "Numbers of elements in vector that are not " << val << ": "
        << solution.removeElement(nums, val);

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)