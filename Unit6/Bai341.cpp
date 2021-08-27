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
int CountPositiveInEdgeOfMatrix(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        if(a[i][0] > 0)
        {
            count++;
        }
        if (a[i][c-1] > 0)
        {
            count++;
        }
    }
    for(int i = 1; i < c - 1; i++)
    {
        if(a[0][i] > 0)
        {
            count++;
        }
        if (a[r-1][i] > 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[100][100];
    int r = 3, c= 3;
    Input2Dimension(a, r ,c);
    Print2Dimension(a, r ,c);
    cout << CountPositiveInEdgeOfMatrix(a, r, c);
}