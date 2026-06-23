#include <iostream>
#include <vector>
using namespace std;
void Overide(vector<int> &vec) // O(n)
{
    int zero = 0, one = 0, two = 0, size = vec.size();
    for (int i = 0; i < size; i++)
    {
        if (vec[i] == 0)
        {
            zero++;
        }
        else if (vec[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (zero != 0)
        {
            vec[i] = 0;
            zero--;
        }
        else if (one != 0)
        {
            vec[i] = 1;
            one--;
        }
        else if (two != 0)
        {
            vec[i] = 2;
            two--;
        }
    }
}
void DNF(vector<int>&vec)
{
    int size = vec.size();
    int low = 0, mid = 0, high = size - 1;
    while (mid <= high)
    {
        if (vec[mid] == 0)
        {
            swap(vec[mid], vec[low]);
            low++;
            mid++;
        }
        else if (vec[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(vec[high], vec[mid]);
            high--;
        }
    }
}
int main()
{
    vector<int> vec = {2, 0, 2, 1, 1, 0, 1, 2, 0, 0};
    // Overide(vec);
    DNF(vec);
    for (int ans : vec)
    {
        cout << ans << " ";
    }
    return 0;
}