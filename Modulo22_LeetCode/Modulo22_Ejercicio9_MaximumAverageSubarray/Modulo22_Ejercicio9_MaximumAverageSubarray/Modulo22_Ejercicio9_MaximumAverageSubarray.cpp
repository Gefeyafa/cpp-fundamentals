#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k)
    {
        // Calculamos la suma de la primera ventana.
        int maxSum = 0;

        for (int i = 0; i < k; i++)
        {
            maxSum += nums[i];
        }

        int actualSum = maxSum;

        // Sliding Window:
        // agregamos el nuevo elemento y quitamos el que sale.
        for (int i = k; i < nums.size(); i++)
        {
            actualSum += nums[i];
            actualSum -= nums[i - k];

            if (actualSum > maxSum)
            {
                maxSum = actualSum;
            }
        }

        // Convertimos a double antes de dividir para conservar los decimales.
        double average = static_cast<double>(maxSum) / k;

        return average;
    }
};

int main()
{
    vector<int> nums = { 1, 12, -5, -6, 50, 3 };
    int k = 4;

    Solution solution;

    cout << "Average is: " << solution.findMaxAverage(nums, k) << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)