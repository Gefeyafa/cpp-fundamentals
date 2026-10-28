#include <iostream>
#include <vector>

using namespace std;

int maxProfit(const vector<int>& prices)
{
    // Si no hay precios, no puede haber ganancia.
    if (prices.empty())
    {
        return 0;
    }

    int minPrice = prices[0];
    int currentProfit;
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        // Guardamos el precio mas bajo visto hasta ahora.
        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
        else
        {
            currentProfit = prices[i] - minPrice;

            if (currentProfit > maxProfit)
            {
                maxProfit = currentProfit;
            }
        }
    }

    return maxProfit;
}

int main()
{
    vector<int> prices = { 7, 1, 5, 3, 6, 4 };
    int profit = maxProfit(prices);

    cout << "The maximum profit is: " << profit << endl;

    return 0;
}

// Time complexity:
// O(n)
//
// Space complexity:
// O(1)