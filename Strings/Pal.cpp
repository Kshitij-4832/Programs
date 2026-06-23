#include<iostream>
using namespace std;
bool isPalindrome(string s) {
        string copy ="";
        int size = s.length(),index=0;
        for(int i=0;i<size;i++){
            if(((int)s[i]>=65&&(int)s[i]<=90)||((int)s[i]>=97&&(int)s[i]<=122)){
                copy[index] =tolower(s[i]);
                index++;
            }
        }
        int start = 0,end=index-1;
        while(start<=end){
            if(copy[start]!=copy[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
int main(){
    cout<<isPalindrome("A man, a plan, a canal: Panama")<<endl;
    return 0;
}