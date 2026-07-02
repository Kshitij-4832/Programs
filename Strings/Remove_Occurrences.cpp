#include<iostream>
using namespace std;
int main(){
    string s = "cabcabcabcabcab",part="ab";
    int size = s.length(),start=0;
    while(s.find(part)<s.length()){
        start = s.find(part);
        s.erase(start,part.length());
    }
    cout<<s.find(part)<<endl;
    return 0;
}