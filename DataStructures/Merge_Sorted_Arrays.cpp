#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int m = 3, n = 3;
    vector<int> A = {2, 5, 7, 0, 0, 0};
    vector<int> B = {3, 9, 13};
    int i = m - 1, j = n - 1, index = m + n - 1;
    while (i >= 0 && j >= 0)
    {
        if (A[i] >= B[j])
        {
            A[index] = A[i];
            i--;
            index--;
        }
        else
        {
            A[index] = B[j];
            j--;
            index--;
        }
    }
    while (j >= 0)
    {
        A[index] = B[j];
        index--;
        j--;
    }
    for (int ans : A)
    {
        cout << ans << " ";
    }
    return 0;
}
