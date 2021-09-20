#include <iostream>
using namespace std;
void Input(int a[], int n, int i = 0)
{
    if (i == n)
    {
        return;
    }
    cout << "Nhap vao a[" << i << "]" << endl;
    cin >> a[i];
    Input(a, n, i + 1);
}
void Output(int a[], int n, int i = 0)
{
    if(i == n)
    {
        return;
    }
    cout << a[i] << " ";
    Output(a, n, i + 1);
}
int Sum(int a[], int n, int i = 0, int sum = 0)
{
    if(i == n)
    {
        return sum;
    }
    return Sum(a, n, i + 1, sum + a[i]);
}
int FindMin(int a[], int n, int i = 0, int min = INT_MAX)
{
    if(i == n)
    {
        return min;
    }
    return FindMin(a, n, i + 1, min < a[i] ? min : a[i]);
}
int FindMax(int a[], int n, int i = 0, int max = INT_MIN)
{
    if(i == n)
    {
        return max;
    }
    return FindMax(a, n , i + 1, max > a[i] ? max : a[i]);
}
int CountEven(int a[], int n, int i = 0, int count = 0)
{
    if(i == n)
    {
        return count;
    }
    return CountEven(a, n, i+1, a[i] % 2 == 0 ? count + 1 : count);
}
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void ArrangeIncreasing(int a[], int n, int i = 0)
{
    if (i == n - 1)
    {
        return;
    }
    for(int k = i + 1; k < n; k++)
    {
        if(a[i] > a[k])
        {
            Swap(a[i], a[k]);
        }
    }
    ArrangeIncreasing(a, n, i + 1);
}
void ArrangeDecreasing(int a[], int n, int i = 0)
{
    if (i == n - 1)
    {
        return;
    }
    for(int k = i + 1; k < n; k++)
    {
        if (a[i] < a[k])
        {
            Swap(a[i], a[k]);
        }
    }
    ArrangeDecreasing(a, n, i + 1);
}
int main()
{
    
}