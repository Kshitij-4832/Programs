#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3};
    int size = arr.size();
    int l = 0, r = 0, sum = 0, countx = 0, county = 0, k = 2;
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
            countx++;
        }
        r++;
    }
    r = 0, l = 0, sum = 0, k--;
    while (r < size)
    {
        sum = sum + arr[r];
        if (sum > k)
        {
            sum = sum - arr[l];
            l++;
        }
        if (sum <= k)
        {
            county++;
        }
        r++;
    }
    cout << countx << " " << county << endl;
    return 0;
}