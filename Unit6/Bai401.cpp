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
void SwapColumn(int a[100][100], int r, int c1, int c2)
{
    for(int i = 0; i < r; i++)
    {
        Swap(a[i][c1], a[i][c2]);
    }
}
void DeleteColumn(int a[100][100], int index, int r, int& c)
{
    for(int i = index + 1; i < c; i++)
    {
        SwapColumn(a, r, i-1, i);
    }
    c--;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    DeleteColumn(a, 1, r, c);
    Print2Dimension(a, r, c);
}