#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
	int maxSubArray(vector<int>& nums)
	{
		// Empezamos con un valor real del vector para manejar
		// correctamente casos donde todos los numeros sean negativos.
		int maxSum = nums[0];

		for (int i = 0; i < nums.size(); i++)
		{
			// Cada nuevo subarray comienza en la posicion i.
			int sum = nums[i];

			if (nums[i] > maxSum)
			{
				maxSum = nums[i];
			}

			// Extendemos el subarray hacia la derecha.
			for (int j = i + 1; j < nums.size(); j++)
			{
				sum += nums[j];

				if (maxSum < sum)
				{
					maxSum = sum;
				}
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
// O(n^2)
//
// Space complexity:
// O(1)