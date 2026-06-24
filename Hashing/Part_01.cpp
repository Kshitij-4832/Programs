#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> mpp; // Sorts the data in ascending order lexicographically
    mpp["tv"] = 50;
    mpp["laptop"] = 100;
    mpp["headphones"] = 50;

    // mpp["tv"] = 100; // Updates the value of tv to 100

    mpp.insert({"camera", 25});
    for (auto p : mpp)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << mpp.count("tv") << endl;
    cout << mpp.size() << endl;
    if(mpp.find("tv") != mpp.end())
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}