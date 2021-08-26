#include <iostream>
using namespace std;
void Swap(double& a, double& b)
{
    double temp = a;
    a = b;
    b = temp;
}
void Input2Dimension(double a[100][100], int r, int c)
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
void Print2Dimension(double a[100][100], int r, int c)
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
void ArrangeIncreasing(double a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c - 1; j++)
        {
            if (a[i][j] > a[i][j+1])
            {
                Swap(a[i][j], a[i][j+1]);
            }
        }
    }

    for(int i = 0; i < c; i++)
    {
        for(int j = 0; j < r - 1; j++)
        {
            if (a[j][i] > a[j][i+1])
            {
                Swap(a[j][i], a[j][i+1]);
            }
        }
    }
}
int main()
{
    double a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    ArrangeIncreasing(a, r, c);
    Print2Dimension(a, r ,c);
}