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
int CountSeparateValue(int a[100][100], int r, int c)
{
    int n = r * c;
    int count = 0, flag;
    for(int i = 0; i < r; i++)
    {
        for(int j = i + 1; j < c; j++)
        {
            if(a[j / c][j % c] == a[i / c][i % c])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r ,c);
    Print2Dimension(a, r, c);
    cout << CountSeparateValue(a, r, c);
}