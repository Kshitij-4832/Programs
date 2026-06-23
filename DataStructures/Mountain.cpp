#include <iostream>
#include <vector>

using namespace std;

int Brute_Force(vector<int> &vec)
{
    int size = vec.size(), lar = 0, j = 0;
    for (int i = 1; i < size; i++)
    {
        if (vec[i - 1] < vec[i] || vec[i] > vec[i + 1])
        {
            if (lar < vec[i - 1])
            {
                lar = vec[i - 1];
                j = i - 1;
            }
        }
    }
    return j;
}
int Bin_Approach(vector<int> &vec)
{
    int size = vec.size(), start = 1, end = size - 2, mid = 0;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (vec[mid - 1] < vec[mid] && vec[mid] > vec[mid + 1])
        {
            return mid;
        }
        else if (vec[mid - 1] > vec[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {0, 2, 1, 0};
    // cout << Brute_Force(vec);
    cout << Bin_Approach(vec) << endl;
    return 0;
}