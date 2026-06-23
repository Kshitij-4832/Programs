#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 8, 3, 2, 7, 1};
    cout << "Enter target value" << endl;
    int target = 0, size = sizeof(arr) / sizeof(int);
    cin >> target;
    bool check = false;
    for (int i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            cout << "Target exist at index " << i;
            check = true;
        }
    }
    if (!check)
    {
        cout << "Target does not exist";
    }
    return 0;
}
//Time complexity-O(n)