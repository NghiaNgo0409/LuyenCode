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
bool CheckCuddle(int a[100][100], int m, int n, int row, int column)
{
    int max = a[m][n], min = a[m][n];
    for(int i = 0; i < column; i++)
    {
        if(a[m][i] > max)
        {
            return false;
        }
    }
    for(int i = 0; i < row; i++)
    {
        if(a[i][n] < min)
        {
            return false;
        }
    }
    return true;
}
int CountCuddle(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (CheckCuddle(a, i, j, r, c))
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
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << CountCuddle(a, r, c);
}