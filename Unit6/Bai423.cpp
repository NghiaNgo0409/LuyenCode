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
void CreateSpiralArray(int a[100][100], int r, int c)
{
    int left = 0, up = 0, down = r, right = c, count = 0, n = r * c;
    while(count < n)
    {
        //Run up
        for(int i = left; i < right; i++)
        {
            if(count < n)
            {
                a[up][i] = count++;
            }
        }
        up++;
        //Run right
        for(int i = up; i < down; i++)
        {
            if(count < n)
            {
                a[i][right-1] = count++;
            }
        }
        right--;
        //Run down
        for(int i = right - 1; i >= left; i--)
        {
            if(count < n)
            {
                a[down-1][i] = count++;
            }
        }
        down--;
        //Run left
        for(int i = down - 1; i >= up; i--)
        {
            if(count < n)
            {
                a[i][left] = count++;
            }
        }
        left++;
    }
}
int main()
{
    int a[100][100], r = 3, c = 3;
    Input2Dimension(a, r ,c );
    CreateSpiralArray(a, r, c);
    Print2Dimension(a, r, c);
}