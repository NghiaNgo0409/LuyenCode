#include <iostream>
#include <math.h>
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
void PrintColumn(int a[100][100], int row, int column)
{
    for(int i = 0; i < row; i++)
    {
        cout << a[i][column] << " ";
    }
    cout << endl;
}
bool CheckSquareNumber(int n)
{
    int x = sqrt(n);
    if (x * x == n)
    {
        return true;
    }
    return false;
}
void PrintFullSquareColumn(int a[100][100], int r, int c)
{
    for(int i = 0; i < c; i++)
    {
        int flag = 1;
        for(int j = 0; j < r; j++)
        {
            if(!CheckSquareNumber(a[j][i]))
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            PrintColumn(a, r, i);
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r ,c);
    PrintFullSquareColumn(a, r, c);
}