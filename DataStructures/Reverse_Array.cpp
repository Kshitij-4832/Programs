// Two Pointer Approach

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 8, 3, 2, 7, 1};
    int size = sizeof(arr) / sizeof(int);
    int end = size - 1;
    for (int i = 0; i < size / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[end];
        arr[end] = temp;
        end--;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}