#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char str[100];
    /*cout << "Enter char array: ";
     cin >> str;
     cout << "Output : " << str << endl;*/
    char ct[9];
    cout<<"Enter char array : ";
    cin.getline(ct,9,'$');//Here $ is the delimiter
    for(char ch:ct){
        cout<<ch<<" ";
    }
    cout<<endl;
    return 0;
}