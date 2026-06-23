#include <iostream>
#include <vector>
using namespace std;
bool Search_Matrix(vector<vector<int>> &matrix, int target)
{
    int i = 0, j = matrix[0].size() - 1;
    while (i <=matrix.size()-1 && j >= 0)
    {
        if(target==matrix[i][j]){
            return true;
        }
        else if(target>matrix[i][j]){
            i++;
        }
        else{
            j--;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30},
    };
    int target = 16;
    cout << Search_Matrix(matrix, target);
    return 0;
}