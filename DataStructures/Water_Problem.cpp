#include <iostream>
#include <vector>
using namespace std;
// Brute force--Time Complexity--O(n^2)
/*int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = height.size(), curr_area = 1, max = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                curr_area = (min(height.at(i), height.at(j))) * (i - j);
                if (curr_area < 0)
                {
                    curr_area = curr_area * (-1);
                }
            }
            if (max < curr_area)
            {
                max = curr_area;
            }
        }
        curr_area = 1;
    }
    cout << max << endl;

    return 0;
}*/

// Two Pointer--Time Complexity--O(n)
// Space Complexity--O(1)
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size = height.size(), left = 0, right = size, curr_area = 1, max_area = 0;
    while (left < right)
    {
        curr_area = min(height.at(left), height.at(right - 1)) * (right - left);
        if (max_area < curr_area)
        {
            max_area = curr_area;
        }
        if (height.at(left) < height.at(right - 1))
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout << max_area << endl;
    return 0;
}

