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
void TurnClockWiseInEdge(int a[100][100], int r, int c)
{
    int i, j;
    int temp = a[0][0];
    // Bien ben trai dich tu duoi len
    for(i = 0, j = i; i < r - 1; i++)
    {
        a[i][j] = a[i + 1][j];
    }
    //Bien duoi dich tu phai qua trai
    for(j, i; j < c - 1; j++)
    {
        a[i][j] = a[i][j + 1];
    }
    //Bien ben phai dich tu tren xuong
    for(i, j; i > 0; i--)
    {
        a[i][j] = a[i - 1][j];
    }
    //Bien tren cung dich tu trai qua phai
    for(j, i; j > 1; j--)
    {
        a[i][j] = a[i][j-1];
    }
    a[0][1] = temp;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    TurnClockWiseInEdge(a, r, c);
    Print2Dimension(a, r, c);
}