#include <iostream>
#include <vector>
using namespace std;

// Brute Force
/*int Majority()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = i; j < size; j++)
        {
            if (nums.at(i) == nums.at(j))
            {
                count++;
            }
        }
        if (count >  (size / 2))
        {
            return nums.at(i);
        }
    }
    return 0;
}*/
// Optimal solution-->Sort the array and traverse it.

// Moore's Algo

int Majority()
{
    vector<int> vec = {1, 2, 3, 3, 3, 3, 3, 3, 4, 4};
    int size = vec.size(), freq = 0, ans = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (freq == 0)
        {
            ans = vec.at(i);
        }
        if (vec.at(i) == ans)
        {
            freq++;
        }
        if (vec.at(i) != ans)
        {
            freq--;
        }
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (vec.at(i) == ans)
        {
            count++;
        }
    }
    if (count > size / 2)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}

int main()
{
    cout << Majority();
    return 0;
}
