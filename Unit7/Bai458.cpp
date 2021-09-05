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
bool CheckCouple(int a[100][100], int r, int c)
{
    for(int i = 0; i < r - 1; i++)
    {
        for(int j = 0; j < r - 1 -i; j++)
        {
            if(a[i][j] != a[r - 1 - j][r - 1 - i])
            {
                return false;
            }
        }
    }
    return true;    
}
int main()
{
    
}