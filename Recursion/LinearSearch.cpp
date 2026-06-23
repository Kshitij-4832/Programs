#include <bits/stdc++.h>
using namespace std;
int Index(vector<int> &nums, int target, int index)
{
    if (nums[index] == target)
    {
        return index;
    }
    if (index == nums.size())
    {
        return -1;
    }
    return Index(nums, target, index + 1);
}
int main()
{
    vector<int> nums = {4, 8, 3, 2, 5, 9, 6};
    int index = 0, target = 8;
    cout << Index(nums, target, index) << endl;
    return 0;
}