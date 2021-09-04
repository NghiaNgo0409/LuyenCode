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
int FindMaxRowIAndColumnJ(int a[100][100], int r, int c, int i, int j)
{
    int max = a[i][0];
    for(int k = 0; k < c; k++)
    {
        max = (a[i][k] > max) ? a[i][k] : max;
    }

    for(int k = 0; k < r; k++)
    {
        max = (a[k][j] > max) ? a[k][j] : max;
    }

    return max;
}
void CreateBMatrix(int a[100][100], int r, int c, int b[100][100])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[i][j] = FindMaxRowIAndColumnJ(a, r, c, i, j);
        }
    }
}
int main()
{
    int a[100][100], b[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    CreateBMatrix(a, r, c, b);
    Print2Dimension(b, r, c);
}