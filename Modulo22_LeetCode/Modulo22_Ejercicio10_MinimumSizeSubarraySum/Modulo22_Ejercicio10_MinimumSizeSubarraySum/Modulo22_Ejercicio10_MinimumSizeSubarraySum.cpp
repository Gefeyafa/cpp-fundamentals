#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int left = 0;
        int sum = 0;
        int minLength = nums.size() + 1;

        for (int right = 0; right < nums.size(); right++)
        {
            // Expandimos la ventana hacia la derecha.
            sum += nums[right];

            // Mientras la ventana sea valida, intentamos hacerla mas pequena.
            while (sum >= target)
            {
                int currentLength = right - left + 1;

                if (currentLength < minLength)
                {
                    minLength = currentLength;
                }

                sum -= nums[left];
                left++;
            }
        }

        // Si nunca encontramos una ventana valida.
        if (minLength == nums.size() + 1)
        {
            return 0;
        }

        return minLength;
    }
};

int main()
{
    int target = 7;
    vector<int> nums = { 2, 3, 1, 2, 4, 3 };

    Solution solution;

    cout << "Minimal Length: " << solution.minSubArrayLen(target, nums) << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)