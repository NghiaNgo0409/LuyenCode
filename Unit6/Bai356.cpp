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
void PrintIndexFullEvenRow(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        int flag = 1;
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] % 2 != 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3 , c = 3;
    Input2Dimension(a, r, c);
    PrintIndexFullEvenRow(a, r, c);
}