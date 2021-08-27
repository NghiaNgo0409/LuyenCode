#include <iostream>
using namespace std;
int CountCharaterOfNumber(int n)
{
    int count = 0;
    while(n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}
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
int CountAllCharacterNumberInMatrix(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            count += CountCharaterOfNumber(a[i][j]);
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
    cout << CountAllCharacterNumberInMatrix(a, r, c);
}