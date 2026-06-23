#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mpp; // Sorts the data in ascending order lexicographically
    mpp["tv"] = 10;
    mpp["laptop"] = 100;
    mpp["headphones"] = 1000;
    mpp.insert({"camera", 25});
    for (auto p : mpp)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << mpp.count("tv") << endl;
    cout << mpp.size();
    return 0;
}