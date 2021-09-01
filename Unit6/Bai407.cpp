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
void ArrangeIncreaseInRow(int a[100][100], int row, int c)
{
    for(int i = 0; i < c - 1; i++)
    {
        for (int j = i + 1; j < c; j++)
        {
            if(a[row][i] > a[row][j])
            {
                Swap(a[row][i], a[row][j]);
            }
        }
    }
}
int main()
{
    int a[100][100];
    int r =3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    ArrangeIncreaseInRow(a, 1 , c);
    Print2Dimension(a, r, c);
}