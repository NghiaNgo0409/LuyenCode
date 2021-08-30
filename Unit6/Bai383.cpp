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
bool CheckPerfect(int n)
{
    int sum = 0;
    for(int i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int FindFirstPerfect(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (CheckPerfect(a[i][j]))
            {
                return a[i][j];
            }
        }
    }
}
int FindPerfectMin(int a[100][100], int r, int c)
{
    int min = FindFirstPerfect(a, r, c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(CheckPerfect(a[i][j]) && a[i][j] < min)
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
    Input2Dimension(a, r, c);
    cout << FindPerfectMin(a, r, c);
}