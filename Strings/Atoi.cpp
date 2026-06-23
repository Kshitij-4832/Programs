#include <bits/stdc++.h>
using namespace std;
void myAtoi(string s)
{
    int size = s.length(), sign = 1, k = 0;
    string ans = "";
    bool check_sign = false;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == '-' && check_sign == false)
        {
            check_sign = true;
            sign = -1;
        }
        else if ((int)s[i] >= 48 && (int)s[i] <= 57)
        {
            check_sign = true;
            ans[k] = s[i];
            k++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z' || ((s[i] == '-' || s[i] == '+') && k != 0))
        {
            break;
        }
    }
    for (int i = 0; i < k; i++)
    {
        if (ans[i] == '0')
        {
            ans[i]=' ';
        }
        else
        {
            break;
        }
    }
    size = ans.length();
    cout<<size<<endl;
    cout<<check_sign;
}
int main()
{
    string s = "0-04500abc123";
    myAtoi(s);
    return 0;
}