#include <iostream>
#include <vector>
using namespace std;
// Approach-01 (Nested loop)
/*
int main()
{
    vector<int> num = {3, 5, 3, 5, 4, 1, 2, 1, 2};
    int size = num.size();
    for (int i = 0; i < size; i++)
    {
        bool check = false;
        for (int j = 0; j < size; j++)
        {
            if (num.at(i) == num.at(j) && i != j)
            {
                check = true;
                break;
            }
        }
        if (!check)
        {
            cout << num.at(i) << endl;
            break;
        }
    }
    return 0;

}*/

// Approach-02 (Bitwise Operator)-->Optimal Solution

int main()
{
    vector<int> num = {3, 5, 3, 5, 4, 1, 2, 1, 2};
    int size = num.size();
    int n = 0;
    for (int i = 0; i < size; i++)
    {
        n = n ^ num.at(i);
    }
    cout << n << endl;
}