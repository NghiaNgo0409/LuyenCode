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
void SplitCharacter(int n, int b[])
{
    int num;
    n = abs(n);
    do
    {
        num = n % 10;
        b[num]++;
        n /= 10;
    } while (n > 0);
}
void FindCharacterMost(int a[100][100], int r, int c)
{
    int b[10] = {0};
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            SplitCharacter(a[i][j], b);
        }
    }
    int numMost = 0;
    for(int i = 0; i < 10; i++)
    {
        if (b[numMost] < b[i])
        {
            numMost = i;
        }
    }
    cout << "Cac chu so xuat hien nhieu nhat: ";
    for(int i = 0; i < 10; i++)
    {
        if (b[numMost] == b[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    FindCharacterMost(a, r, c);
}