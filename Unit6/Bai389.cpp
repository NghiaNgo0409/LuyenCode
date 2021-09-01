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
        if (n % i == 0)
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
int CountPerfectInRow(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < c; i++)
    {
        if (CheckPerfect(a[r][i]))
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
void PrintMostPerfectRow(int a[100][100], int r, int c)
{
    int count[100] = {0};
    for(int i = 0; i < r; i++)
    {
        count[i] = CountPerfectInRow(a, i, c);
    }
    int max = count[0];
    for(int i = 0; i < r; i++)
    {
        max = (max > count[i]) ? max : count[i];
    }
    for(int i = 0; i < r; i++)
    {
        if (max == count[i])
        {
            PrintRow(a, i, c);
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintMostPerfectRow(a, r, c);
}