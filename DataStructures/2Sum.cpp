#include <bits/stdc++.h>
using namespace std;
void Calc(vector<int> &nums, int target)
{
    int size = nums.size(), index = 0;
    unordered_map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        int second = target - nums[i];
        if (mpp.find(second) != mpp.end())//O(1)
        {
            cout << i << " " << mpp[second];
        }
        else
        {
            mpp.insert({nums[i], i});
        }
    }
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 18;
    Calc(nums, target);
    return 0;
}