#include <iostream>
using namespace std;
void Input2Dimension(int a[100][100], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Nhap a[" << i <<"][" << j << "]: ";
            cin >> a[i][j];
        }
    }
}
void Print2Dimension(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
bool IsBiggestInRow(int a[100][100], int m, int n, int column)
{
    int max = a[m][n];
    for(int i = 0; i < column; i++)
    {
        if (a[m][i] > max)
        {
            return false;
        }
    }
    return true;
}
bool IsBiggestInColumn(int a[100][100], int m, int n, int row)
{
    int max = a[m][n];
    for(int i = 0; i < row; i++)
    {
        if (a[i][n] > max)
        {
            return false;
        }
    }
    return true;
}
bool IsSmallestInRow(int a[100][100], int m, int n, int column)
{
    int min = a[m][n];
    for(int i = 0; i < column; i++)
    {
        if(a[m][i] < min)
        {
            return false;
        }
    }
    return true;
}
bool IsSmallestInColumn(int a[100][100], int m, int n, int row)
{
    int min = a[m][n];
    for(int i = 0; i < row; i++)
    {
        if(a[i][n] < min)
        {
            return false;
        }
    }
    return true;
}
int CountTruthValue(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if((IsBiggestInRow(a, i, j, 3) && IsBiggestInColumn(a, i ,j, 3)) || (IsSmallestInColumn(a, i, j, 3) && IsSmallestInRow(a, i, j, 3)))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[100][100];
    Input2Dimension(a, 3, 3);
    Print2Dimension(a, 3, 3);
    cout << CountTruthValue(a, 3, 3);
}