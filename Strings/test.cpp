#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> pattern = {"a", "b", "c"};
    string part = "aaaaaabbbbb";
    int count = 0;
    for (int i = 0; i < pattern.size(); i++)
    {
        if (part.find(pattern[i]) < part.length())
        {
            count++;
        }
    }
    cout << count;
    return 0;
}