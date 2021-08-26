// softerud4 sv8 chúc anh và gia đình thật nhiều sức khỏe trong mùa dịch ạ
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
int MultiplyOddPositiveValue(int a[100][100], int r, int c)
{
    int multiply = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] % 2 != 0 && a[i][j] >= 0)
            {
                multiply *= a[i][j];
            }
        }
    }
    return multiply;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r ,c);
    cout << MultiplyOddPositiveValue(a, r ,c);
}