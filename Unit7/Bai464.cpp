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
void SumRow(int a[100][100], int r, int c, int b[])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[i] += a[i][j];
        }
    }
}
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void SwapRow(int a[100][100], int r1, int r2, int c)
{
    for(int i = 0; i < c; i++)
    {
        Swap(a[r1][i], a[r2][i]);
    }
}
void ArrangeIncrease(int a[100][100], int r, int c)
{
    int b[100];
    SumRow(a, r, c, b);
    for(int i = 0; i < r - 1; i++)
    {
        for(int j = i + 1; j < c; j++)
        {
            if(b[i] > b[j])
            {
                SwapRow(a, i, j, c);
                Swap(b[i], b[j]);
            }
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    ArrangeIncrease(a , r, c);
    Print2Dimension(a, r, c);
}