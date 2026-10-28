#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums)
	{
		// Usamos un valor real del vector para manejar
		// correctamente casos donde todos sean negativos.
		int maxSum = nums[0];
		int currentSum = 0;

		for (int i = 0; i < nums.size(); i++)
		{
			currentSum += nums[i];

			// Si empezar un nuevo subarray desde nums[i] es mejor,
			// descartamos la suma anterior.
			if (nums[i] > currentSum)
			{
				currentSum = nums[i];
			}

			// Guardamos la mejor suma encontrada hasta el momento.
			if (maxSum < currentSum)
			{
				maxSum = currentSum;
			}
		}

		return maxSum;
	}
};

int main()
{
	vector<int> nums = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	Solution solution;

	cout << "Maximum subarray is: " << solution.maxSubArray(nums) << endl;

	return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)