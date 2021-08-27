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
double TBNPositiveValueInMatrix(int a[100][100], int r, int c)
{
    int multiply = 1, count = 0;
    for (int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (a[i][j] > 0)
            {
                multiply *= a[i][j];
                count++;
            }
        }
    }
    return (double)multiply/count;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << TBNPositiveValueInMatrix(a, r, c);
}