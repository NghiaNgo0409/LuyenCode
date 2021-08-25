#include <iostream>
using namespace std;
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
double FindMax(double a[100][100], int r, int c)
{
    double max = a[0][0];
    for(int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int main()
{
    double a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << FindMax(a, r, c);
}