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
int SumEdgeOfMatrix(int a[100][100], int r, int c)
{
    int sum = 0;
    for(int i = 0; i < r; i++)
    {
        sum += a[i][0] + a[i][c-1];
    }
    for(int j = 1; j < c - 1; j++)
    {
        sum += a[0][j] + a[r -1][j];
    }
    return sum;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r ,c);
    Print2Dimension(a, r, c);
    cout << SumEdgeOfMatrix(a, r, c);
}