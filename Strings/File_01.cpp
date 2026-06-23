#include <iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[] = "Hello"; // \0 is null character
    cout << str << endl;//prints Hello
    
    cout <<strlen(str)<<endl;

    
    return 0;
}