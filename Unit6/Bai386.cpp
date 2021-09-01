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
int SumColumn(int a[100][100], int r, int column)
{
    int sum = 0;
    for(int i = 0; i < r; i++)
    {
        sum += a[i][column];
    }
    return sum;
}
void PrintColumn(int a[100][100], int r, int column)
{
    for(int i = 0; i < r; i++)
    {
        cout << a[i][column] << " ";
    }
    cout << endl;
}
void PrintMinSumColumn(int a[100][100], int r, int c)
{
    int min = SumColumn(a, r, 0), index = 0;
    for(int i = 0; i < c; i++)
    {
        if(SumColumn(a, r, i) < min)
        {
            min = SumColumn(a, r, i);
            index = i;
        }
    }
    PrintColumn(a, r, index);
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintMinSumColumn(a, r, c);
}