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
void ShiftDownMatrix(int a[100][100], int r, int c)
{
    int temp[100];
    for(int i = 0; i < c; i++)
    {
        temp[i] = a[r - 1][i];
    }
    for(int i = r - 1; i >= 1; i--)
    {
        SwapRow(a, i, i - 1, c);
    }
    for(int i = 0; i < c; i++)
    {
        a[0][i] = temp[i];
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r ,c);
    Print2Dimension(a, r, c);
    ShiftDownMatrix(a, r, c);
    Print2Dimension(a, r ,c);
}