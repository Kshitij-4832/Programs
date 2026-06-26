#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {2, 5, 10, 10, 10};
    int size = arr.size();
    int l = 0, r = 0, sum = 0, max_len = 0, k = 14;
    while (r < size)
    {
        sum = sum + arr[r];
        while (sum > k)
        {
            sum = sum - arr[l];
            l++;
        }
        if (sum <= k)
        {
            max_len = max(max_len, r - l + 1);
        }
        r++;
    }
    cout << max_len << endl;
    return 0;
}