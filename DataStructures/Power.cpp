#include <iostream>
using namespace std;
// Standard Approach
/*double Pow()
{
    double n = 2.00000, ans = 1;
    int b = -2;
    if (b < 0)
    {
        b = ((b * (-1)));
        n = 1 / n;
    }
    for (int i = 0; i < b; i++)
    {
        ans = ans * n;
    }
    return ans;
}
*/
// Binary Exponentiation

double Pow()
{
    double x = 2, ans = 1, y = x;
    int n = -2, binary = n;
    if (n < 0)
    {
        x = 1 / (x);
        y = x;
        binary = (-1) * n;
    }
    while (binary != 0)
    {
        if (binary % 2 == 1)
        {
            ans = ans * y;
        }
        y = y * y;
        binary /= 2;
    }

    return ans;
}
int main()
{
    cout << Pow();
    return 0;
}