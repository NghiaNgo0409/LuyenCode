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
int CountTimesAppear(int a[100][100], int r, int c, int x)
{
    int temp = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (a[i][j] == x)
            {
                temp++;
            }
        }
    }
    return temp;
}
int FindTimesAppearMost(int a[100][100], int r, int c)
{
    int temp1, temp = CountTimesAppear(a, r, c, a[0][0]), index1 = 0, index2 = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            temp1 = CountTimesAppear(a, r, c, a[i][j]);
            if(temp < temp1)
            {
                temp = temp1;
                index1 = i;
                index2 = j;
            }
        }
    }
    return a[index1][index2];
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    cout << FindTimesAppearMost(a, r, c);
}