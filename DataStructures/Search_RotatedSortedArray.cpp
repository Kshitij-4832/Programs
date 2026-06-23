#include <iostream>
#include <vector>
using namespace std;

int Search()
{

    vector<int> vec = {6, 7, 0, 1, 2, 3, 4, 5};
    int size = vec.size(), start = 0, end = size - 1, mid = (start + end) / 2, target = 0;
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (vec[mid] == target)
        {
            return mid;
        }
        else if (vec[start] < vec[mid]) // Left Sorted
        {
            if (vec[start] <= target && target <= vec[mid])
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else//Right Sorted
        {
            if (vec[mid] <= target && target <= vec[end])
            {
                start = mid - 1;
            }
            else
            {
                end = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    cout << Search() << endl;
    return 0;
}