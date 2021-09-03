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
void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}
void ArrangeEvenIncreasing(int a[100][100], int r, int c)
{
    int start1, start2, d = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] % 2 == 0)
            {
                for(start1 = i; start1 < r; start1++)
                {
                    if(d == 0)
                    {
                        start2 = j;
                    }
                    else
                    {
                        start2 = 0;
                    }
                    for(;start2 < c; start2++)
                    {
                        if(a[i][j] > a[start1][start2] && a[start1][start2] % 2 == 0)
                        {
                            Swap(a[i][j], a[start1][start2]);
                        }
                    }
                    if (start2 == c)
                    {
                        d = 1;
                    }
                }
                d = 0;
            }
        }
    }
}
void ArrangeOddDecreasing(int a[100][100], int r, int c)
{
    int start1, start2, d = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] % 2 == 1)
            {
                for(start1 = i; start1 < r; start1++)
                {
                    if(d == 0)
                    {
                        start2 = j;
                    }
                    else
                    {
                        start2 = 0;
                    }
                    for(;start2 < c; start2++)
                    {
                        if(a[i][j] < a[start1][start2] && a[start1][start2] % 2 == 1)
                        {
                            Swap(a[i][j], a[start1][start2]);
                        }
                    }
                    if (start2 == c)
                    {
                        d = 1;
                    }
                }
                d = 0;
            }
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    ArrangeEvenIncreasing(a, r, c);
    ArrangeOddDecreasing(a, r, c);
    Print2Dimension(a, r, c);
}
