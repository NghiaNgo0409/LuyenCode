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
void AddEdgeToMatrix(int a[100][100], int r, int c, int temp[], int& index)
{
    int i = 0, j;
    for(j = i; j < c; j++)
    {
        temp[index++] = a[i][j];
    }
    for(i++, j--; i < r; i++)
    {
        temp[index++] = a[i][j];
    }
    for(i--,j--; j >= 0; j--)
    {
        temp[index++] = a[i][j];
    }
    for(i--,j++; i > 0; i--)
    {
        temp[index++] = a[i][j];
    }
}
void ArrangeIncreasing(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] > a[j] && a[i] > 0 && a[j] > 0)
            {
                Swap(a[i], a[j]);
            }
        }
    }
}
void AddMatrixToEdge(int a[100][100], int r, int c, int temp[])
{
    int i = 0, j, index = 0;
    for(j = i; j < c; j++)
    {
        a[i][j] = temp[index++];
    }
    for(i++, j--; i < r; i++)
    {
        a[i][j] = temp[index++];
    }
    for(i--,j--; j >= 0; j--)
    {
        a[i][j] = temp[index++];
    }
    for(i--, j++; i > 0; i--)
    {
        a[i][j] = temp[index++];
    }
}
int main()
{
    int a[100][100], temp[100];
    int r = 3, c = 3, index = 0;
    Input2Dimension(a, r, c);
    Print2Dimension(a, r, c);
    AddEdgeToMatrix(a, r, c, temp, index);
    ArrangeIncreasing(temp, index);
    AddMatrixToEdge(a, r, c, temp);
    Print2Dimension(a, r, c);
}