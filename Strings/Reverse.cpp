#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str = "1001001", temp = "";
    int size = str.length();
   //reverse(str.begin(), str.end());
    for (int i = 0; i < size; i++)
    {
        temp[0] = str[i];
        str[i] = str[size - 1];
        str[size - 1] = temp[0];
        temp = "";
        size--;
    }
    cout << str << endl;
    return 0;
}