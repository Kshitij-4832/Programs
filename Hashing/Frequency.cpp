#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4, 8, 3, 2, 7, 1, 7, 7, 5, 1, 4, 6};
    int size = sizeof(arr) / sizeof(int);

    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto ans : mpp)
    {
        cout << ans.first << " : " << ans.second << endl;
    }
    return 0;
}