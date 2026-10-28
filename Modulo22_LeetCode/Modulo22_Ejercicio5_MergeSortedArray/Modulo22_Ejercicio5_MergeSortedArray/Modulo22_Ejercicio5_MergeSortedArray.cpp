#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        // Punteros al ultimo valor valido de nums1,
        // al ultimo valor de nums2 y a la ultima posicion disponible.
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        // Comparamos desde el final y colocamos el mayor en nums1[k].
        while (i >= 0 && j >= 0)
        {
            if (nums1[i] < nums2[j])
            {
                nums1[k] = nums2[j];
                j--;
                k--;
            }
            else
            {
                nums1[k] = nums1[i];
                i--;
                k--;
            }
        }

        // Si nums2 todavia tiene elementos,
        // los copiamos en las posiciones restantes de nums1.
        while (j >= 0)
        {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};

int main()
{
    vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
    int m = 3;

    vector<int> nums2 = { 2, 5, 6 };
    int n = 3;

    Solution solution;

    cout << "Vector 1: " << endl;
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }
    cout << endl << endl;

    cout << "Vector 2: " << endl;
    for (int i = 0; i < nums2.size(); i++)
    {
        cout << nums2[i] << " ";
    }
    cout << endl << endl;

    solution.merge(nums1, m, nums2, n);

    cout << "Solution: " << endl;
    for (int i = 0; i < nums1.size(); i++)
    {
        cout << nums1[i] << " ";
    }

    return 0;
}

// Time complexity:
// O(m + n)
//
// Space complexity:
// O(1)