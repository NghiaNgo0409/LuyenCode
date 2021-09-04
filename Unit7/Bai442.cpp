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
int SumOnEdgeEven(int a[100][100], int r, int c)
{
    int sum = 0;
    for(int i = 0; i < c; i++)
    {
        if (a[0][i] % 2 == 0)
        {
            sum += a[0][i];
        }
    }

    for(int i = 0; i < c; i++)
    {
        if (a[r-1][i] % 2 == 0)
        {
            sum += a[r-1][i];
        }
    }

    for(int i = 1; i < r - 1; i++)
    {
        if (a[i][0] % 2 == 0)
        {
            sum += a[i][0];
        }

        if (a[i][c-1] % 2 == 0)
        {
            sum += a[i][c-1];
        } 
    }

    return sum;
}
int main()
{
    int a[100][100];
    int r = 3 , c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << SumOnEdgeEven(a, r, c);
}