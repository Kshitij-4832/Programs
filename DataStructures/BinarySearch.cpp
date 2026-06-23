#include <iostream>
#include <vector>
using namespace std;
int Binary_Search(vector<int> &vec)
{
    int size = vec.size(), target = 12, start = 0, end = size;
    while (start < end)
    {
        int mid = start + ((end - start) / 2);
        if (target > vec[mid])
        {
            start = mid++;
        }
        else if (target < vec[mid])
        {
            end = mid--;
        }
        else if (target == vec[mid])
        {
            return mid;
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {-1, 0, 3, 4, 5, 9, 12};
    cout << Binary_Search(vec) << endl;
    return 0;
}