// Linear Search
// Reverse the array
// Use vector

#include <iostream>
#include <vector>
using namespace std;
void Linear_Search()
{
    vector<int> vec = {4, 8, 3, 7, 1, 2};
    int size = vec.size();
    int key = 2;
    bool check = true;
    for (int i = 0; i < size; i++)
    {
        if (key == vec.at(i))
        {
            cout << "Key found at index :" << i << endl;
            check = false;
            break;
        }
    }
    if (check)
    {
        cout << "Key does not exist." << endl;
    }
}
void Reverse(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size / 2; i++)
    {
        int temp = vec.at(i);
        vec.at(i) = vec.at(size - i - 1);
        vec.at(size - i - 1) = temp;
    }
}
int main()
{
    // Linear_Search();
    vector<int> vec = {4, 8, 3, 2, 7, 1};
    Reverse(vec);
    for(int trav:vec){
        cout<<trav<<" ";
    }
    return 0;
}