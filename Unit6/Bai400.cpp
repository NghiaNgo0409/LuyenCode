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
        Swap(a[r1][c], a[r2][c]);
    }
}
void DeleteRow(int a[100][100], int index, int& r, int c)
{
    for(int i = index + 1; i < r; i++)
    {
        SwapRow(a, i - 1, i , c);
    }
    r--;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    DeleteRow(a, 1, r ,c);
    Print2Dimension(a, r, c);
}