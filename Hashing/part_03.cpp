#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> s; // Create a set of integers
    s.insert(5);
    s.insert(10);
    s.insert(15);
    s.insert(25);
    s.insert(5);
    for (int x : s)
    {
        cout << x << " ";
    }
    if (s.find(5) == s.end())
    {
    }
    return 0;
}