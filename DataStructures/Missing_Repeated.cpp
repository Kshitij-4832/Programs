#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> matrix = {
        {1, 3},
        {2, 2},
    };
    int size = matrix.size();
    int sum = 0, ideal_sum = ((size * size) * ((size * size) + 1)) / 2,extra= 0;
    bool check1 = false;
    unordered_set<int> s;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (s.find(matrix[i][j]) != s.end() && !check1)
            {
                check1 = true;
                extra = matrix[i][j];
                cout << "Repeated value " << matrix[i][j] << endl;
            }
            sum += matrix[i][j];
            s.insert(matrix[i][j]);
        }
    }
    cout << "Missing number " << abs(ideal_sum - sum+extra) << endl;
    return 0;
}