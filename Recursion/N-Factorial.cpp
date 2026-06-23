#include <bits/stdc++.h>
using namespace std;
int Factorial(int n,int fact){
    if(n==1||n==0){
        return fact;
    }
    else{
        fact = fact*n;
        return Factorial(n-1,fact);
    }
}
int main()
{
    int n = 5;
    int fact = 1;
    cout<< Factorial(n,fact)<<endl;
    return 0;
}