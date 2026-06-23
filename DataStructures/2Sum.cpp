#include <bits/stdc++.h>
using namespace std;
void Calc(vector<int> &nums, int target)
{
    int size = nums.size();
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        int first = nums[i];
        int second = target - first;
        if (mpp.find(second) != mpp.end())
        {
            cout << i << " and " << mpp[second];
        }
        else
        {
            mpp[first] = i;
        }
    }
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    Calc(nums, target);
    return 0;
}