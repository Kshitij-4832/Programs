#include <iostream>
#include <vector>
using namespace std;
void Brute_Force()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int sum = 0, size = vec.size(), end = 0, start = 0, max = INT16_MIN;
    for (start = 0; start < size; start++)
    {
        sum = 0;
        for (end = start; end < size; end++)
        {
            sum = sum + vec.at(end);
            if (max < sum)
            {
                max = sum;
            }
        }
    }
    cout << max;
}

// Kadane's Algorithm
//Time Complexity -->O(n)

int Kadane()
{
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int size = vec.size(), sum = 0, max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        sum = sum + vec.at(i);

        if (max < sum)
        {
            max = sum;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    return max;
}
int main()
{
    // Brute_Force();
    cout << Kadane() << endl;
    return 0;
}