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
int FindMax(int a[100][100], int r, int c)
{
    int max = a[0][0];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] >= max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
void PrintRow(int a[100][100], int row, int column)
{
    for(int i = 0; i < column; i++)
    {
        cout << a[row][i] << " ";
    }
    cout << endl;
}
void PrintRowContainsMax(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        int flag = 0;
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] == FindMax(a, r, c))
            {
                flag = 1;
                break;
            }
        }
        if(flag == 1)
        {
            PrintRow(a, i ,c);
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintRowContainsMax(a, r ,c);
}
