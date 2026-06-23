#include <iostream>
using namespace std;
int main()
{
    int marks[] = {99, 98, 97, 96, 95};
    int size = sizeof(marks) / sizeof(int); // No of elements in array
    for (int i = 0; i < size; i++)
    {
        cout << marks[i] << " ";
    }
    return 0;
}