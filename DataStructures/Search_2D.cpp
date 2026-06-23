#include <iostream>
#include <vector>
using namespace std;
bool search_row(vector<vector<int>> &matrix, int target, int mid)
{
    int startrow = 0, endrow = matrix[0].size() - 1;
    while (startrow <= endrow)
    {
        int mindex = (startrow + endrow) / 2;
        if(matrix[mid][mindex]==target){
            return true;
        }
        else if(target>matrix[mid][mindex]){
            startrow = mindex+1;
        }
        else{
            endrow = mindex-1;
        }
    }
    return false;
}
bool Search_Matrix(vector<vector<int>> &matrix, int target)
{
    int row = matrix.size(), col = matrix[0].size(), start = 0, end = row - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (target >= matrix[mid][0] && target <= matrix[mid][col - 1])
        {
            return search_row(matrix, target, mid);
        }
        else if (target > matrix[mid][col - 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return true;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60},
        {68, 76, 79, 82}};
    int target = 75;
    cout << Search_Matrix(matrix, target);
    return 0;
}