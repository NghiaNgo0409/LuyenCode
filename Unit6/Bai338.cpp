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
int CountPositiveIn1Row(int a[100][100], int row, int c)
{
    int count = 0;
    for(int i = 0; i < c; i++)
    {
        if (a[row][i] >= 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[100][100];
    int r = 3, c =3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << CountPositiveIn1Row(a, 2, c);
}