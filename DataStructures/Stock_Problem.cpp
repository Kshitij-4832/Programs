#include <iostream>
#include <vector>
using namespace std;
// Brute Force-->Time Complexity = O(n^2)
/*
int Max_Profit()
{
    vector<int> vec = {7, 1, 5, 3, 6, 4};
    int size = vec.size(), curr = 0, max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            curr = vec.at(j) - vec.at(i);
            if (max < curr)
            {
                max = curr;
            }
            curr = 0;
        }
    }
    if (max < 0)
    {
        return 0;
    }
    else
    {
        return max;
    }
}
*/
// Optimal Approach

int Max_Profit()
{
    vector<int> Price = {7, 1, 5, 3, 6, 4};
    int max_profit = 0, bestbuy = Price.at(0), size = Price.size();
    for (int i = 1; i < size; i++)
    {
        if (max_profit < (Price.at(i) - bestbuy))
        {
            max_profit = Price.at(i) - bestbuy;
        }
        bestbuy = min(Price.at(i), bestbuy);
    }
    return max_profit;
}

int main()
{
    cout << Max_Profit() << endl;
    return 0;
}