#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums1 = {1, 3, 5, 14};
    vector<int> nums2 = {2, 4, 8, 9, 11};
    int size1 = nums1.size();
    int size2 = nums2.size();
    int start = 0, end1 = min(size1, size2) - 1;
    while (start <= end1)
    {
        int mid1 = start + end1 / 2;
        int mid2 = ((size1 + size2) / 2) - mid1 - 1;
        int l1 = nums1[mid1], l2 = nums2[mid2], r1 = nums1[mid1 + 1], r2 = nums2[mid2 + 1];
        cout << l1 << " " << l2 << " " << r1 << " " << r2 << endl;
        if (l1 < r2 && l2 < r1)
        {
            /*if (size1 + size2 % 2 == 0)
            {
                cout << max(l1, l2) + min(r1, r2) / 2;
            }
            else
            {
                cout<<l1;
                cout<<l2;
            }*/
            break;
        }
        else if (l2 > r1)
        {
            end1 = mid1 - 1;
        }
        else
        {
            start = mid1 + 1;
        }
    }
    return 0;
}