#include <bits/stdc++.h>
using namespace std;
int Index(vector<int> &nums, int target, int start, int end, int mid)
{
    mid = (start + end) / 2;
    if (nums[mid] == target)
    {
        return mid;
    }
    if (target > nums[mid])
    {
        return Index(nums, target, mid + 1, end, mid);
    }
    if (target < nums[mid])
    {
        return Index(nums, target, start, mid - 1, mid);
    }
    else
    {
        return -1;
    }
}
int main()
{
    vector<int> nums = {2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13};
    int target = 8, start = 0, end = nums.size() - 1, mid = 0;
    cout << Index(nums, target, start, end, mid) << endl;
    return 0;
}