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
    if (n < 2)
    {
        return false;
    }
    else
    {
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
int FindFirstPrime(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (CheckPrime(a[i][j]))
            {
                return a[i][j];
            }
        }
    }
}
int FindPrimeMax(int a[100][100], int r, int c)
{
    int max = FindFirstPrime(a, r ,c);
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (CheckPrime(a[i][j]) && a[i][j] >= max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    cout << FindPrimeMax(a, r ,c);
}