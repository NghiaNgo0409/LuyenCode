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
bool CheckIncreasingMainDiagonal(int a[100][100], int r, int c)
{
    for(int i = 0; i < r - 1; i++)
    {
        for(int j = 0; j < c - 1; j++)
        {
            if(i == j)
            {
                for(int k = i + 1; k < r; k++)
                {
                    for(int l = j + 1; l < c; l++)
                    {
                        if(a[i][j] > a[k][l])
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
    return true;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r ,c);
    Print2Dimension(a, r, c);
    cout << CheckIncreasingMainDiagonal(a, r, c);
}