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
bool CheckMaPhuong(int a[100][100], int r, int c)
{
    int i , j , sum1, sum2, temp;
    for(sum1 = sum2 = i = 0; i < r; i++)
    {
        sum1 += a[i][i];
        sum2 += a[i][r - 1 - i];
    }
    if(sum1 != sum2)
    {
        return false;
    }
    temp = sum1;
    for(int i = 0; i < r; i++)
    {
        for(sum1 = sum2 = j = 0; j < c; j++)
        {
            sum1 += a[i][j];
            sum2 += a[j][i];
        }
    }
    if (sum1 != temp || sum2 != temp)
    {
        return false;
    }
    return true;
}
int main()
{

}