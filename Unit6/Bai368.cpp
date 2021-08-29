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
int FindMax(int a[100][100], int r, int c)
{
    int max = a[0][0];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (a[i][j] >= max)
            {
                max = a[i][j];
            }
        }
    }
    return max;
}
int FindSecondMax(int a[100][100], int r, int c)
{
    int max = FindMax(a, r, c), max2 = a[0][0];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (max > a[i][j] && max2 <= a[i][j])
            {
                max2 = a[i][j];
            }
        }
    }
    return max2;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    cout << FindSecondMax(a, r, c);
}