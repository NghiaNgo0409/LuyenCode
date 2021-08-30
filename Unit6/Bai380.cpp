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
int FindFirstEven(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                return a[i][j];
            }
        }
    }
}
int FindEvenMin(int a[100][100], int r, int c)
{
    int min = FindFirstEven(a, r, c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] % 2 == 0 && a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    return min;
}
int CountEvenMin(int a[100][100], int r, int c)
{
    int count = 0, min = FindFirstEven(a, r, c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] == min)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    cout << CountEvenMin(a, r, c);
}