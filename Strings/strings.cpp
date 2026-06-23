#include <iostream>
// #include <cstring>
using namespace std;
int main()
{
    string str = "Hello World"; // dynamic => runtime resize
    cout << str << endl;
    str = "Hello";
    cout << str << endl;
    cout << str.length() << endl;
    string str1 = "Hello";
    string str2 = "World";
    cout << str1 + str2 << endl; // Concatenation

    //getline(cin, str);
    
    return 0;
}