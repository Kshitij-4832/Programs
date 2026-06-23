#include <iostream>
#include <vector>

using namespace std;
/*void Pair()//Brute Force
{
    vector<int> vec = {2, 7, 11, 15};
    int target = 13, size = vec.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (vec.at(i)+vec.at(j)==target && i != j)
            {
                cout << "Pair: " << vec.at(i) << " and " << vec.at(j) << endl;
            }
        }
    }
}*/
// Two pointer approach
//Time Complexity-->O(n)
void Pair()
{
    vector<int> vec = {2, 7, 11, 15};
    int start = 0, end = vec.size() - 1, target = 13, pair = 0;
    while (start < end)
    {
        pair = vec.at(start) + vec.at(end);
        if (pair > target)
        {
            end--;
        }
        else if (pair < target)
        {
            start++;
        }
        else
        {
            cout << "Pair :" << vec.at(start) << "and" << vec.at(end);
            break;
        }
    }
}
int main()
{
    Pair();
    return 0;
}