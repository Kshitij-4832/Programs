#include <iostream>
#include<algorithm>
using namespace std;

int maxProduct(int n)
{
    string str = "";
    for (int i = 0; n != 0; i++)
    {
        str[i] = n % 10;
        n = n / 10;
    }
    sort(str.begin(), str.end());
    int size = str.length();
    return ((int)str[size - 1] * (int)str[size - 2]);
}
int main()
{
    return 0;
}