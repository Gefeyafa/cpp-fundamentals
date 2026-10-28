#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k)
    {
        unordered_map<int, int> frequencies;
        int prefixSum = 0;
        int count = 0;

        // Representa la suma acumulada 0 antes de recorrer el vector.
        frequencies[0] = 1;

        for (int i = 0; i < nums.size(); i++)
        {
            prefixSum += nums[i];

            // Si prefixSum - k ya aparecio, existen subarrays
            // que terminan en i y cuya suma es exactamente k.
            if (frequencies.find(prefixSum - k) != frequencies.end())
            {
                count += frequencies[prefixSum - k];
            }

            // Registramos la suma acumulada actual.
            frequencies[prefixSum]++;
        }

        return count;
    }
};

int main()
{
    vector<int> nums = { 1, 2, 3 };
    int k = 3;

    Solution solution;

    cout << "Vector: " << endl;
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl << endl;

    cout << "Number of subarrays whose sum equals to " << k << ": "
        << solution.subarraySum(nums, k) << endl;

    return 0;
}

// Time complexity:
// Average: O(n)
// Worst case: O(n^2) due to unordered_map
//
// Space complexity:
// O(n)