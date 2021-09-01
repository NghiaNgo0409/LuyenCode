#include <iostream>
#include <math.h>
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
bool CheckPrime(int n)
{
    if(n < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int CountPrimeInRow(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < c; i++)
    {
        if (CheckPrime(a[r][i]))
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
void PrintMostPrimeRow(int a[100][100], int r, int c)
{
    int count = CountPrimeInRow(a, 0, c), index = 0;
    for(int i = 0; i < r; i++)
    {
        if (CountPrimeInRow(a, i, c) > count)
        {
            count = CountPrimeInRow(a, i ,c);
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
    PrintMostPrimeRow(a, r, c);
}