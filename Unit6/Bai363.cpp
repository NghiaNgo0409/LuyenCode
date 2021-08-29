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
bool CheckIncreasingColumn(int a[100][100], int row, int column)
{
    for(int i = 0; i < row - 1; i++)
    {
        for(int j = i + 1; j < row; j++)
        {
            if (a[i][column] > a[j][column])
            {
                return false;
            }
        }
    }
    return true;
}
void PrintColumn(int a[100][100], int row, int column)
{
    for(int i = 0; i < row; i++)
    {
        cout << a[i][column] << " ";
    }
    cout << endl;
}
void PrintIncreasingColumn(int a[100][100], int r, int c)
{
    for(int i = 0; i < c; i++)
    {
        if(CheckIncreasingColumn(a, r, i))
        {
            PrintColumn(a, r, i);
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintIncreasingColumn(a, r, c);
}