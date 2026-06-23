//Retry
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Next(vector<int> &nums)
{
    int size = nums.size(),piviot=-1;
    for(int i =size-1;i>0;i--){
        if(nums[i]<nums[i-1]){
            piviot = i-1;
            break; 
        }
    }
}
int main()
{
    vector<int> nums = {1,2,5,4,3};
    Next(nums);
    for (int ans : nums)
    {
        cout << ans << " ";
    }
    return 0;
}