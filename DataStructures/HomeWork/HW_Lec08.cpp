#include <iostream>
using namespace std;
void Question_01()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int), sum = 0, product = 1;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        product = product * arr[i];
    }
    cout << "Sum: " << sum << endl
         << "Product :" << product << endl;
}
void Question_02()
{
    int arr[] = {4, 8, 3, 2, 7, 1};
    int smallest_index = 0, largest_index = 0, min = INT32_MAX, max = 0;
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            largest_index = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            smallest_index = i;
        }
    }
    int temp = arr[smallest_index];
    arr[smallest_index] = arr[largest_index];
    arr[largest_index] = temp;
    cout << "Swaped Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void Question_03()
{
    int arr[] = {7, 0, 0, 7, 9, 2, 0, 8, 1, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        bool check = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << arr[i] << " ";
        }
    }
}
void Question_04()
{
    int arr1[] = {1, 2, 3,5,6};
    int arr2[] = {2, 3, 4};
    int s1 = sizeof(arr1) / sizeof(int), s2 = sizeof(arr2) / sizeof(int);

    //Print the common elements of the two arrays

}
int main()
{
    // Question_01();
    // Question_02();
    // Question_03();
    Question_04();
    return 0;
}