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
void ArrangeEx413(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        if(i % 2 == 0)
        {
            for(int j = 0; j < c - 1; j++)
            {
                for(int k = j + 1; k < c; k++)
                {
                    if(a[i][j] > a[i][k])
                    {
                        Swap(a[i][j], a[i][k]);
                    }
                }
            }
        }
        else if (i % 2 == 1)
        {
            for(int j = 0; j < c - 1; j++)
            {
                for(int k = j + 1; k < c; k++)
                {
                    if(a[i][j] < a[i][k])
                    {
                        Swap(a[i][j], a[i][k]);
                    }
                }
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
    ArrangeEx413(a, r, c);
    Print2Dimension(a, r, c);
}