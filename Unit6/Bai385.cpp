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
void PrintRow(int a[100][100], int row, int column)
{
    for(int i = 0; i < column; i++)
    {
        cout << a[row][i] << " ";
    }
    cout << endl;
}
int SumOfRow(int a[100][100], int row, int c)
{
    int sum = 0;
    for(int i = 0; i < c; i++)
    {
        sum += a[row][i];
    }
    return sum;
}
void PrintMaxSumRow(int a[100][100], int r, int c)
{
    int maxValue = 0, maxRow = 0;
    for(int i = 0; i < r; i++)
    {
        if(SumOfRow(a, i, c) >= maxValue)
        {
            maxValue = SumOfRow(a, i ,c);
            maxRow = i;
        }
    }
    PrintRow(a, maxRow, c);
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintMaxSumRow(a, r, c);
}