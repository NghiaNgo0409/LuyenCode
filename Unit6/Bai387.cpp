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
int CountEvenInRow(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < c; i++)
    {
        if (a[r][i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
void PrintRow(int a[100][100], int r, int c)
{
    for(int i = 0; i < c; i++)
    {
        cout << a[r][i] << " ";
    }
    cout << endl;
}
void PrintMostEvenRow(int a[100][100], int r, int c)
{
    int count = CountEvenInRow(a, 0, c), index = 0;
    for(int i = 0; i < r; i++)
    {
        if(CountEvenInRow(a, i, c) > count)
        {
            count = CountEvenInRow(a, i, c);
            index = i;
        }
    }
    PrintRow(a, index, c);
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintMostEvenRow(a, r ,c);
}