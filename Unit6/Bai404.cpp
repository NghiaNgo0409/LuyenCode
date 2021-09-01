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
void Turn270Degree(int a[100][100], int r, int c)
{
    int b[100][100];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[i][j] = a[c - 1 - j][i];
        }
    }
    int d[100][100];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            d[i][j] = b[c - 1 - j][i];
        }
    }

    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            b[i][j] = d[c - 1 - j][i];
        }
    }
    Print2Dimension(b, r, c);
}
int main()
{
    int a[100][100];
    int r =3, c =3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    Turn270Degree(a, r, c);
}