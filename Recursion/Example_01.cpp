#include<bits/stdc++.h>
using namespace std;
void func(int n){
    if(n>4){
        return;
    }
    else{
        cout<<n<<" ";
        return func(n+1);
    }
}
int main(){
    int n =1;
    func(n);
    return 0;
}