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
bool FindFirstPositive(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] >= 0)
            {
                return a[i][j];
            }   
        }
    }
}
int FindMinPositive(int a[100][100], int r, int c)
{
    int min = FindFirstPositive(a, r, c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] >= 0 && a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    return min;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r ,c);
    cout << FindMinPositive(a, r, c);
}