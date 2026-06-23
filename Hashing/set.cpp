#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {3,0,1};
    int size = arr.size();
    set <int,int> s;
    for(int i=0;i<size;i++){
        if(s.find(arr[i])!=s.end()){
            s.insert(arr[i]);
        }
    }
    cout<<s
    return 0;
}