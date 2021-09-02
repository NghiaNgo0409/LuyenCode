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
void ArrangeMatrixIncreasing(int a[100][100], int r, int c)
{
    int temp[100], index = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if (a[i][j] > 0)
            {
                temp[index++] = a[i][j];
            }
        }
    }

    for(int i = 0; i < index - 1; i++)
    {
        for(int j = i + 1; j < index; j++)
        {
            if(temp[i] > temp[j])
            {
                Swap(temp[i], temp[j]);
            }
        }
    }
    
    index = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            a[i][j] = temp[index++];
        }
    }
}
int main()
{
    
}