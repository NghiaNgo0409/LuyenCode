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
bool CheckFullPositiveRow(int a[100][100], int row, int column)
{
    for(int i = 0; i < column; i++)
    {
        if (a[row][i] <= 0)
        {
            return false;
        }
    }
    return true;
}
bool CheckFullNegativeRow(int a[100][100], int row, int column)
{
    for(int i = 0; i < column; i++)
    {
        if (a[row][i] >= 0)
        {
            return false;
        }
    }
    return true;
}
bool CheckFull0Row(int a[100][100], int row, int column)
{
    for(int i = 0; i < column; i++)
    {
        if (a[row][i] != 0)
        {
            return false;
        }
    }
    return true;
}
void PrintRow(int a[100][100], int row, int column)
{
    for(int i = 0; i < column; i++)
    {
        cout << a[row][i] << " ";
    }
    cout << endl;
}
void PrintFullRowEx361(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        if(!CheckFull0Row(a, i, c) && !CheckFullNegativeRow(a, i, c) && !CheckFullPositiveRow(a, i ,c))
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
    PrintFullRowEx361(a, r ,c);
}