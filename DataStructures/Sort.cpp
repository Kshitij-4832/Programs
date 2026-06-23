#include <iostream>
#include <vector>
using namespace std;

void Bubble_Sort(vector<int> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
    {
        bool check = false;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
                check = true;
            }
        }
        if (!check)
        {
            return;
        }
    }
}
void Selection_Sort(vector<int> &vec)
{
    int size = vec.size(), index = 0;
    for (int i = 0; i < size - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (vec[index] > vec[j])
            {
                index = j;
            }
        }
        swap(vec[index], vec[i]);
    }
}
void Insertion_Sort(vector<int> &vec)
{
    int size = vec.size();
    // First element is assumed to be sorted.
    for (int i = 1; i < size; i++)
    {
        int curr = vec[i];
        int prev = i - 1;
        while (prev >= 0 && vec[prev] > curr)
        {
            swap(vec[prev + 1], vec[prev]);
            prev--;
        }
    }
}
int main()
{
    vector<int> vec = {4, 1, 5, 2, 3, 8, 7, 0, 11};
    // Bubble_Sort(vec);
    // Selection_Sort(vec);
    Insertion_Sort(vec);
    for (int ans : vec)
    {
        cout << ans << " ";
    }
    return 0;
}