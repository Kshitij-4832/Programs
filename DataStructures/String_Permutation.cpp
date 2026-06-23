#include <iostream>
using namespace std;
bool isFreqSame(int freq1[26], int freq2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (freq1[i] != freq2[i])
        {
            return false;
        }
    }
    return true;
}
bool permute_exist(string s1, string s2)
{
    int freq1[26] = {0};
    int size1 = s1.length();
    for (int i = 0; i < size1; i++)
    {
        freq1[s1[i] - 'a']++;
    }
    int windowsize = size1;
    //int freq2[26] = {0};
    for (int i = 0; i < s2.length(); i++)
    {
        int windowindex = 0, index = i;
        int freq2[26] = {0};

        while (windowindex < windowsize && index < s2.length())
        {
            freq2[s2[index++] - 'a']++;
            windowindex++;
        }
        if (isFreqSame(freq1, freq2))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string s1 = "ab", s2 = "eidbaooo";
    cout << permute_exist(s1, s2) << endl;
    return 0;
}