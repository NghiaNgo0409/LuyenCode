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
bool CheckDescreaseInRow(int a[100][100], int row, int column)
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
bool CheckDecreaseInColumn(int a[100][100], int row, int column)
{
    for(int i = 0; i < row - 1; i++)
    {
        for(int j = i + 1; j < row; j++)
        {
            if (a[i][column] < a[j][column])
            {
                return false;
            }
        }
    }
    return true;
}
bool CheckEx354(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(!CheckDecreaseInColumn(a, r ,j) && !CheckDescreaseInRow(a, i, c))
            {   
                return false;
            }
        }
    }
    return true;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << CheckEx354(a, r, c);
}