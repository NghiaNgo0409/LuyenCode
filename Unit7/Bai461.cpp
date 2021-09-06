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
void ArrangeDecresing(int a[100][100], int r, int c)
{
    for(int i = 0; i < r - 1; i++)
    {
        for(int j = i + 1; j < r; j++)
        {
            if(a[i][r - 1 - i] < a[j][r - 1 - j])
            {
                Swap(a[i][r - 1 - i], a[j][r - 1 -j]);
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
    ArrangeDecresing(a, r, c);
    Print2Dimension(a, r, c);
}