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
void CreateAbsoluteMatrix(int a[100][100], int r, int c, int b[][100], int& rb, int& cb)
{
    rb = r;
    cb = c;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[i][j] = abs(a[i][j]);
        }
    }
}
int main()
{
    int a[100][100], b[100][100];
    int r = 3, c = 3, rb , cb;
    Input2Dimension(a, r, c);
    CreateAbsoluteMatrix(a, r, c, b, rb, cb);
    Print2Dimension(b, rb, cb);
}