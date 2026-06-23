#include <iostream>
using namespace std;
int main()
{
    int num[] = {4, 8, 3, 2, 7, -1};
    int max = 0, min, size = sizeof(num) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (max < num[i])
        {
            max = num[i];
        }
    }
    min = max;
    cout << "Maximum value " << max << endl;
    for (int i = 0; i < size; i++)
    {
        if (min > num[i])
        {
            min = num[i];
        }
    }
    cout << "Minimum value " << min << endl;
    return 0;
}