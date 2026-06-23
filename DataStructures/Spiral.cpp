#include <iostream>
#include <vector>
using namespace std;
void Spiral_Traversal(vector<vector<int>> &matrix)
{
    int srow = 0, erow = matrix.size() - 1;
    int scol = 0, ecol = matrix[0].size() - 1;
    while (scol <= ecol  && srow <= erow)
    {

        for (int i = scol; i <= ecol; i++)
        {
            cout << matrix[srow][i] << " ";
        }
        for (int i = srow+1; i <= erow; i++)
        {
            cout << matrix[i][ecol] << " ";
        }
        for (int i = ecol-1; i >= scol; i--)
        {
            if(srow==erow){
                break;
            }
            cout << matrix[erow][i] << " ";
        }
        for (int i = erow-1; i >= srow+1; i--)
        {
            if(srow==erow){
                break;
            }
            cout << matrix[i][scol] << " ";
        }
        scol++;
        srow++;
        ecol--;
        erow--;
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {13, 14, 15, 16}};
    Spiral_Traversal(matrix);
    return 0;
}