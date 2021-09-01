#include <iostream>
#include <math.h>
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
int CountCharacter(int n)
{
    int x = abs(n);
    int count = 0;
    while(x > 0)
    {
        count++;
        x /= 10;
    }
    return count;
}
int CountCharacterInColumn(int a[100][100], int r, int c)
{
    int count = 0;
    for(int i = 0; i < r; i++)
    {
        count += CountCharacter(a[i][c]);
    }
    return count;
}
void PrintColumn(int a[100][100], int r, int c)
{
    for(int i = 0; i < r; i++)
    {
        cout << a[i][c] << " ";
    }
    cout << endl;
}
void PrintMostCharacterColumn(int a[100][100], int r, int c)
{
    int count[100] = {0};
    for(int i = 0; i < c; i++)
    {
        count[i] = CountCharacterInColumn(a, r, i);
    }
    int max = count[0];
    for(int i = 0; i < c; i++)
    {
        max = (max > count[i]) ? max : count[i];
    }
    for(int i = 0; i < c; i++)
    {
        if (max == count[i])
        {
            PrintColumn(a, r, i);
        }
    }
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintMostCharacterColumn(a, r, c);
}