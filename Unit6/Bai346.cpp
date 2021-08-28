#include <iostream>
using namespace std;
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
bool CheckQueen(int a[100][100], int m, int n, int row, int column)
{
    int max = a[m][n];
    for(int i = 0; i < row; i++)
    {
        if (a[i][n] > max)
        {
            return false;
        }
    }

    for(int i = 0; i < column; i++)
    {
        if(a[m][i] > max)
        {
            return false;
        }
    }

    int m1 = m + 1;
    int n1 = n + 1;
    while(m1 <= row && n1 <= row)
    {
        if (a[m1][n1] > max)
        {
            return false;
        }
        m1++;
        n1++;
    }
    m1 = m - 1;
    n1 = n - 1;
    while(m1 >= 0 && n1 >= 0)
    {
        if (a[m1][n1] > max)
        {
            return false;
        }
        m1--;
        n1--;
    }
    int m2 = m - 1;
    int n2 = n + 1;
    while(m2 >= 0 && n2 <= column)
    {
        if (a[m2][n2] > max)
        {
            return max;
        }
        m2--;
        n2++;
    }
    m2 = m + 1;
    n2 = n - 1;
    while(n2 >= 0 && m2 <= row)
    {
        if (a[m2][n2] > max)
        {
            return max;
        }
        m2++;
        n2--;
    }
    return true;
}
int CountQueen(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(CheckQueen(a, i, j, r, c))
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    cout << CountQueen(a, r, c);
}
