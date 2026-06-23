#include <iostream>
#include <vector>
using namespace std;

int Single_Element(vector<int> &vec)
{
    int size = vec.size(), start = 1, end = size - 2, mid = 0;
    if (size == 1)
        return vec[0];

    if (vec[0] != vec[1])
        return vec[0];

    if (vec[size - 1] != vec[size - 2])
        return vec[size - 1];
    while (start <= end)
    {
        mid = start + ((end - start) / 2);
        if (vec[mid] != vec[mid + 1] && vec[mid] != vec[mid - 1])
        {
            return vec[mid];
        }
        else if (vec[mid - 1] == vec[mid])
        {
            if ((mid - 1) % 2 != 0)
            {
                end = mid - 1;
            }
            else
            {
                start = mid + 1;
            }
        }
        else
        {
            if ((mid + 1) % 2 != 0)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> vec = {3, 3, 7, 7, 10, 11, 11};
    cout << Single_Element(vec) << endl;
    return 0;
}