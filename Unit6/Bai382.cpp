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
bool CheckSquare(int n)
{
    int x = sqrt(n);
    if(x * x == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int FindFirstSquare(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(CheckSquare(a[i][j]))
            {
                return a[i][j];
            }
        }
    }
}
int FindSquareMax(int a[100][100], int r, int c)
{
    int max = FindFirstSquare(a, r, c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(CheckSquare(a[i][j]) && a[i][j] >= max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    cout << FindSquareMax(a, r, c);
}