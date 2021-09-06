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
void Sum2Matrix(int a[100][100], int r, int c, int b[100][100], int temp[100][100])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            temp[i][j] = a[i][j] + b[i][j];
        }
    }
}
int main()
{
    int a[100][100];
    int b[100][100];
    int sum[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Input2Dimension(b, r, c);
    Sum2Matrix(a, r, c, b, sum);
    Print2Dimension(sum, r, c);
}