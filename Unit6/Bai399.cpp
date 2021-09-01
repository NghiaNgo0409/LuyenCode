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
void TurnCounterClockWiseInEdge(int a[100][100], int r, int c)
{
    int i, j;
    int temp = a[0][0];
    //Bien phai dich tu duoi len
    for(i = 0, j = 0; j < c - 1; j++)
    {
        a[i][j] = a[i][j + 1];
    }
    //Bien tren dich phai qua trai
    for(i, j; i < r - 1; i++)
    {
        a[i][j] = a[i + 1][j];
    }
    //Bien trai dich tu tren xuong
    for(i, j; j > 0; j--)
    {
        a[i][j] = a[i][j-1];
    }
    //Bien duoi dich tu trai qua
    for(i, j; i > 1; i--)
    {
        a[i][j] = a[i-1][j];
    }
    a[1][0] = temp;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    TurnCounterClockWiseInEdge(a, r, c);
    Print2Dimension(a, r, c);
}