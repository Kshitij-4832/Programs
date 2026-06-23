#include <iostream>
#include <vector>
using namespace std;
vector<int> Pro(vector<int> &vec)
{
    int size = vec.size(), product = 1;
    vector<int> result;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                product = product * vec.at(j);
            }
        }
        result.push_back(product);
        product = 1;
    }
    return result;
}
vector<int> Product_Self(vector<int> &vec)
{
    int size = vec.size();

    vector<int> ans(size, 1);
    // vector<int> prefix(size, 1);
    // vector<int> suffix(size, 1);
    int prefix = 1, suffix = 1;
    for (int i = 1; i < size; i++) // Firstly store prefixes in the ans
    {
        prefix = prefix * vec.at(i - 1);
        ans[i] = prefix;
    }
    for (int i = size - 2; i >= 0; i--) // Then multiply with corresponding suffixes
    {
        suffix = suffix * vec.at(i + 1);
        ans[i] *= suffix;
    }
    // Vice Versa can also be done .
    // It basically imporves the space Complexity from O(n) to O(1).

    return ans;
}
int main()
{
    vector<int> vec = {-1, 1, 0, -3, 3};
    /*for (int ans : Pro(vec))
    {
        cout << ans << " ";
    }*/
    for (int ans : Product_Self(vec))
    {
        cout << ans << " ";
    }
    return 0;
}