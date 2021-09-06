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
void Multiply2Matrix(int a[100][100], int r, int c, int b[100][100], int temp[100][100])
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            temp[i][j] = 0;
            for(int k = 0; k < c; k++)
            {
                temp[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}
int main()
{
    int a[100][100];
    int b[100][100];
    int res[100][100] = {0};
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Input2Dimension(b, r ,c);
    Multiply2Matrix(a, r, c, b, res);
    Print2Dimension(res, r, c);
}