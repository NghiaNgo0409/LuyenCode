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
void CreateZiczagMatrix(int a[100][100], int r, int c)
{
    int dem = 1;
    for(int i = 0; i < r; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < c; j++)
            {
                a[i][j] = dem++;
            }
        }
        else
        {
            for(int j = c - 1; j >= 0; j--)
            {
                a[i][j] = dem++;
            }
        }
    }
}
int main()
{
    int a[100][100] , r = 3, c = 3;
    CreateZiczagMatrix(a, r, c);
    Print2Dimension(a, r, c);
}