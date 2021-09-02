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
void ArrangeIncreasing(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                Swap(a[i], a[j]);
            }
        }
    }
}
void PrintEvenInIncreasing(int a[100][100], int r, int c)
{
    int b[100], length = 0;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            if(a[i][j] % 2 == 0)
            {
                b[length++] = a[i][j];
            }
        }
    }

    ArrangeIncreasing(b, length);
    for(int i = 0; i < length; i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[100][100];
    int r = 3, c = 3;
    Input2Dimension(a, r, c);
    PrintEvenInIncreasing(a, r, c);
}