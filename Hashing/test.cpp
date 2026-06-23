#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;
    int size = nums.size();
    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[nums[i]]++;
    }
    size = mpp.size();
    // cout << size<<endl;
    return 0;
}