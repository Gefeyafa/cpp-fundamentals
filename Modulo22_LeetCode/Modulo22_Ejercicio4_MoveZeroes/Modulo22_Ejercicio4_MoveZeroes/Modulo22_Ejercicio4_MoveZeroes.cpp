#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int>& nums)
    {
        int position = 0;

        // Compactamos todos los valores distintos de 0 al inicio.
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != 0)
            {
                nums[position] = nums[i];
                position++;
            }
        }

        // Rellenamos con 0 todas las posiciones restantes.
        for (int i = position; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};

int main()
{
    vector<int> nums = { 0, 1, 0, 3, 12 };
    Solution solution;

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl << endl;

    solution.moveZeroes(nums);

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)