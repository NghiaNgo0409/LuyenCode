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
bool CheckDecreasingRow(int a[100][100], int row, int column)
{
    for(int i = 0; i < column - 1; i++)
    {
        for(int j = i + 1; j < column; j++)
        {
            if (a[row][i] < a[row][j])
            {
                return false;
            }
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
void PrintDecreasingRow(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        if(CheckDecreasingRow(a, i ,c))
        {
            PrintRow(a, i, c);
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintDecreasingRow(a, r, c);
}